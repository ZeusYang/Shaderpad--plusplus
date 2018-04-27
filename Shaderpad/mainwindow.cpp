#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "textchild.h"
#include "themedialog.h"
#include <QFileDialog>
#include <QSignalMapper>
#include <QPrinter>
#include <QPrintDialog>
#include <QFile>
#include <QPrintPreviewDialog>
#include <QFileInfo>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Shaderpad++"));
    setWindowState(Qt::WindowMaximized);
    ui->tabWidget->setTabsClosable(true);
    //点击叉号关闭文档页面
    connect(ui->tabWidget,&QTabWidget::tabCloseRequested,
            this,&MainWindow::closeCurrentPage);
    delete ui->tab;
    delete ui->tab_2;
    //创建间隔期动作并在其中设置间隔器
    actionSeparator = new QAction(this);
    actionSeparator->setSeparator(true);
    //更新菜单
    updateMenus(-1);
    //当有活动窗口时更新菜单
    connect(ui->tabWidget,&QTabWidget::currentChanged,
            this,&MainWindow::updateMenus);

    //创建信号映射器
    windowMapper = new QSignalMapper(this);
    //映射器重新发射信号，根据信号设置活动窗口
    connect(windowMapper,SIGNAL(mapped(QWidget*)),
            this,SLOT(setActiveSubWindow(QWidget*)));
    updateFileItemsMenu();
    connect(ui->menu_File,&QMenu::aboutToShow,
            this,&MainWindow::updateFileItemsMenu);

    //主题窗口
    themeDlg = new ThemeDialog(this);
    themeDlg->setWindowModality(Qt::WindowModal);
    //将确认修改主题的信号与函数链接起来
    connect(themeDlg,&ThemeDialog::ThemeChanged,this,&MainWindow::changeTheme);

//    QFile file(":/qss/darkblue.css",this);
//    file.open(QFile::ReadOnly);
//    QString styleSheet = tr(file.readAll());
//    this->setStyleSheet(styleSheet);
//    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    TextChild *newone = createTextChild();
    newone->newFile();
    ui->tabWidget->addTab(newone,newone->currentName());
    setActiveSubWindow(newone);
    newone->show();
}

void MainWindow::closeCurrentPage(int index)
{
    QWidget* child =  ui->tabWidget->widget(index);
    ui->tabWidget->removeTab(index);
    child->close();
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    if(!fileName.isEmpty()){
        TextChild *existing = findTextChild(fileName);
        if(existing){//文件已经存在
            setActiveSubWindow(existing);
            return;
        }
        //没有打开过，则新建子窗口
        existing = createTextChild();
        if(existing->loadFile(fileName)){
            ui->tabWidget->addTab(existing,existing->currentName());
            setActiveSubWindow(existing);
            ui->statusBar->showMessage(tr("打开文件成功"),2000);
            existing->show();
        }
        else{
            existing->close();
        }

    }
}

void MainWindow::updateMenus(int index)
{
    //index为-1表示没有窗口
    bool hasTextChild = (index != -1);
    ui->actionSave->setEnabled(hasTextChild);
    ui->actionSaveAs->setEnabled(hasTextChild);
    ui->actionPaste->setEnabled(hasTextChild);
    ui->actionClose->setEnabled(hasTextChild);
    ui->actionCloseAll->setEnabled(hasTextChild);
    ui->actionNext->setEnabled(hasTextChild);
    ui->actionPrevious->setEnabled(hasTextChild);
    ui->actionSaveAll->setEnabled(hasTextChild);
    ui->actionSelectAll->setEnabled(hasTextChild);
    ui->actionSearch->setEnabled(hasTextChild);
    ui->actionPrint->setEnabled(hasTextChild);
    ui->actionPrintView->setEnabled(hasTextChild);
    ui->actionPDFExport->setEnabled(hasTextChild);

    //设置间隔期是否显示
    actionSeparator->setVisible(hasTextChild);

    //有活动窗口且有被选中的文本，剪切、复制、注释才可用
    bool selection = (activeTextChild()
                      && activeTextChild()->textCursor().hasSelection());
    ui->actionCut->setEnabled(selection);
    ui->actionCopy->setEnabled(selection);
    ui->actionComment->setEnabled(selection);

    //有活动窗口且文档有撤销操作时撤销动作可用
    ui->actionUndo->setEnabled(activeTextChild()
                               && activeTextChild()->document()->isUndoAvailable());
    //有活动窗口且文档有恢复操作时恢复动作可用
    ui->actionRedo->setEnabled(activeTextChild()
                               && activeTextChild()->document()->isRedoAvailable());

}

