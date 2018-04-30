#include "searchdialog.h"
#include "ui_searchdialog.h"
#include <QDebug>

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("查找/替换"));
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint);    // 禁止最大化按钮
    setFixedSize(this->width(),this->height());                     // 禁止拖动窗口大小
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::on_pushButtonNext_clicked()
{
    QString target = ui->lineEditSearch->text();
    if(!target.isEmpty()){
        QTextDocument::FindFlags options;
        if(!ui->checkBoxCase->isChecked())
            options = QTextDocument::FindCaseSensitively;
        if(ui->checkBoxReverse->isChecked())
            options |= QTextDocument::FindBackward;
        if(ui->checkBoxWhole->isChecked())
            options |= QTextDocument::FindWholeWords;
        emit searchFindSignal(target,options,ui->checkBoxReg->isChecked());
    }
}

void SearchDialog::on_pushButtonReplace_clicked()
{
    QString to = ui->lineEditReplace->text();
    QString from = ui->lineEditSearch->text();
    if(to.isEmpty() || from.isEmpty())return;
    QTextDocument::FindFlags options;
    if(!ui->checkBoxCase->isChecked())
        options = QTextDocument::FindCaseSensitively;
    if(ui->checkBoxReverse->isChecked())
        options |= QTextDocument::FindBackward;
    if(ui->checkBoxWhole->isChecked())
        options |= QTextDocument::FindWholeWords;
    emit searchReplaceSignal(to,from,options,ui->checkBoxReg->isChecked());
}

void SearchDialog::on_pushButton_3_clicked(){}

void SearchDialog::on_pushButtonCount_clicked()
{
    QString from = ui->lineEditSearch->text();
    if(!from.isEmpty()){
        if(!ui->checkBoxReg->isChecked()){//普通表达式需要的pattern需要进一步处理
            int pos = 0;
            while((pos = from.indexOf(tr("\\"),pos)) != -1){
                from.insert(pos,"\\");
                pos += 2;
            }
        }
        emit searchCountSignal(from,ui->checkBoxCase->isChecked(),
                                              ui->checkBoxWhole->isChecked(),ui->labelCount);
    }
}

void SearchDialog::on_pushButtonSure_clicked()
{
    accept();
    close();
}

void SearchDialog::on_pushButtonReplaceAll_clicked()
{
    //全部替换
    QString to = ui->lineEditReplace->text();
    QString from = ui->lineEditSearch->text();
    if(to.isEmpty() || from.isEmpty())return;
    QTextDocument::FindFlags options;
    if(!ui->checkBoxCase->isChecked())
        options = QTextDocument::FindCaseSensitively;
    if(ui->checkBoxReverse->isChecked())
        options |= QTextDocument::FindBackward;
    if(ui->checkBoxWhole->isChecked())
        options |= QTextDocument::FindWholeWords;
    if(!ui->checkBoxReg->isChecked()){//普通表达式需要的pattern需要进一步处理
        int pos = 0;
        while((pos = from.indexOf(tr("\\"),pos)) != -1){
            from.insert(pos,"\\");
            pos += 2;
        }
    }
    emit searchReplaceAllSignal(to,from,ui->checkBoxCase->isChecked(),
                                ui->checkBoxWhole->isChecked());
}
