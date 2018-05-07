#include "documentdialog.h"
#include "ui_documentdialog.h"
#include "queryword.h"
#include "highlighter.h"
#include <QCompleter>

DocumentDialog::DocumentDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DocumentDialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("OpenGL着色器API文档查询"));
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
    QIcon icon(tr(":/icons/glsl.png"));
    icon.setIsMask(true);
    ui->pushButtonQuery->setIcon(icon);

    Highlighter *highlighter = new Highlighter(ui->textEdit->document());
    highlighter->loadPatternAndTheme(tr(":/highlighter/glslPattern"),
                                     tr(":/highlighter/glslTheme"));
    ui->textEdit->setReadOnly(true);
    initializeTextEdit();

    //glsl文档
    queryWord = new QueryWord;
    queryWord->loadHeadFromFile(tr(":/highlighter/documents/API.txt"));
}

DocumentDialog::~DocumentDialog()
{
    delete ui;
    delete queryWord;
}

void DocumentDialog::setCompleter(QCompleter *completer)
{
    ui->lineEditTarget->setCompleter(completer);
}

void DocumentDialog::initializeTextEdit()
{
    //给TextEdit设置初始内容
    QString context = tr("这是一个OpenGL着色器GLSL的API及相关关键词查询窗口，"
                         "在此提供简单的资料说明，主要包括API的所属类型、函数原型、"
                         "支持的GLSL版本、简单描述，如果想要查看更加详细的文档资料，"
                         "请戳http://docs.gl/");
    ui->textEdit->setPlainText(context);
}

void DocumentDialog::setLineEditText(const QString &target)
{
    ui->lineEditTarget->setText(target);
}

void DocumentDialog::queryLineText()
{
    QString target = ui->lineEditTarget->text();
    if(!target.isEmpty()){
        QString context = queryWord->queryTargetWord(target);
        if(context.isEmpty())context = tr("没有找到%1相关的资料").arg(target);
        ui->textEdit->setPlainText(context);
    }
}

void DocumentDialog::on_pushButtonQuery_clicked()
{
    queryLineText();
}

void DocumentDialog::on_lineEditTarget_returnPressed()
{
    on_pushButtonQuery_clicked();
}
