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
#include <QtWidgets/QCheckBox>
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
    QPushButton *pushButtonApply;
    QWidget *layoutWidget;
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
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxFontSize;
    QCheckBox *checkBox;

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
        pushButtonSure->setGeometry(QRect(110, 240, 80, 24));
        sizePolicy.setHeightForWidth(pushButtonSure->sizePolicy().hasHeightForWidth());
        pushButtonSure->setSizePolicy(sizePolicy);
        pushButtonCancel = new QPushButton(ThemeDialog);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(200, 240, 80, 24));
        sizePolicy.setHeightForWidth(pushButtonCancel->sizePolicy().hasHeightForWidth());
        pushButtonCancel->setSizePolicy(sizePolicy);
        pushButtonApply = new QPushButton(ThemeDialog);
        pushButtonApply->setObjectName(QStringLiteral("pushButtonApply"));
        pushButtonApply->setGeometry(QRect(290, 240, 80, 24));
        sizePolicy.setHeightForWidth(pushButtonApply->sizePolicy().hasHeightForWidth());
        pushButtonApply->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(ThemeDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(18, 14, 349, 211));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(22);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_theme = new QLabel(layoutWidget);
        label_theme->setObjectName(QStringLiteral("label_theme"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_theme);

        comboBoxTheme = new QComboBox(layoutWidget);
        comboBoxTheme->addItem(QString());
        comboBoxTheme->addItem(QString());
        comboBoxTheme->addItem(QString());
        comboBoxTheme->addItem(QString());
        comboBoxTheme->addItem(QString());
        comboBoxTheme->addItem(QString());
        comboBoxTheme->setObjectName(QStringLiteral("comboBoxTheme"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxTheme->sizePolicy().hasHeightForWidth());
        comboBoxTheme->setSizePolicy(sizePolicy1);
        comboBoxTheme->setMinimumSize(QSize(110, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBoxTheme);

        label_cur = new QLabel(layoutWidget);
        label_cur->setObjectName(QStringLiteral("label_cur"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_cur);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_alpha = new QLabel(layoutWidget);
        label_alpha->setObjectName(QStringLiteral("label_alpha"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_alpha);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSliderAlpha = new QSlider(layoutWidget);
        horizontalSliderAlpha->setObjectName(QStringLiteral("horizontalSliderAlpha"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(horizontalSliderAlpha->sizePolicy().hasHeightForWidth());
        horizontalSliderAlpha->setSizePolicy(sizePolicy2);
        horizontalSliderAlpha->setMaximum(100);
        horizontalSliderAlpha->setSingleStep(5);
        horizontalSliderAlpha->setSliderPosition(50);
        horizontalSliderAlpha->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderAlpha);

        label_alpha_show = new QLabel(layoutWidget);
        label_alpha_show->setObjectName(QStringLiteral("label_alpha_show"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_alpha_show->sizePolicy().hasHeightForWidth());
        label_alpha_show->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(label_alpha_show);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);

        label_codefont = new QLabel(layoutWidget);
        label_codefont->setObjectName(QStringLiteral("label_codefont"));
        label_codefont->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_codefont);

        ComboBoxFont = new QFontComboBox(layoutWidget);
        ComboBoxFont->setObjectName(QStringLiteral("ComboBoxFont"));
        sizePolicy2.setHeightForWidth(ComboBoxFont->sizePolicy().hasHeightForWidth());
        ComboBoxFont->setSizePolicy(sizePolicy2);
        ComboBoxFont->setMinimumSize(QSize(0, 0));
        ComboBoxFont->setEditable(false);
        ComboBoxFont->setFontFilters(QFontComboBox::AllFonts);
        QFont font;
        font.setFamily(QStringLiteral("Consolas"));
        font.setPointSize(14);
        ComboBoxFont->setCurrentFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, ComboBoxFont);

        label_fontsize = new QLabel(layoutWidget);
        label_fontsize->setObjectName(QStringLiteral("label_fontsize"));
        label_fontsize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_fontsize);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        comboBoxFontSize = new QComboBox(layoutWidget);
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

        horizontalLayout_2->addWidget(comboBoxFontSize);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(false);
        checkBox->setChecked(true);
        checkBox->setTristate(true);

        horizontalLayout_2->addWidget(checkBox);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_2);

#ifndef QT_NO_SHORTCUT
        label_theme->setBuddy(comboBoxTheme);
        label_cur->setBuddy(lineEdit);
        label_alpha->setBuddy(horizontalSliderAlpha);
        label_codefont->setBuddy(ComboBoxFont);
        label_fontsize->setBuddy(comboBoxFontSize);
#endif // QT_NO_SHORTCUT

        retranslateUi(ThemeDialog);

        comboBoxFontSize->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(ThemeDialog);
    } // setupUi

    void retranslateUi(QDialog *ThemeDialog)
    {
        ThemeDialog->setWindowTitle(QApplication::translate("ThemeDialog", "Dialog", nullptr));
        pushButtonSure->setText(QApplication::translate("ThemeDialog", "\347\241\256\345\256\232", nullptr));
        pushButtonCancel->setText(QApplication::translate("ThemeDialog", "\345\217\226\346\266\210", nullptr));
        pushButtonApply->setText(QApplication::translate("ThemeDialog", "\345\272\224\347\224\250", nullptr));
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
        label_alpha_show->setText(QApplication::translate("ThemeDialog", "0.5", nullptr));
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
        comboBoxFontSize->setItemText(15, QApplication::translate("ThemeDialog", "30", nullptr));
        comboBoxFontSize->setItemText(16, QApplication::translate("ThemeDialog", "32", nullptr));
        comboBoxFontSize->setItemText(17, QApplication::translate("ThemeDialog", "34", nullptr));
        comboBoxFontSize->setItemText(18, QApplication::translate("ThemeDialog", "36", nullptr));
        comboBoxFontSize->setItemText(19, QApplication::translate("ThemeDialog", "38", nullptr));
        comboBoxFontSize->setItemText(20, QApplication::translate("ThemeDialog", "40", nullptr));
        comboBoxFontSize->setItemText(21, QApplication::translate("ThemeDialog", "42", nullptr));
        comboBoxFontSize->setItemText(22, QApplication::translate("ThemeDialog", "44", nullptr));
        comboBoxFontSize->setItemText(23, QApplication::translate("ThemeDialog", "46", nullptr));
        comboBoxFontSize->setItemText(24, QApplication::translate("ThemeDialog", "48", nullptr));
        comboBoxFontSize->setItemText(25, QApplication::translate("ThemeDialog", "50", nullptr));
        comboBoxFontSize->setItemText(26, QApplication::translate("ThemeDialog", "52", nullptr));
        comboBoxFontSize->setItemText(27, QApplication::translate("ThemeDialog", "54", nullptr));
        comboBoxFontSize->setItemText(28, QApplication::translate("ThemeDialog", "56", nullptr));
        comboBoxFontSize->setItemText(29, QApplication::translate("ThemeDialog", "58", nullptr));
        comboBoxFontSize->setItemText(30, QApplication::translate("ThemeDialog", "72", nullptr));

        comboBoxFontSize->setCurrentText(QApplication::translate("ThemeDialog", "14", nullptr));
        checkBox->setText(QApplication::translate("ThemeDialog", "\346\212\227\351\224\257\351\275\277(&P)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThemeDialog: public Ui_ThemeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEMEDIALOG_H
