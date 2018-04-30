#ifndef TEXTCHILD_H
#define TEXTCHILD_H
#include <QTextEdit>

class TextChild : public QTextEdit
{
    Q_OBJECT
public:
    explicit TextChild(QWidget *parent = nullptr);
    ~TextChild();
    void newFile();                             //新建文件
    bool loadFile(const QString &fileName);     //加载文件
    bool save();                                //保存操作
    bool saveAs();                              //另存为操作
    bool saveFile(const QString& fiileName);    //保存文件
    QString userFriendlyCurrentFile();          //提取文件名
    QString currentFile(){return curFile;}      //当前文件路径
    QString currentName(){return userFriendlyCurrentFile();}//当前文件名

    void documentWasModified();                 //文档被更改时，窗口显示更改标志
protected:
    void closeEvent(QCloseEvent *event);        //关闭事件
    void keyPressEvent(QKeyEvent *e);           //键盘事件
private slots:
    void returnIndent();                        //回车自动缩进一个
private:
    bool maybeSave();                           //是否需要保存
    void setCurrentFile(const QString& fileName);//保存当前文件路径

    QString curFile;                            //当前文件路径
    bool isUntitled;                            //是否被保存到硬盘上的标志
                                                //未保存过为true
};

#endif // TEXTCHILD_H
