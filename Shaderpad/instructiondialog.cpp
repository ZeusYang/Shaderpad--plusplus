#include "instructiondialog.h"
#include "ui_instructiondialog.h"

InstructionDialog::InstructionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InstructionDialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("使用说明"));
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
    this->setModal(false);
}

InstructionDialog::~InstructionDialog()
{
    delete ui;
}

void InstructionDialog::setText(const QString &target)
{
    ui->textEdit->setPlainText(target);
}
