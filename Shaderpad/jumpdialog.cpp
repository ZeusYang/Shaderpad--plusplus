#include "jumpdialog.h"
#include "ui_jumpdialog.h"
#include <QDebug>

JumpDialog::JumpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JumpDialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("指定行跳转"));
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
    ui->rLineEditRow->setValidator(new QIntValidator(1, 100000, this));
}

JumpDialog::~JumpDialog()
{
    delete ui;
}

void JumpDialog::setCurrentFile(const QString &curFile)
{
    ui->LineEditFile->setText(curFile);
}

void JumpDialog::on_pushButtonSure_clicked()
{
    bool ok;
    int rows = ui->rLineEditRow->text().toInt(&ok);
    emit setColRow(rows);
}
