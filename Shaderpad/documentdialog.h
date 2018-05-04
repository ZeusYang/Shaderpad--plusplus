#ifndef DOCUMENTDIALOG_H
#define DOCUMENTDIALOG_H

#include <QDialog>

namespace Ui {
class DocumentDialog;
}
class QCompleter;
class DocumentDialog : public QDialog
{
    Q_OBJECT
public:
    explicit DocumentDialog(QWidget *parent = 0);
    ~DocumentDialog();

    void setCompleter(QCompleter *completer);

    void initializeTextEdit();

private:
    Ui::DocumentDialog *ui;
};

#endif // DOCUMENTDIALOG_H
