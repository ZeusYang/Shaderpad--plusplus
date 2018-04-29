#include "textchild.h"
#include <QFileDialog>
#include <QCloseEvent>
#include <QMessageBox>
#include <QPushButton>
#include <QFileInfo>
#include <QApplication>
#include <QDebug>
#include <QKeyEvent>

TextChild::TextChild(QWidget *parent)
    :QTextEdit(parent),isUntitled(true)
{
    //关闭窗口时销毁对象
    setAttribute(Qt::WA_DeleteOnClose);
    this->setWordWrapMode(QTextOption::WordWrap);
    this->document()->setIndentWidth(20);
}

TextChild::~TextChild()
{
}

void TextChild::newFile()
{
    //窗口编号
    static int sequenceNumber = 1;
    isUntitled = true;
    //给新建的文件按编号命名
    curFile = tr("new%1").arg(sequenceNumber++);
    setWindowTitle(curFile+"[*]");
    //文件被更改时，发射信号，窗口显示更改标志
    connect(document(),&QTextDocument::contentsChanged,
            this,&TextChild::documentWasModified);
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
    //关联修改信号
    connect(document(),&QTextDocument::contentsChanged,
            this,&TextChild::documentWasModified);
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

void TextChild::closeEvent(QCloseEvent *event)
{
    //关闭的时候判断是否需要保存
    if(maybeSave()){
        event->accept();
    }
    else event->ignore();
}

void TextChild::keyPressEvent(QKeyEvent *e)
{
    if(e->key() == Qt::Key_Tab){
        this->textCursor().insertText(tr("    "));
    }else{
        QTextEdit::keyPressEvent(e);
    }
}

void TextChild::documentWasModified()
{//文档被更改时，窗口显示更改标志
    setWindowModified(document()->isModified());
}

void TextChild::returnIndent()
{

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
    setWindowTitle(userFriendlyCurrentFile()+"[*]");
}