TextChild *MainWindow::createTextChild()
{
    TextChild *child = new TextChild;

    //是否可以复制
    connect(child,&TextChild::copyAvailable,ui->actionCut,&QAction::setEnabled);
    connect(child,&TextChild::copyAvailable,ui->actionCopy,&QAction::setEnabled);
    //是否可以撤销
    connect(child,&TextChild::redoAvailable,ui->actionRedo,&QAction::setEnabled);
    connect(child,&TextChild::undoAvailable,ui->actionUndo,&QAction::setEnabled);
    return child;
}

void MainWindow::setActiveSubWindow(QWidget *window)
{
    if(!window)return;
    ui->tabWidget->setCurrentWidget(window);
}

void MainWindow::updateFileItemsMenu()
{
    //更新文档这个菜单项的动作
    //先清空菜单，然后再添加各个菜单动作
    ui->menu_File->clear();
    ui->menu_File->addAction(ui->actionSearch);
    ui->menu_File->addSeparator();
    ui->menu_File->addAction(ui->actionNext);
    ui->menu_File->addAction(ui->actionPrevious);
    ui->menu_File->addAction(actionSeparator);

    //如果有活动窗口，则显示间隔器
    QList<QWidget*> windows;
    //遍历获取它的所有子textchild
    for(auto i = 0;i < ui->tabWidget->count();++i){
        windows.push_back(ui->tabWidget->widget(i));
    }
    actionSeparator->setVisible(!windows.isEmpty());
    for(auto x = 0;x < windows.size();++x){
        TextChild* child = qobject_cast<TextChild*>(windows.at(x));
        QString text;
        if(x < 9){//前九个，我们设置编号为快捷键
            text = tr("&%1 %2").arg(x+1).
                    arg(child->userFriendlyCurrentFile());
        }
        else{
            text = tr("%1 %2").arg(x+1)
                    .arg(child->userFriendlyCurrentFile());
        }
        QAction *action = ui->menu_File->addAction(text);
        action->setCheckable(true);
        action->setChecked(child == activeTextChild());
        //关联动作的触发信号到信号映射器的map()槽,map()会发射mapped
        connect(action,SIGNAL(triggered()),windowMapper,SLOT(map()));
        //将动作与响应的窗口部件进行映射
        //在发射mapped()信号时就会以这个窗口部件为参数
        windowMapper->setMapping(action,windows.at(x));
    }
}

TextChild *MainWindow::activeTextChild()
{
    //返回当前活动窗口
    if(ui->tabWidget->currentIndex() != -1)
        return qobject_cast<TextChild*>(ui->tabWidget->currentWidget());
    else
        return nullptr;
}

TextChild *MainWindow::findTextChild(const QString &fileName)
{
    QString canonicalFilePath = QFileInfo(fileName).canonicalFilePath();
    //遍历全部窗口，如果其中有文件路径与要查找的文件相同，则返回该窗口
    for(int i = 0;i < ui->tabWidget->count();++i){
        TextChild *cur = qobject_cast<TextChild*>(ui->tabWidget->widget(i));
        if(cur->currentFile() == canonicalFilePath){
            return cur;
        }
    }
    return nullptr;
}

void MainWindow::on_actionSave_triggered()
{
    if(activeTextChild() && activeTextChild()->save())
        ui->statusBar->showMessage(tr("文件保存成功"),2000);
}

