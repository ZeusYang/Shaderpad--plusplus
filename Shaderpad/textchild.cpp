#include "textchild.h"
#include "highlighter.h"
#include "inputtiplist.h"
#include <QFileDialog>
#include <QCloseEvent>
#include <QMessageBox>
#include <QPushButton>
#include <QFileInfo>
#include <QApplication>
#include <QTextBlock>
#include <QPainter>
#include <QCompleter>
#include <QFont>
#include <QScrollBar>
#include <QMenu>
#include <QPalette>
#include <QTextStream>
//#include <QDebug>
#include <QKeyEvent>

TextChild::TextChild(QWidget *parent)
    :QPlainTextEdit(parent),isUntitled(true),isValid(true)
{
    //关闭窗口时销毁对象
    setAttribute(Qt::WA_DeleteOnClose);
//    this->setWordWrapMode(QTextOption::WordWrap);
    //行号区域
    lineNumberArea = new LineNumberArea(this);
    //更新显示行号的宽度
    connect(this, SIGNAL(blockCountChanged(int)), this, SLOT(updateLineNumberAreaWidth(int)));
    //更新行号区域
    connect(this, SIGNAL(updateRequest(QRect,int)), this, SLOT(updateLineNumberArea(QRect,int)));
    updateLineNumberAreaWidth(0);
    //设置缩进宽度为四个空格的宽度
    setTabStopDistance(50);
    //语法高亮器
    highlighter = new Highlighter(this->document());
    highlighter->loadPatternAndTheme(tr(":/highlighter/glslPattern"),
                                     tr(":/highlighter/glslTheme"));
    completer = nullptr;
}

void TextChild::newFile(QString path,QString context)
{
    isUntitled = true;
    curFile = path;
    setPlainText(context);
    if(!this->saveFile(path)){
        isValid = false;
        return ;
    }
    isValid = true;
    setWindowTitle(curFile);
}

bool TextChild::loadFile(const QString &fileName)
{
    QFile file(fileName);
    if(!file.open(QFile::ReadOnly)){
        //文件打开出错
        QMessageBox::warning(this,tr("Shaderpad++"),tr("无法读取文件 %1:\n%2.")
                             .arg(fileName).arg(file.errorString()));
        return false;
    }
    QTextStream in(&file);
    //读取文本流，鼠标变成等待状态
    QApplication::setOverrideCursor(Qt::WaitCursor);
    setPlainText(in.readAll());
    QApplication::restoreOverrideCursor();
    setCurrentFile(fileName);
    return true;
}

bool TextChild::save()
{
    if(isUntitled)return saveAs();//尚未保存过
    else return saveFile(curFile);
}

bool TextChild::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this,tr("另存为"),curFile);
    if(fileName.isEmpty())return false;//文件名为空
    else return saveFile(fileName);
}

bool TextChild::saveFile(const QString &fileName)
{
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly)){
        QMessageBox::warning(this,tr("Shaderpad++"),
                             tr("无法写入文件 %1:\n%2")
                             .arg(fileName).arg(file.errorString()));
        return false;
    }
    QTextStream out(&file);
    QApplication::setOverrideCursor(Qt::WaitCursor);
    out << toPlainText();
    QApplication::restoreOverrideCursor();
    setCurrentFile(fileName);
    return true;
}

QString TextChild::userFriendlyCurrentFile()
{
    //提取文件名
    return QFileInfo(curFile).fileName();
}

void TextChild::lineNumberAreaPaintEvent(QPaintEvent *event)
{
    QPainter painter(lineNumberArea);
    //行号区域的背景,透明背景
    painter.fillRect(event->rect(), Qt::transparent);
    //获取当前能够看到的第一行
    QTextBlock block = firstVisibleBlock();
    //总行数
    int blockNumber = block.blockNumber();
    //上、下
    int top =
            (int) blockBoundingGeometry(block).translated(contentOffset()).top();//top()就是y()
    int bottom = top + (int) blockBoundingRect(block).height();
    //设置字体大小
    QFont font(tr("Consolas"));
    font.setPointSize(fontMetrics().height()/2);
    painter.setFont(font);
    //一行一行绘制行号
    while (block.isValid() && top <= event->rect().bottom()) {
        if (block.isVisible() && bottom >= event->rect().top()) {
            QString number = QString::number(blockNumber + 1);
            painter.setPen(QColor(214,182,104));
            painter.drawText(0, top, lineNumberArea->width(), fontMetrics().height(),
                             Qt::AlignRight, number);
        }
        block = block.next();
        top = bottom;
        bottom = top + (int) blockBoundingRect(block).height();
        ++blockNumber;
    }
}

int TextChild::lineNumberAreaWidth()
{
    //更新宽度
    int digits = 1;
    //获取最大行数
    int max = qMax(1, blockCount());
    //获取最大行数的位数
    while (max >= 10) {
        max /= 10;
        ++digits;
    }
    //获取当前单个字体的宽度，再乘上位数，如此计算需要的宽度
    int space = 3 + fontMetrics().width(QLatin1Char('9')) * digits;
    return space;
}

