#include "templatedialog.h"
#include "ui_templatedialog.h"
#include <QStringListModel>

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
