#include "themedialog.h"
#include "ui_themedialog.h"
#include <QDebug>

ThemeDialog::ThemeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThemeDialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("主题风格"));
    font = ui->ComboBoxFont->currentFont();
    alpha = static_cast<float>(ui->horizontalSliderAlpha->value()) / ui->horizontalSliderAlpha->maximum();
    theme = ui->comboBoxTheme->currentText();
    alpha_tmp = alpha;
    theme_tmp = theme;
    font_tmp = font;
    qDebug() << theme << font << alpha;
    qDebug() << ui->ComboBoxFont->currentText();
}

ThemeDialog::~ThemeDialog()
{
    delete ui;
}

void ThemeDialog::on_pushButtonSure_clicked()
{
    accept();
    sendSignalsChanged();
    updateContent();
    this->close();
}

void ThemeDialog::sendSignalsChanged()
{
    font = font_tmp;
    alpha = alpha_tmp;
    theme = theme_tmp;
    emit ThemeChanged(theme,alpha,font);
}

void ThemeDialog::on_comboBoxTheme_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    theme_tmp = ui->comboBoxTheme->currentText();
    if(theme_tmp.isEmpty())theme_tmp = "darkblack";
}

void ThemeDialog::updateContent()
{
    ui->comboBoxTheme->setCurrentText(theme);
    ui->lineEdit->setText(theme);
    ui->comboBoxFontSize->setCurrentText(QString::number(font.pointSize()));
    ui->ComboBoxFont->setCurrentFont(font);
}

void ThemeDialog::on_horizontalSliderAlpha_valueChanged(int value)
{
    value = ui->horizontalSliderAlpha->value();
    alpha_tmp = static_cast<float>(value) / ui->horizontalSliderAlpha->maximum();
    ui->label_alpha_show->setText(QString("%1").arg(alpha_tmp));
}

void ThemeDialog::on_ComboBoxFont_currentFontChanged(const QFont &f)
{
    font_tmp = f;
}

void ThemeDialog::on_comboBoxFontSize_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    font.setPointSize((ui->comboBoxFontSize->currentText()).toInt());
}

void ThemeDialog::on_pushButtonCancel_clicked()
{
    accept();
    font_tmp = font;
    alpha_tmp = alpha;
    theme_tmp = theme;
    close();
}