void TextChild::setCompleter(QCompleter *completern)
{
    //设置自动补齐
    completer = completern;
    if (!completer)return;
    completer->setWidget(this);
    completer->setCompletionMode(QCompleter::PopupCompletion);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    this->insertCompletion(tr(""));
    connect(completer, SIGNAL(activated(QString)),
                     this, SLOT(insertCompletion(QString)));
}

void TextChild::closeEvent(QCloseEvent *event)
{
    //关闭的时候判断是否需要保存
    if(maybeSave()){
        event->accept();
        isValid = false;
    }
    else {
        event->ignore();
        isValid = true;//取消关闭
    }
}

void TextChild::keyPressEvent(QKeyEvent *e)
{
    //自动补齐激活时通过键盘操作
    if (completer && completer->popup()->isVisible()) {
        // The following keys are forwarded by the completer to the widget
       switch (e->key()) {
       case Qt::Key_Enter:
       case Qt::Key_Return:
       case Qt::Key_Escape:
       case Qt::Key_Tab:
       case Qt::Key_Backtab:
            e->ignore();
            return; // let the completer do default behavior
       default:
           break;
       }
    }
    //父类的处理正常运行
    QPlainTextEdit::keyPressEvent(e);

    if(!completer || e->text().isEmpty())return;

    //获取当前输入的字符
    QString completionPrefix = textUnderCursor();
    static QString eow("~!@$%^&*()+{}|:\"<>?,./;'[]\\-=");//单词末尾
    if (e->text().isEmpty() || completionPrefix.length() < 1
                      || eow.contains(e->text().right(1))) {//.right获取当前输入的最右边的字符，也就是刚输入的字符
        completer->popup()->hide();//提示框隐藏
        return;
    }
    //设置自动补齐的前缀
    if (completionPrefix != completer->completionPrefix()) {
        completer->setCompletionPrefix(completionPrefix);
        //并把选中的光标移动到第一个s
        completer->popup()->setCurrentIndex(completer->completionModel()->index(0, 0));
    }
    //补齐的区域
    QRect cr = cursorRect();
    cr.setWidth(completer->popup()->sizeHintForColumn(0)
                + completer->popup()->verticalScrollBar()->sizeHint().width());
    completer->complete(cr); //弹出
}

void TextChild::resizeEvent(QResizeEvent *event)
{
    //改变大小时，行号区域也需要改变
    QPlainTextEdit::resizeEvent(event);
    QRect cr = contentsRect();
    lineNumberArea->setGeometry(QRect(cr.left(), cr.top(), lineNumberAreaWidth(), cr.height()));
}

void TextChild::focusInEvent(QFocusEvent *event)
{
    if(completer)completer->setWidget(this);
    QPlainTextEdit::focusInEvent(event);
}

void TextChild::updateLineNumberAreaWidth(int newBlockCount)
{
    Q_UNUSED(newBlockCount);
    //设置左边的margin，腾出地方用来显示行号
    setViewportMargins(lineNumberAreaWidth(), 0, 0, 0);
}

void TextChild::updateLineNumberArea(const QRect &rect, int dy)
{
    //更新行号区域，这个函数当updateRequest信号发射时被调用
    if (dy)lineNumberArea->scroll(0, dy);
    else lineNumberArea->update(0, rect.y(), lineNumberArea->width(), rect.height());
    if (rect.contains(viewport()->rect()))
        updateLineNumberAreaWidth(0);
}

void TextChild::insertCompletion(const QString &completion)
{//插入自动补齐的文本
    if(completer->widget() != this)return;
    QTextCursor tc = textCursor();
    int extra = completion.length() - completer->completionPrefix().length();
    tc.movePosition(QTextCursor::Left);//移动光标
    tc.movePosition(QTextCursor::EndOfWord);
    tc.insertText(completion.right(extra));
    setTextCursor(tc);
}

bool TextChild::maybeSave()
{
    //文档被更改过
    if(document()->isModified()){
        QMessageBox *box = new QMessageBox(this);
        box->setWindowTitle(tr("Shaderpad++"));
        box->setText(tr("是否保存对“%1”的更改").arg(userFriendlyCurrentFile()));
        box->setIcon(QMessageBox::Warning);
        QPushButton *yesBtn = box->addButton(tr("是(&Y)"),QMessageBox::YesRole);
        box->addButton(tr("否(&N)"),QMessageBox::NoRole);
        QPushButton *cancelBtn = box->addButton(tr("取消"),QMessageBox::RejectRole);
        box->exec();
        if(box->clickedButton() == yesBtn){
            delete box;
            return save();
        }
        else if(box->clickedButton() == cancelBtn){
            delete box;
            return false;
        }
    }
    return true;//文档未被更改过
}

void TextChild::setCurrentFile(const QString &fileName)
{
    //去掉"."和".."符号
    curFile = QFileInfo(fileName).canonicalFilePath();
    //已保存状态
    isUntitled = false;
    document()->setModified(false);
    setWindowModified(false);
    setWindowTitle(userFriendlyCurrentFile());
}

QString TextChild::textUnderCursor() const
{
    QTextCursor tc = textCursor();
    tc.select(QTextCursor::WordUnderCursor);//获取光标位置下的文本
    return tc.selectedText();
}
