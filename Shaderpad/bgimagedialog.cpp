#include "bgimagedialog.h"
#include "ui_bgimagedialog.h"
#include <QPixmap>

BgImageDialog::BgImageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BgImageDialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("背景图片"));
    bgImage = ui->comboBoxSelect->currentText();
    on_comboBoxSelect_currentTextChanged(bgImage);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
}

BgImageDialog::~BgImageDialog()
{
    delete ui;
}

void BgImageDialog::on_comboBoxSelect_currentTextChanged(const QString &arg1)
{
    int index = ui->comboBoxSelect->currentIndex()+1;
    QString pic = tr(":/icons/%1.jpg").arg(index);
    QPixmap bg(pic);
    ui->labelImage->setPixmap(bg);
    ui->labelCur->setText(tr("当前背景: %1").arg(arg1));
}

void BgImageDialog::on_pushButtonSure_clicked()
{
    bgImage = tr(":/icons/%1.jpg").arg(ui->comboBoxSelect->currentIndex()+1);
    emit ImageChanged(bgImage);
    accept();
}

void BgImageDialog::on_pushButtonCancel_clicked()
{
    accept();
}

void BgImageDialog::on_pushButtonApply_clicked()
{
    bgImage = tr(":/icons/%1.jpg").arg(ui->comboBoxSelect->currentIndex()+1);
    emit ImageChanged(bgImage);
}
