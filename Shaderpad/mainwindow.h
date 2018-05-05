#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextDocument>

namespace Ui {
class MainWindow;
}
class TextChild;
class QSignalMapper;
class QPrinter;
class ThemeDialog;
class QLabel;
class BgImageDialog;
class SearchDialog;
class QAbstractItemModel;
class QCompleter;
class DocumentDialog;
class TemplateDialog;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QAbstractItemModel* loadModelCompletionFromFile(const QString& path);//从文件加载自动补齐文本
protected:
    void paintEvent(QPaintEvent *event);

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

    //修改显示的行列号等信息
    void modifyStatusInfo();
    void modifyActiveWindow();

    //修改背景图片
    void changeBgImage(QString target);

    void on_actionBackground_triggered();

    void on_actionPrevious_triggered();

    void on_actionNext_triggered();

    void on_actionComment_triggered();

    //对光标所在行进行高亮
    void onCurrentLineHighLight();

    //改变字体大小
    void on_actionZoomIn_triggered();

    void on_actionZoomOut_triggered();

    //触发查找器
    void on_actionSearch_triggered();
    //查找
    bool searchFind(QString target,QTextDocument::FindFlags options, bool regExp);
    //替换
    bool searchReplace(QString to, QString from, QTextDocument::FindFlags options, bool regExp);
    //全部替换
    void searchReplaceAll(QString to,QString from, bool caseSen, bool whole);
    //计数
    void searchCount(QString from, bool caseSen,bool whole, QLabel *display);

    void on_actionOpenGLAPI_triggered();

private:
    Ui::MainWindow *ui;
    QAction *actionSeparator;                       //间隔器
    QSignalMapper *windowMapper;                    //信号映射器
    ThemeDialog *themeDlg;                          //主题对话框
    BgImageDialog *bgimageDlg;                      //背景图片选择对话框
    SearchDialog *searchDlg;                        //查找/替换对话框
    QString bgImage;                                //当前背景图片
    QLabel *col,*row,*length,*selection,*lines;     //状态栏信息
    DocumentDialog *apiQuery;                       //API文档查询对话框
    QCompleter *glslCompletion;                     //glsl自动补齐条目
    TemplateDialog *templateDlg;                    //新建模板文件对话框

    TextChild *activeTextChild();                   //当前活动窗口
    TextChild *findTextChild(const QString &fileName);//查找子窗口
    void pairOperationToText(QString &target,
             const QString &begin,const QString &end);//对文本快头尾进行操作
};

#endif // MAINWINDOW_H
