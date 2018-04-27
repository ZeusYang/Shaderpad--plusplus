/********************************************************************************
** Form generated from reading UI file 'themedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THEMEDIALOG_H
#define UI_THEMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThemeDialog
{
public:
    QPushButton *pushButtonSure;
    QPushButton *pushButtonCancel;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_theme;
    QComboBox *comboBoxTheme;
    QLabel *label_cur;
    QLineEdit *lineEdit;
    QLabel *label_alpha;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSliderAlpha;
    QLabel *label_alpha_show;
    QLabel *label_codefont;
    QFontComboBox *ComboBoxFont;
    QLabel *label_fontsize;
    QComboBox *comboBoxFontSize;

    void setupUi(QDialog *ThemeDialog)
    {
        if (ThemeDialog->objectName().isEmpty())
            ThemeDialog->setObjectName(QStringLiteral("ThemeDialog"));
        ThemeDialog->resize(384, 277);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ThemeDialog->sizePolicy().hasHeightForWidth());
        ThemeDialog->setSizePolicy(sizePolicy);
        ThemeDialog->setSizeGripEnabled(false);
        pushButtonSure = new QPushButton(ThemeDialog);
        pushButtonSure->setObjectName(QStringLiteral("pushButtonSure"));
        pushButtonSure->setGeometry(QRect(160, 240, 80, 24));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonSure->sizePolicy().hasHeightForWidth());
        pushButtonSure->setSizePolicy(sizePolicy1);
        pushButtonCancel = new QPushButton(ThemeDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(250, 240, 80, 24));
        sizePolicy.setHeightForWidth(pushButtonCancel->sizePolicy().hasHeightForWidth());
        pushButtonCancel->setSizePolicy(sizePolicy);
        widget = new QWidget(ThemeDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(16, 12, 364, 211));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setVerticalSpacing(20);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_theme = new QLabel(widget);
        label_theme->setObjectName(QStringLiteral("label_theme"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_theme);

        comboBoxTheme = new QComboBox(widget);
        comboBoxTheme->addItem(QString());
        comboBoxTheme->addItem(QString());
        comboBoxTheme->addItem(QString());
        comboBoxTheme->addItem(QString());
        comboBoxTheme->addItem(QString());
        comboBoxTheme->addItem(QString());
        comboBoxTheme->setObjectName(QStringLiteral("comboBoxTheme"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxTheme->sizePolicy().hasHeightForWidth());
        comboBoxTheme->setSizePolicy(sizePolicy2);
        comboBoxTheme->setMinimumSize(QSize(110, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBoxTheme);

        label_cur = new QLabel(widget);
        label_cur->setObjectName(QStringLiteral("label_cur"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_cur);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_alpha = new QLabel(widget);
        label_alpha->setObjectName(QStringLiteral("label_alpha"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_alpha);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSliderAlpha = new QSlider(widget);
        horizontalSliderAlpha->setObjectName(QStringLiteral("horizontalSliderAlpha"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(horizontalSliderAlpha->sizePolicy().hasHeightForWidth());
        horizontalSliderAlpha->setSizePolicy(sizePolicy3);
        horizontalSliderAlpha->setMaximum(100);
        horizontalSliderAlpha->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderAlpha);

        label_alpha_show = new QLabel(widget);
        label_alpha_show->setObjectName(QStringLiteral("label_alpha_show"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_alpha_show->sizePolicy().hasHeightForWidth());
        label_alpha_show->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(label_alpha_show);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        label_codefont = new QLabel(widget);
        label_codefont->setObjectName(QStringLiteral("label_codefont"));
        label_codefont->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_codefont);

        ComboBoxFont = new QFontComboBox(widget);
        ComboBoxFont->setObjectName(QStringLiteral("ComboBoxFont"));
        sizePolicy3.setHeightForWidth(ComboBoxFont->sizePolicy().hasHeightForWidth());
        ComboBoxFont->setSizePolicy(sizePolicy3);
        ComboBoxFont->setMinimumSize(QSize(0, 0));
        ComboBoxFont->setFontFilters(QFontComboBox::AllFonts);
        QFont font;
        font.setFamily(QStringLiteral("Source Code Pro"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        font.setStyleStrategy(QFont::PreferDefault);
        ComboBoxFont->setCurrentFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, ComboBoxFont);

        label_fontsize = new QLabel(widget);
        label_fontsize->setObjectName(QStringLiteral("label_fontsize"));
        label_fontsize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_fontsize);

        comboBoxFontSize = new QComboBox(widget);
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->addItem(QString());
        comboBoxFontSize->setObjectName(QStringLiteral("comboBoxFontSize"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBoxFontSize);

#ifndef QT_NO_SHORTCUT
        label_theme->setBuddy(comboBoxTheme);
        label_cur->setBuddy(lineEdit);
        label_alpha->setBuddy(horizontalSliderAlpha);
        label_codefont->setBuddy(ComboBoxFont);
        label_fontsize->setBuddy(comboBoxFontSize);
#endif // QT_NO_SHORTCUT

        retranslateUi(ThemeDialog);

        comboBoxFontSize->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(ThemeDialog);
    } // setupUi

    void retranslateUi(QDialog *ThemeDialog)
    {
        ThemeDialog->setWindowTitle(QApplication::translate("ThemeDialog", "Dialog", nullptr));
        pushButtonSure->setText(QApplication::translate("ThemeDialog", "\347\241\256\345\256\232", nullptr));
        pushButtonCancel->setText(QApplication::translate("ThemeDialog", "\345\217\226\346\266\210", nullptr));
        label_theme->setText(QApplication::translate("ThemeDialog", "\344\270\273\351\242\230(&T):", nullptr));
        comboBoxTheme->setItemText(0, QApplication::translate("ThemeDialog", "darkblack", nullptr));
        comboBoxTheme->setItemText(1, QApplication::translate("ThemeDialog", "darkblue", nullptr));
        comboBoxTheme->setItemText(2, QApplication::translate("ThemeDialog", "lightblack", nullptr));
        comboBoxTheme->setItemText(3, QApplication::translate("ThemeDialog", "lightblue", nullptr));
        comboBoxTheme->setItemText(4, QApplication::translate("ThemeDialog", "black", nullptr));
        comboBoxTheme->setItemText(5, QApplication::translate("ThemeDialog", "blue", nullptr));

        label_cur->setText(QApplication::translate("ThemeDialog", "\345\275\223\345\211\215\344\270\273\351\242\230:", nullptr));
        lineEdit->setText(QApplication::translate("ThemeDialog", "darkblack", nullptr));
        label_alpha->setText(QApplication::translate("ThemeDialog", "\350\203\214\346\231\257\351\200\217\346\230\216(&A):", nullptr));
        label_alpha_show->setText(QApplication::translate("ThemeDialog", "0.0", nullptr));
        label_codefont->setText(QApplication::translate("ThemeDialog", "\344\273\243\347\240\201\345\255\227\345\236\213(&F):", nullptr));
        label_fontsize->setText(QApplication::translate("ThemeDialog", "\344\273\243\347\240\201\345\255\227\345\217\267(&S):", nullptr));
        comboBoxFontSize->setItemText(0, QApplication::translate("ThemeDialog", "6", nullptr));
        comboBoxFontSize->setItemText(1, QApplication::translate("ThemeDialog", "7", nullptr));
        comboBoxFontSize->setItemText(2, QApplication::translate("ThemeDialog", "8", nullptr));
        comboBoxFontSize->setItemText(3, QApplication::translate("ThemeDialog", "9", nullptr));
        comboBoxFontSize->setItemText(4, QApplication::translate("ThemeDialog", "10", nullptr));
        comboBoxFontSize->setItemText(5, QApplication::translate("ThemeDialog", "11", nullptr));
        comboBoxFontSize->setItemText(6, QApplication::translate("ThemeDialog", "12", nullptr));
        comboBoxFontSize->setItemText(7, QApplication::translate("ThemeDialog", "14", nullptr));
        comboBoxFontSize->setItemText(8, QApplication::translate("ThemeDialog", "16", nullptr));
        comboBoxFontSize->setItemText(9, QApplication::translate("ThemeDialog", "18", nullptr));
        comboBoxFontSize->setItemText(10, QApplication::translate("ThemeDialog", "20", nullptr));
        comboBoxFontSize->setItemText(11, QApplication::translate("ThemeDialog", "22", nullptr));
        comboBoxFontSize->setItemText(12, QApplication::translate("ThemeDialog", "24", nullptr));
        comboBoxFontSize->setItemText(13, QApplication::translate("ThemeDialog", "26", nullptr));
        comboBoxFontSize->setItemText(14, QApplication::translate("ThemeDialog", "28", nullptr));
        comboBoxFontSize->setItemText(15, QApplication::translate("ThemeDialog", "36", nullptr));
        comboBoxFontSize->setItemText(16, QApplication::translate("ThemeDialog", "48", nullptr));
        comboBoxFontSize->setItemText(17, QApplication::translate("ThemeDialog", "72", nullptr));

        comboBoxFontSize->setCurrentText(QApplication::translate("ThemeDialog", "11", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThemeDialog: public Ui_ThemeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEMEDIALOG_H
