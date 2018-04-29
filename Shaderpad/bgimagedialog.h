#ifndef BGIMAGEDIALOG_H
#define BGIMAGEDIALOG_H

#include <QDialog>

namespace Ui {
class BgImageDialog;
}

class BgImageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BgImageDialog(QWidget *parent = 0);
    ~BgImageDialog();
signals:
    void ImageChanged(QString target);
private slots:
    void on_comboBoxSelect_currentTextChanged(const QString &arg1);

    void on_pushButtonSure_clicked();

    void on_pushButtonCancel_clicked();

    void on_pushButtonApply_clicked();

private:
    Ui::BgImageDialog *ui;
    QString bgImage;
};

#endif // BGIMAGEDIALOG_H
