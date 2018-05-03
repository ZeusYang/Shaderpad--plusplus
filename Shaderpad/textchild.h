#ifndef TEXTCHILD_H
#define TEXTCHILD_H
#include <QPlainTextEdit>

class Highlighter;
class QCompleter;
class TextChild : public QPlainTextEdit
{
    Q_OBJECT
public:
    explicit TextChild(QWidget *parent = nullptr);
    void newFile();                             //新建文件
    bool loadFile(const QString &fileName);     //加载文件
    bool save();                                //保存操作
    bool saveAs();                              //另存为操作
    bool saveFile(const QString& fiileName);    //保存文件
    QString userFriendlyCurrentFile();          //提取文件名
    QString currentFile(){return curFile;}      //当前文件路径
    QString currentName(){return userFriendlyCurrentFile();}//当前文件名

    void lineNumberAreaPaintEvent(QPaintEvent *event);//行号区域重绘事件
    int lineNumberAreaWidth();                        //行号区域的宽度

    void setCompleter(QCompleter *completern);       //设置自动补齐器
    QCompleter *Completer() const{
        return completer;
    }

protected:
    void closeEvent(QCloseEvent *event);        //关闭事件
    void keyPressEvent(QKeyEvent *e);           //键盘事件
    void resizeEvent(QResizeEvent *event) override;//resize事件，这与行号区域有关
    void focusInEvent(QFocusEvent *event) override;//切换到此部件事件

private slots:
    void updateLineNumberAreaWidth(int newBlockCount);//更新行号区域的宽度
    void updateLineNumberArea(const QRect &, int);  //更新行号的区域部分
    void insertCompletion(const QString &completion); //插入自动补齐字符
private:
    bool maybeSave();                           //是否需要保存
    void setCurrentFile(const QString& fileName);//保存当前文件路径
    QString textUnderCursor() const;            //当前鼠标下的文本

    QString curFile;                            //当前文件路径
    bool isUntitled;                            //是否被保存到硬盘上的标志未保存过为true
    QWidget *lineNumberArea;                    //行号显示器
    Highlighter *highlighter;                   //语法高亮器
    QCompleter *completer;                      //自动补齐器
};

class LineNumberArea : public QWidget{//代码块旁边的行号显示器
    Q_OBJECT
public:
    LineNumberArea(TextChild *editor) : QWidget(editor) {
        codeEditor = editor;
    }

    QSize sizeHint() const override {
        return QSize(codeEditor->lineNumberAreaWidth(), 0);
    }

protected:
    void paintEvent(QPaintEvent *event) override {
        codeEditor->lineNumberAreaPaintEvent(event);
    }

private:
    TextChild *codeEditor;
};

#endif // TEXTCHILD_H
