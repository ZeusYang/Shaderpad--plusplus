#include "templatedialog.h"
#include "ui_templatedialog.h"
#include <QStringListModel>
//#include <QFile>
#include <QDebug>
#include <QFileDialog>

TemplateDialog::TemplateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TemplateDialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("创建新文件"));
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
}

TemplateDialog::~TemplateDialog()
{
    delete ui;
}

void TemplateDialog::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getExistingDirectory(this);
    if(fileName.isEmpty())return;
    curPath = fileName;
    ui->lineEditPath->setText(curPath);
}

void TemplateDialog::on_pushButtonSure_clicked()
{
    static const QString categories[] = {"vertex","fragment","geometry","compute","empty"};
    QString type = categories[ui->listWidget->currentRow()];
    QFile file(":/template/"+type);
    file.open(QFile::ReadOnly);
    QString context = tr(file.readAll());
    file.close();
    QString name = ui->nLineEditName->text() + ui->pLineEditPost->text();
    QString target = curPath + "/" + name;
    close();
    emit createNewFile(target,context);
}
