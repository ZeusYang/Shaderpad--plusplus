#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "textchild.h"
#include "themedialog.h"
#include "bgimagedialog.h"
#include "searchdialog.h"
#include "documentdialog.h"
#include "templatedialog.h"
#include "jumpdialog.h"
#include "instructiondialog.h"
#include <QFileDialog>
#include <QSignalMapper>
#include <QPrinter>
#include <QPrintDialog>
#include <QFile>
#include <QPainter>
#include <QPrintPreviewDialog>
#include <QStandardPaths>
#include <QFileInfo>
#include <QRegularExpression>
#include <QStringListModel>
#include <QMessageBox>
#include <QLabel>
#include <QPixmap>
#include <QCompleter>
#include <QHBoxLayout>
#include <QTextBlock>
//#include <iostream>
//#include <QDebug>

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

    //主题选择窗口
    themeDlg = new ThemeDialog(this);
    themeDlg->setWindowModality(Qt::WindowModal);
    //将确认修改主题的信号与函数链接起来
    connect(themeDlg,&ThemeDialog::ThemeChanged,this,&MainWindow::changeTheme);
    setAttribute(Qt::WA_TranslucentBackground);

    //背景选择窗口
    bgImage = ":/icons/1.jpg";
    bgimageDlg = new BgImageDialog(this);
    bgimageDlg->setWindowModality(Qt::WindowModal);
    connect(bgimageDlg,&BgImageDialog::ImageChanged,this,&MainWindow::changeBgImage);

   //查找对话框
    searchDlg = new SearchDialog(this);
    searchDlg->setModal(false);
    connect(searchDlg,&SearchDialog::searchFindSignal,this,&MainWindow::searchFind);
    connect(searchDlg,&SearchDialog::searchReplaceSignal,this,&MainWindow::searchReplace);
    connect(searchDlg,&SearchDialog::searchReplaceAllSignal,this,&MainWindow::searchReplaceAll);
    connect(searchDlg,&SearchDialog::searchCountSignal,this,&MainWindow::searchCount);

    //API查询对话框
    apiQuery = new DocumentDialog(this);
    searchDlg->setModal(false);

    //新建项目对话框
    templateDlg = new TemplateDialog(this);
    templateDlg->setModal(true);
    connect(templateDlg,&TemplateDialog::createNewFile,this,&MainWindow::createNewProject);

    //行列跳转对话框
    jumpDlg = new JumpDialog(this);
    jumpDlg->setModal(false);
    connect(jumpDlg,&JumpDialog::setColRow,this,&MainWindow::jumpRowCol);

    //状态栏显示行列号等相关信息
    col = new QLabel(this);
    row = new QLabel(this);
    length = new QLabel(this);
    selection = new QLabel(this);
    lines = new QLabel(this);
    col->setMinimumWidth(100);
    row->setMinimumWidth(100);
    length->setMinimumWidth(200);
    lines->setMinimumWidth(100);
    selection->setMinimumWidth(100);
    col->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
    row->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
    length->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
    selection->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
    lines->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Maximum);
    col->setText("Col:");
    row->setText("Row:");
    length->setText("Length:");
    selection->setText("Sel:");
    lines->setText("Lines:");
    QWidget *statusWidget = new QWidget();
    QHBoxLayout *statusLayout = new QHBoxLayout;
    statusLayout->addWidget(length);
    statusLayout->addWidget(lines);
    statusLayout->addWidget(row);
    statusLayout->addWidget(col);
    statusLayout->addWidget(selection);
    statusLayout->setSpacing(30);
    statusWidget->setLayout(statusLayout);
    ui->statusBar->addPermanentWidget(statusWidget);
    //把变化的信号与这些信息显示联系起来
    connect(ui->tabWidget,&QTabWidget::currentChanged,
            this,&MainWindow::modifyActiveWindow);

    //加载自动补齐文本
    glslCompletion = new QCompleter(this);
    glslCompletion->setModel(loadModelCompletionFromFile(":/highlighter/glslBuildin"));
    glslCompletion->setModelSorting(QCompleter::CaseSensitivelySortedModel);
    glslCompletion->setCaseSensitivity(Qt::CaseInsensitive);
    glslCompletion->setWrapAround(false);
    apiQuery->setCompleter(glslCompletion);

    //加载样式表
    changeTheme("darkblack",themeDlg->alpha,themeDlg->font);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QAbstractItemModel* MainWindow::loadModelCompletionFromFile(const QString& path)
{
    QFile file(path);
    if (!file.open(QFile::ReadOnly))
        return new QStringListModel(glslCompletion);
    QStringList words;
    //std::vector<std::string> tmp;
    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        if (!line.isEmpty())words << line.trimmed();
        //tmp.push_back(line.trimmed().toStdString());
    }
