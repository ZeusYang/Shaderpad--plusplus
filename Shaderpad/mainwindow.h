#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
class TextChild;
class QSignalMapper;
class QPrinter;
class ThemeDialog;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void closeCurrentPage(int index);                //关闭页面

    void on_actionOpen_triggered();

    void updateMenus(int index);                     //更新菜单状态

    TextChild* createTextChild();                   //创建子窗口

    void setActiveSubWindow(QWidget *window);     //设置活动子窗口

    void updateFileItemsMenu();                          //更新文档菜单项，在其中添加文件项
    void on_actionSave_triggered();

    void on_actionSaveAs_triggered();

    void on_actionSaveAll_triggered();

    void on_actionClose_triggered();

    void closeEvent(QCloseEvent *event);

    void on_actionCloseAll_triggered();

    void on_actionExit_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaste_triggered();

    void on_actionSelectAll_triggered();

    void on_actionAboutQt_triggered();

    void on_actionAbout_triggered();

    //打印有关操作
    void printPreview(QPrinter *printer);

    void on_actionPrint_triggered();

    void on_actionPrintView_triggered();

    void on_actionPDFExport_triggered();

    void on_actionTheme_triggered();

    //修改皮肤主题
    void changeTheme(QString theme,float alpha,QFont font);

private:
    Ui::MainWindow *ui;
    QAction *actionSeparator;                       //间隔器
    QSignalMapper *windowMapper;                    //信号映射器
    ThemeDialog *themeDlg;                          //主题对话框

    TextChild *activeTextChild();                   //当前活动窗口
    TextChild *findTextChild(const QString &fileName);//查找子窗口
};

#endif // MAINWINDOW_H
