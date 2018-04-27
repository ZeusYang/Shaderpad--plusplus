#ifndef THEMEDIALOG_H
#define THEMEDIALOG_H

#include <QDialog>

namespace Ui {
class ThemeDialog;
}

class ThemeDialog : public QDialog
{
    Q_OBJECT
public:
    explicit ThemeDialog(QWidget *parent = 0);
    ~ThemeDialog();

    //数据
    float   alpha;      //透明度
    QString theme;      //肤色主题
    QFont   font;       //代码字体

    //临时变量
    float   alpha_tmp;
    QString theme_tmp;
    QFont   font_tmp;

signals:
    void ThemeChanged(QString theme,float alpha,QFont font);

private slots:
    void on_pushButtonSure_clicked();
    void sendSignalsChanged();//发射修改信号

    void on_comboBoxTheme_currentIndexChanged(int index);

    void on_horizontalSliderAlpha_valueChanged(int value);

    void on_ComboBoxFont_currentFontChanged(const QFont &f);

    void on_comboBoxFontSize_currentIndexChanged(int index);

    void on_pushButtonCancel_clicked();

private:
    Ui::ThemeDialog *ui;

    void updateContent();//更新控件的显示内容
};

#endif // THEMEDIALOG_H
