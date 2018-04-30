/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QPushButton *pushButtonReplaceAll;
    QGroupBox *groupBox;
    QCheckBox *checkBoxReverse;
    QCheckBox *checkBoxWhole;
    QCheckBox *checkBoxCase;
    QCheckBox *checkBoxReg;
    QPushButton *pushButtonSure;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelCount;
    QPushButton *pushButtonCount;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditSearch;
    QPushButton *pushButtonNext;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditReplace;
    QPushButton *pushButtonReplace;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName(QStringLiteral("SearchDialog"));
        SearchDialog->resize(471, 375);
        SearchDialog->setSizeGripEnabled(false);
        pushButtonReplaceAll = new QPushButton(SearchDialog);
        pushButtonReplaceAll->setObjectName(QStringLiteral("pushButtonReplaceAll"));
        pushButtonReplaceAll->setGeometry(QRect(322, 150, 131, 24));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonReplaceAll->sizePolicy().hasHeightForWidth());
        pushButtonReplaceAll->setSizePolicy(sizePolicy);
        groupBox = new QGroupBox(SearchDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 160, 181, 201));
        checkBoxReverse = new QCheckBox(groupBox);
        checkBoxReverse->setObjectName(QStringLiteral("checkBoxReverse"));
        checkBoxReverse->setGeometry(QRect(20, 40, 121, 21));
        checkBoxWhole = new QCheckBox(groupBox);
        checkBoxWhole->setObjectName(QStringLiteral("checkBoxWhole"));
        checkBoxWhole->setGeometry(QRect(20, 80, 121, 21));
        checkBoxWhole->setChecked(false);
        checkBoxCase = new QCheckBox(groupBox);
        checkBoxCase->setObjectName(QStringLiteral("checkBoxCase"));
        checkBoxCase->setGeometry(QRect(20, 120, 121, 21));
        checkBoxCase->setChecked(true);
        checkBoxReg = new QCheckBox(groupBox);
        checkBoxReg->setObjectName(QStringLiteral("checkBoxReg"));
        checkBoxReg->setGeometry(QRect(20, 160, 121, 21));
        pushButtonSure = new QPushButton(SearchDialog);
        pushButtonSure->setObjectName(QStringLiteral("pushButtonSure"));
        pushButtonSure->setGeometry(QRect(370, 300, 80, 24));
        sizePolicy.setHeightForWidth(pushButtonSure->sizePolicy().hasHeightForWidth());
        pushButtonSure->setSizePolicy(sizePolicy);
        widget = new QWidget(SearchDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(310, 190, 140, 31));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(20);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelCount = new QLabel(widget);
        labelCount->setObjectName(QStringLiteral("labelCount"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelCount->sizePolicy().hasHeightForWidth());
        labelCount->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(labelCount);

        pushButtonCount = new QPushButton(widget);
        pushButtonCount->setObjectName(QStringLiteral("pushButtonCount"));
        sizePolicy.setHeightForWidth(pushButtonCount->sizePolicy().hasHeightForWidth());
        pushButtonCount->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButtonCount);

        widget1 = new QWidget(SearchDialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(22, 22, 431, 131));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);

        lineEditSearch = new QLineEdit(widget1);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));

        horizontalLayout->addWidget(lineEditSearch);

        pushButtonNext = new QPushButton(widget1);
        pushButtonNext->setObjectName(QStringLiteral("pushButtonNext"));

        horizontalLayout->addWidget(pushButtonNext);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(label_2);

        lineEditReplace = new QLineEdit(widget1);
        lineEditReplace->setObjectName(QStringLiteral("lineEditReplace"));

        horizontalLayout_2->addWidget(lineEditReplace);

        pushButtonReplace = new QPushButton(widget1);
        pushButtonReplace->setObjectName(QStringLiteral("pushButtonReplace"));

        horizontalLayout_2->addWidget(pushButtonReplace);


        verticalLayout->addLayout(horizontalLayout_2);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEditSearch);
        label_2->setBuddy(lineEditReplace);
#endif // QT_NO_SHORTCUT

        retranslateUi(SearchDialog);

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QApplication::translate("SearchDialog", "Dialog", nullptr));
        pushButtonReplaceAll->setText(QApplication::translate("SearchDialog", "\345\205\250\351\203\250\346\233\277\346\215\242(&A)", nullptr));
        groupBox->setTitle(QApplication::translate("SearchDialog", "\346\237\245\346\211\276\350\247\204\345\210\231", nullptr));
        checkBoxReverse->setText(QApplication::translate("SearchDialog", "\345\217\215\345\220\221\346\237\245\346\211\276", nullptr));
        checkBoxWhole->setText(QApplication::translate("SearchDialog", "\345\205\250\350\257\215\345\214\271\351\205\215", nullptr));
        checkBoxCase->setText(QApplication::translate("SearchDialog", "\345\214\271\351\205\215\345\244\247\345\260\217\345\206\231", nullptr));
        checkBoxReg->setText(QApplication::translate("SearchDialog", "\346\255\243\345\210\231\350\241\250\350\276\276\345\274\217", nullptr));
        pushButtonSure->setText(QApplication::translate("SearchDialog", "\347\241\256\345\256\232", nullptr));
        labelCount->setText(QString());
        pushButtonCount->setText(QApplication::translate("SearchDialog", "\350\256\241\346\225\260", nullptr));
        label->setText(QApplication::translate("SearchDialog", "\346\237\245\346\211\276\347\233\256\346\240\207(&T):", nullptr));
        pushButtonNext->setText(QApplication::translate("SearchDialog", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252", nullptr));
        label_2->setText(QApplication::translate("SearchDialog", "\346\233\277\346\215\242\347\233\256\346\240\207(&R):", nullptr));
        pushButtonReplace->setText(QApplication::translate("SearchDialog", "\346\233\277\346\215\242\345\275\223\345\211\215\350\257\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
