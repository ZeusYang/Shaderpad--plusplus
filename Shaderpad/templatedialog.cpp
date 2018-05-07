#include "templatedialog.h"
#include "ui_templatedialog.h"
#include <QStringListModel>
#include <QStandardPaths>
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
    curPath = curDir = QStandardPaths::writableLocation(QStandardPaths::DesktopLocation);
    ui->lineEditPath->setText(curPath);
    ui->nLineEditName->setText(tr("untitled"));
}

TemplateDialog::~TemplateDialog()
{
    delete ui;
}

void TemplateDialog::on_pushButton_clicked()
{
    QString fileName = QFileDialog::getExistingDirectory(this,QString(),curDir);
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
    if(ui->checkBoxDefault->isChecked())curDir = curPath;
    close();
    emit createNewFile(target,context);
}

void TemplateDialog::on_listWidget_currentRowChanged(int currentRow)
{
    static const QString postFix[] = {".vert",".frag",".geom",".comp",""};
    ui->pLineEditPost->setText(postFix[currentRow]);
}

void TemplateDialog::on_pushButtonCancel_clicked()
{
    close();
}
