/********************************************************************************
** Form generated from reading UI file 'bgimagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BGIMAGEDIALOG_H
#define UI_BGIMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BgImageDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonSure;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonApply;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxSelect;
    QLabel *labelCur;
    QLabel *labelImage;

    void setupUi(QDialog *BgImageDialog)
    {
        if (BgImageDialog->objectName().isEmpty())
            BgImageDialog->setObjectName(QStringLiteral("BgImageDialog"));
        BgImageDialog->resize(447, 368);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BgImageDialog->sizePolicy().hasHeightForWidth());
        BgImageDialog->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(BgImageDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 320, 256, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonSure = new QPushButton(layoutWidget);
        pushButtonSure->setObjectName(QStringLiteral("pushButtonSure"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonSure->sizePolicy().hasHeightForWidth());
        pushButtonSure->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButtonSure);

        pushButtonCancel = new QPushButton(layoutWidget);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        sizePolicy1.setHeightForWidth(pushButtonCancel->sizePolicy().hasHeightForWidth());
        pushButtonCancel->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButtonCancel);

        pushButtonApply = new QPushButton(layoutWidget);
        pushButtonApply->setObjectName(QStringLiteral("pushButtonApply"));
        sizePolicy1.setHeightForWidth(pushButtonApply->sizePolicy().hasHeightForWidth());
        pushButtonApply->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(pushButtonApply);

        layoutWidget1 = new QWidget(BgImageDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(43, 21, 361, 281));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBoxSelect = new QComboBox(layoutWidget1);
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->addItem(QString());
        comboBoxSelect->setObjectName(QStringLiteral("comboBoxSelect"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxSelect->sizePolicy().hasHeightForWidth());
        comboBoxSelect->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(comboBoxSelect);

        labelCur = new QLabel(layoutWidget1);
        labelCur->setObjectName(QStringLiteral("labelCur"));

        horizontalLayout->addWidget(labelCur);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        labelImage = new QLabel(layoutWidget1);
        labelImage->setObjectName(QStringLiteral("labelImage"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelImage->sizePolicy().hasHeightForWidth());
        labelImage->setSizePolicy(sizePolicy3);
        labelImage->setScaledContents(true);

        gridLayout->addWidget(labelImage, 1, 0, 1, 1);


        retranslateUi(BgImageDialog);

        QMetaObject::connectSlotsByName(BgImageDialog);
    } // setupUi

    void retranslateUi(QDialog *BgImageDialog)
    {
        BgImageDialog->setWindowTitle(QApplication::translate("BgImageDialog", "Dialog", nullptr));
        pushButtonSure->setText(QApplication::translate("BgImageDialog", "\347\241\256\345\256\232", nullptr));
        pushButtonCancel->setText(QApplication::translate("BgImageDialog", "\345\217\226\346\266\210", nullptr));
        pushButtonApply->setText(QApplication::translate("BgImageDialog", "\345\272\224\347\224\250", nullptr));
        comboBoxSelect->setItemText(0, QApplication::translate("BgImageDialog", "flower one", nullptr));
        comboBoxSelect->setItemText(1, QApplication::translate("BgImageDialog", "flower two", nullptr));
        comboBoxSelect->setItemText(2, QApplication::translate("BgImageDialog", "aero one", nullptr));
        comboBoxSelect->setItemText(3, QApplication::translate("BgImageDialog", "aero two", nullptr));
        comboBoxSelect->setItemText(4, QApplication::translate("BgImageDialog", "science one", nullptr));
        comboBoxSelect->setItemText(5, QApplication::translate("BgImageDialog", "science two", nullptr));
        comboBoxSelect->setItemText(6, QApplication::translate("BgImageDialog", "glass", nullptr));

        labelCur->setText(QApplication::translate("BgImageDialog", "\345\275\223\345\211\215\350\203\214\346\231\257:droplet one", nullptr));
        labelImage->setText(QApplication::translate("BgImageDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BgImageDialog: public Ui_BgImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BGIMAGEDIALOG_H
