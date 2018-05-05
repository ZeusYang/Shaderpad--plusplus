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

private:
    Ui::TemplateDialog *ui;
};

#endif // TEMPLATEDIALOG_H