void MainWindow::on_actionSaveAs_triggered()
{
    if(activeTextChild() && activeTextChild()->saveAs())
        ui->statusBar->showMessage(tr("文件保存成功"),2000);
}

void MainWindow::on_actionSaveAll_triggered()
{
    for(auto x = 0;x < ui->tabWidget->count();++x){
        TextChild *child = qobject_cast<TextChild*>(ui->tabWidget->widget(x));
        child->save();
    }
}

void MainWindow::on_actionClose_triggered()
{
    if(activeTextChild()){
        closeCurrentPage(ui->tabWidget->currentIndex());
    }
}

void MainWindow::closeEvent(QCloseEvent *event){
    Q_UNUSED(event);
    on_actionCloseAll_triggered();
}

void MainWindow::on_actionCloseAll_triggered()
{
    auto index = 0;
    while((index = ui->tabWidget->currentIndex()) != -1){
        closeCurrentPage(index);
    }
}

void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::on_actionUndo_triggered()
{
    if(activeTextChild())activeTextChild()->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    if(activeTextChild())activeTextChild()->redo();
}

void MainWindow::on_actionCut_triggered()
{
    if(activeTextChild())activeTextChild()->cut();
}

void MainWindow::on_actionCopy_triggered()
{
    if(activeTextChild())activeTextChild()->copy();
}

void MainWindow::on_actionPaste_triggered()
{
    if(activeTextChild())activeTextChild()->paste();
}

void MainWindow::on_actionSelectAll_triggered()
{
    if(activeTextChild())activeTextChild()->selectAll();
}

void MainWindow::on_actionAboutQt_triggered()
{
    qApp->aboutQt();
}

void MainWindow::on_actionAbout_triggered()
{

}

void MainWindow::printPreview(QPrinter *printer)
{
    activeTextChild()->print(printer);
}

void MainWindow::on_actionPrint_triggered()
{
    QPrinter printer;
    QPrintDialog dlg(&printer,this);
    //如果有选中区域，则对选中区域进行打印，否则打印整个页面
    if(activeTextChild() && activeTextChild()->textCursor().hasSelection()){
        dlg.setEnabled(QAbstractPrintDialog::PrintSelection);
    }
    if(dlg.exec() == QDialog::Accepted){
        if(activeTextChild())activeTextChild()->print(&printer);
    }
}

void MainWindow::on_actionPrintView_triggered()
{
    QPrinter printer;
    QPrintPreviewDialog preview(&printer,this);
    //要生成预览页面时，发射paintRequested信号
    connect(&preview,&QPrintPreviewDialog::paintRequested,
            this,&MainWindow::printPreview);
    preview.exec();
}

void MainWindow::on_actionPDFExport_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("导出PDF文件"),QString(),"*.pdf");
    if(!fileName.isEmpty()&& activeTextChild()){
        //补上后缀为空的情况
        if(QFileInfo(fileName).suffix().isEmpty())
            fileName.append(".pdf");
        QPrinter printer;
        //指定输出格式为pdf
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(fileName);
        activeTextChild()->print(&printer);
    }
}

void MainWindow::on_actionTheme_triggered()
{
    themeDlg->exec();
}

void MainWindow::changeTheme(QString theme, float alpha, QFont font)
{
    qDebug() << "come here";
    //修改皮肤
    theme = ":/qss/" + theme + ".css";
    QApplication::setOverrideCursor(Qt::WaitCursor);
    QFile styleFile(theme);
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = tr(styleFile.readAll());
    this->setStyleSheet(styleSheet);
    styleFile.close();
    qDebug() << font;
    //修改字体
    for(auto x = 0;x < ui->tabWidget->count();++x){
        TextChild* child = qobject_cast<TextChild*>(ui->tabWidget->widget(x));
        //child->setCurrentFont(font);
        child->setFont(font);
    }

    //窗体透明度
    Q_UNUSED(alpha);
    QApplication::restoreOverrideCursor();
}
