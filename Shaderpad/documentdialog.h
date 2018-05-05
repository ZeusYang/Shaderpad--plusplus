#ifndef DOCUMENTDIALOG_H
#define DOCUMENTDIALOG_H

#include <QDialog>

namespace Ui {
class DocumentDialog;
}
class QCompleter;
class QueryWord;
class DocumentDialog : public QDialog
{
    Q_OBJECT
public:
    explicit DocumentDialog(QWidget *parent = 0);
    ~DocumentDialog();

    void setCompleter(QCompleter *completer);

    void initializeTextEdit();

    void setLineEditText(const QString& target);

    void queryLineText();

private slots:
    void on_pushButtonQuery_clicked();

    void on_lineEditTarget_returnPressed();

private:
    Ui::DocumentDialog *ui;
    QueryWord *queryWord;                            //glsl查询文档
};

#endif // DOCUMENTDIALOG_H
