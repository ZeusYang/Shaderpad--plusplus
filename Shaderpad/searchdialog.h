#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>
#include <QTextDocument>

namespace Ui {
class SearchDialog;
}
class QLabel;

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = 0);
    ~SearchDialog();

signals:
    void searchFindSignal(QString target,QTextDocument::FindFlags options,bool regExp);//发送查找信号
    void searchReplaceSignal(QString to, QString from,
                             QTextDocument::FindFlags options, bool regExp);//发送替换信号
    void searchReplaceAllSignal(QString to, QString from,
                             bool caseSen,bool whole);//发送替换信号
    void searchCountSignal(QString from,bool caseSen,bool whole, QLabel *display);//计数信号

private slots:
    void on_pushButtonNext_clicked();

    void on_pushButtonReplace_clicked();

    void on_pushButton_3_clicked();

    void on_pushButtonCount_clicked();

    void on_pushButtonSure_clicked();

    void on_pushButtonReplaceAll_clicked();

private:
    Ui::SearchDialog *ui;
};

#endif // SEARCHDIALOG_H
