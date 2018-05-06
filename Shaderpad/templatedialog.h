#ifndef TEMPLATEDIALOG_H
#define TEMPLATEDIALOG_H

#include <QDialog>

namespace Ui {
class TemplateDialog;
}

class TemplateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TemplateDialog(QWidget *parent = 0);
    ~TemplateDialog();
signals:
    void createNewFile(QString path,QString context);

private slots:
    void on_pushButton_clicked();

    void on_pushButtonSure_clicked();

private:
    Ui::TemplateDialog *ui;
    QString curPath;
};

#endif // TEMPLATEDIALOG_H
