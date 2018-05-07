#ifndef JUMPDIALOG_H
#define JUMPDIALOG_H

#include <QDialog>

namespace Ui {
class JumpDialog;
}

class JumpDialog : public QDialog
{
    Q_OBJECT

public:
    explicit JumpDialog(QWidget *parent = 0);
    ~JumpDialog();
    void setCurrentFile(const QString &curFile);
signals:
    void setColRow(int rows);
private slots:
    void on_pushButtonSure_clicked();

private:
    Ui::JumpDialog *ui;
};

#endif // JUMPDIALOG_H