//    std::sort(tmp.begin(),tmp.end());
//    auto it = std::unique(tmp.begin(),tmp.end());
//    tmp.erase(it,tmp.end());
//    for(uint x = 0;x < tmp.size();++x){
//        std::cout << tmp[x] << std::endl;
//    }
    QStringListModel *ret = new QStringListModel(words, glslCompletion);
    return ret;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    //画背景图片
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(bgImage));
}

void MainWindow::on_actionNew_triggered()
{
    //创建模板文件对话框
    templateDlg->show();
}

void MainWindow::closeCurrentPage(int index)
{
    QWidget* child =  ui->tabWidget->widget(index);
    child->close();
    TextChild* tmp = qobject_cast<TextChild*>(child);
    if(tmp->isValid)return;
    ui->tabWidget->removeTab(index);
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,QString(),
                                                    QStandardPaths::writableLocation(QStandardPaths::DesktopLocation));
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
    ui->actionZoomIn->setEnabled(hasTextChild);
    ui->actionZoomOut->setEnabled(hasTextChild);
    ui->actionJumpRow->setEnabled(hasTextChild);
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

    //设置当前文件名
    if(activeTextChild())
        jumpDlg->setCurrentFile(activeTextChild()->currentName());
}

TextChild *MainWindow::createTextChild()
{
    TextChild *child = new TextChild(this);
    //是否可以复制
    connect(child,&TextChild::copyAvailable,ui->actionCut,&QAction::setEnabled);
    connect(child,&TextChild::copyAvailable,ui->actionCopy,&QAction::setEnabled);
    connect(child,&TextChild::copyAvailable,ui->actionComment,&QAction::setEnabled);
    //是否可以撤销
    connect(child,&TextChild::redoAvailable,ui->actionRedo,&QAction::setEnabled);
    connect(child,&TextChild::undoAvailable,ui->actionUndo,&QAction::setEnabled);
    //设置自动补齐器
    child->setCompleter(glslCompletion);
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
    ui->menu_File->addAction(ui->actionJumpRow);
    ui->menu_File->addAction(ui->actionOpenGLAPI);
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

void MainWindow::pairOperationToText(QString &target, const QString &begin, const QString &end)
{
    bool hasBegin = false,hasEnd = false;
    if(target.length() >= 4){
        hasBegin = (target.left(2) == begin);
        hasEnd = (target.right(2) == end);
    }
    //取消之前的符号
    if(hasBegin && hasEnd){
        target.remove(target.length()-2,2);
        target.remove(0,2);
    }
    else{//加上需要的符号
        target = begin + target + end;
    }
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
    QMessageBox::about(this,tr("关于Shaderpad++"),
                               tr("欢迎使用Shaderpad++ version1.0\n"
                                  "有任何问题、改进的地方，可通过以下邮箱告诉我:\n"
                                  "邮箱:1579148717@qq.com\n"));
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
    QString fileName = QFileDialog::getSaveFileName(this,tr("导出PDF文件"),
                                                    QStandardPaths::writableLocation(QStandardPaths::DesktopLocation),"*.pdf");
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

    //修改字体和透明度
    int red,green,blue;
    if(theme == "black"){
        red = green = blue = 70;
    }else if(theme == "blue"){
        red = 207;green = 221;blue = 238;
    }else if(theme == "darkblack"){
        red = 36;green = 38;blue = 41;
    }else if(theme == "darkblue"){
        red = 14;green = 26;blue = 50;
    }else if(theme == "lightblack"){
        red = 97;green = 111;blue = 118;
    }else if(theme == "lightblue"){
        red = 234;green = 247;blue = 255;
    }else{
        red = 36;green = 38;blue = 41;
    }
    QString fontAndAlpha = tr("QPlainTextEdit{"
                           "background-color:rgba(%1,%2,%3,%4);"
                           "font: %5pt \"%6\";"
                           "color: rgba(200,200,200,255);"
                           "}").arg(red).arg(green).arg(blue)
                            .arg(alpha*255).arg(font.pointSize()).arg(font.family());
    //修改皮肤
    theme = ":/qss/" + theme + ".css";
    QApplication::setOverrideCursor(Qt::WaitCursor);
    QFile styleFile(theme);
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = tr(styleFile.readAll());
    styleSheet += fontAndAlpha;
    this->setStyleSheet(styleSheet);
    styleFile.close();
    QApplication::restoreOverrideCursor();

    //设置自动补齐窗口的样式表
    glslCompletion->popup()->setStyleSheet(tr("QAbstractItemView{"
                                              "font:%1pt \"%2\";"
                                              "color:rgba(255,128,128,255);"
                                              "border-image:url(:/icons/completer.jpg);"
                                              "}").arg(font.pointSize())
                                           .arg(font.family()));
}

void MainWindow::modifyStatusInfo()
{
    int srow = 0,scol = 0,slines = 0,slength = 0,sselection = 0;
    if(activeTextChild()){
        TextChild* cur = activeTextChild();
        srow = cur->textCursor().blockNumber()+1;
        scol = cur->textCursor().columnNumber()+1;
        slines = cur->document()->lineCount();
        slength = cur->toPlainText().length();
        sselection = cur->textCursor().selectedText().length();
    }
    col->setText(tr("Col: %1").arg(scol));
    row->setText(tr("Row: %1").arg(srow));
    length->setText(tr("Length: %1").arg(slength));
    selection->setText(tr("Sel: %1").arg(sselection));
    lines->setText(tr("Lines: %1").arg(slines));
}

void MainWindow::modifyActiveWindow()
{
    connect(activeTextChild(),&TextChild::textChanged,
            this,&MainWindow::modifyStatusInfo);
    connect(activeTextChild(),&TextChild::cursorPositionChanged,
            this,&MainWindow::modifyStatusInfo);
    modifyStatusInfo();
    connect(activeTextChild(),&TextChild::cursorPositionChanged,
            this,&MainWindow::onCurrentLineHighLight);
}

void MainWindow::changeBgImage(QString target)
{
    bgImage = target;
    this->repaint();
}

void MainWindow::on_actionBackground_triggered()
{
    bgimageDlg->exec();
}

void MainWindow::on_actionPrevious_triggered()
{
    int previous = (ui->tabWidget->currentIndex()-1 >= 0)?
                (ui->tabWidget->currentIndex()-1):(ui->tabWidget->count()-1);
    ui->tabWidget->setCurrentIndex(previous);
}

void MainWindow::on_actionNext_triggered()
{
    int next = (ui->tabWidget->currentIndex()+1)%ui->tabWidget->count();
    ui->tabWidget->setCurrentIndex(next);
}

void MainWindow::on_actionComment_triggered()
{
    TextChild* child = activeTextChild();
    QString selectedText = child->textCursor().selectedText();
    QString begin = "/*",end = "*/";
    pairOperationToText(selectedText,begin,end);
    child->textCursor().removeSelectedText();
    child->insertPlainText(selectedText);
}

void MainWindow::onCurrentLineHighLight()
{
    //对光标行进行高亮
    TextChild *edit = activeTextChild();
    QList<QTextEdit::ExtraSelection> extraSelection;
    QTextEdit::ExtraSelection selection;
    QColor lineColor = QColor(60,179,113).lighter(50);
    selection.format.setBackground(lineColor);
    selection.format.setProperty(QTextFormat::FullWidthSelection,true);
    selection.cursor = edit->textCursor();
    selection.cursor.clearSelection();
    //将刚设置的 selection追加到链表当中`
    extraSelection.append(selection);
    edit->setExtraSelections(extraSelection);
}

void MainWindow::on_actionZoomIn_triggered()
{
    themeDlg->changeFontSize(true);
}

void MainWindow::on_actionZoomOut_triggered()
{
    themeDlg->changeFontSize(false);
}

void MainWindow::on_actionSearch_triggered()
{
    searchDlg->show();
}

bool MainWindow::searchFind(QString target, QTextDocument::FindFlags options, bool regExp)
{
    //查找
    TextChild* child = activeTextChild();
    if(!regExp){
         QTextCursor loc = child->document()->find(target,child->textCursor(),options);
         if(!loc.isNull()){
             child->setTextCursor(loc);
         }
         else{
             QMessageBox::information(this,tr("提示"),tr("没有了"));
             return false;
         }
    }
    else{
        QRegularExpression pattern(target);
        QTextCursor loc = child->document()->find(pattern,child->textCursor(),options);
        if(!loc.isNull()){
            child->setTextCursor(loc);
        }
        else{
            QMessageBox::information(this,tr("提示"),tr("没有了"));
            return false;
        }
    }
    return true;
}

bool MainWindow::searchReplace(QString to, QString from,
                               QTextDocument::FindFlags options, bool regExp)
{
    //替换当前词，兼具查找功能
    TextChild* child = activeTextChild();
    if(child->textCursor().hasSelection()
            && child->textCursor().selectedText().toUpper() == from.toUpper()){
        child->textCursor().removeSelectedText();
        child->textCursor().insertText(to);
        return true;
    }
    else{
        if(searchFind(from,options,regExp)){
            child->textCursor().removeSelectedText();
            child->textCursor().insertText(to);
            return true;
        }
    }
    return false;
}

void MainWindow::searchReplaceAll(QString to, QString from, bool caseSen, bool whole)
{
    //全部替换
    TextChild* child = activeTextChild();
    QString content = child->toPlainText();
    if(whole)from = "\\b" + from + "\\b";
    QRegularExpression reg(from);
    if(caseSen){
        reg.setPatternOptions(QRegularExpression::CaseInsensitiveOption);
    }
    content.replace(reg,to);
    child->setPlainText(content);
    //发射内容被修改了的信号
    child->document()->setModified(true);
}

void MainWindow::searchCount(QString from, bool caseSen, bool whole, QLabel *display)
{
    TextChild* child = activeTextChild();
    QString content = child->toPlainText();
    //全词匹配
    if(whole)from = "\\b" + from + "\\b";
    QRegularExpression reg(from);
    QRegularExpressionMatch match;
    //不区分大小写
    if(caseSen){
        reg.setPatternOptions(QRegularExpression::CaseInsensitiveOption);
    }
    int count = 0, index = 0;
    do{//计数
        match = reg.match(content,index);
        if(match.hasMatch()){
            index = match.capturedEnd();
            ++count;
        }
        else break;
    }
    while(index < content.size());
    display->setText(tr("共有%1个").arg(count));
}

void MainWindow::on_actionOpenGLAPI_triggered()
{
    QString cursorText;
    if(activeTextChild())cursorText = activeTextChild()->textUnderCursor();
    if(!cursorText.isEmpty()){
        apiQuery->setLineEditText(cursorText);
        apiQuery->queryLineText();
    }
    apiQuery->show();
}

void MainWindow::createNewProject(QString path, QString context)
{
    TextChild *existing = findTextChild(path);
    if(existing){//文件已经打开
        setActiveSubWindow(existing);
        return;
    }
    //文件已经存在
    QFileInfo fileInfo(path);
    if(fileInfo.isFile()){
        QMessageBox::information(this,tr("警告"),tr("文件已经存在!"));
        return;
    }

    TextChild *newone = createTextChild();
    newone->newFile(path,context);
    if(!newone->isValid){
        delete newone;
        return ;
    }
    ui->tabWidget->addTab(newone,newone->currentName());
    setActiveSubWindow(newone);
    newone->show();
}

void MainWindow::on_actionJumpRow_triggered()
{
    jumpDlg->show();
}

void MainWindow::jumpRowCol(int rows)
{
    TextChild *child = activeTextChild();
    if(rows > child->blockCount()){
        QMessageBox::information(this,tr("请注意!"),
                                 tr("您输入的行号超出当前文档的最大行数，请重新输入"));
        return;
    }
    QTextBlock block = child->document()->findBlockByNumber(rows-1);
    child->setTextCursor(QTextCursor(block));
}

void MainWindow::on_actionInstruction_triggered()
{
    QFile file(tr(":/highlighter/documents/instruction.txt"));
    file.open(QFile::ReadOnly);
    QString info = file.readAll();
    file.close();
    static InstructionDialog *instructionDlg = new InstructionDialog(this);
    instructionDlg->setText(info);
    instructionDlg->show();;
}
