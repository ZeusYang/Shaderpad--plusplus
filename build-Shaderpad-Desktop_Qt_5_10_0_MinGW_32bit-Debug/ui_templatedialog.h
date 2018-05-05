/********************************************************************************
** Form generated from reading UI file 'templatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATEDIALOG_H
#define UI_TEMPLATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TemplateDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidget;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFormLayout *formLayout;
    QLabel *nLabel;
    QLineEdit *nLineEdit;
    QLabel *pLabel;
    QLineEdit *pLineEdit;

    void setupUi(QDialog *TemplateDialog)
    {
        if (TemplateDialog->objectName().isEmpty())
            TemplateDialog->setObjectName(QStringLiteral("TemplateDialog"));
        TemplateDialog->resize(773, 367);
        horizontalLayout_2 = new QHBoxLayout(TemplateDialog);
        horizontalLayout_2->setSpacing(15);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, 30, 30, 30);
        listWidget = new QListWidget(TemplateDialog);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/Blender.png"), QSize(), QIcon::Active, QIcon::On);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(14);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem->setFont(font);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/highlight.png"), QSize(), QIcon::Active, QIcon::On);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem1->setFont(font);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/selectall.png"), QSize(), QIcon::Active, QIcon::On);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem2->setFont(font);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/theme.png"), QSize(), QIcon::Active, QIcon::On);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem3->setFont(font);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/instruction.png"), QSize(), QIcon::Active, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qlistwidgetitem4->setFont(font);
        __qlistwidgetitem4->setIcon(icon4);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(listWidget);

        groupBox = new QGroupBox(TemplateDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        nLabel = new QLabel(groupBox);
        nLabel->setObjectName(QStringLiteral("nLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nLabel);

        nLineEdit = new QLineEdit(groupBox);
        nLineEdit->setObjectName(QStringLiteral("nLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nLineEdit);

        pLabel = new QLabel(groupBox);
        pLabel->setObjectName(QStringLiteral("pLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pLabel);

        pLineEdit = new QLineEdit(groupBox);
        pLineEdit->setObjectName(QStringLiteral("pLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, pLineEdit);


        gridLayout->addLayout(formLayout, 0, 0, 1, 3);


        horizontalLayout_2->addWidget(groupBox);

#ifndef QT_NO_SHORTCUT
        nLabel->setBuddy(nLineEdit);
        pLabel->setBuddy(pLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(TemplateDialog);

        QMetaObject::connectSlotsByName(TemplateDialog);
    } // setupUi

    void retranslateUi(QDialog *TemplateDialog)
    {
        TemplateDialog->setWindowTitle(QApplication::translate("TemplateDialog", "Dialog", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("TemplateDialog", "\351\241\266\347\202\271\347\235\200\350\211\262\345\231\250\347\250\213\345\272\217", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("TemplateDialog", "\347\211\207\345\205\203\347\235\200\350\211\262\345\231\250\347\250\213\345\272\217", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("TemplateDialog", "\345\207\240\344\275\225\347\235\200\350\211\262\345\231\250\347\250\213\345\272\217", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("TemplateDialog", "\350\256\241\347\256\227\347\235\200\350\211\262\345\231\250\347\250\213\345\272\217", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("TemplateDialog", "\350\207\252\345\256\232\344\271\211\347\251\272\346\226\207\344\273\266", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        groupBox->setTitle(QApplication::translate("TemplateDialog", "\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("TemplateDialog", "\345\210\233\345\273\272\350\267\257\345\276\204:", nullptr));
        pushButton->setText(QApplication::translate("TemplateDialog", "\346\265\217\350\247\210...", nullptr));
        checkBox->setText(QApplication::translate("TemplateDialog", "\350\256\276\344\270\272\351\273\230\350\256\244\350\267\257\345\276\204", nullptr));
        pushButton_2->setText(QApplication::translate("TemplateDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_3->setText(QApplication::translate("TemplateDialog", "\345\217\226\346\266\210", nullptr));
        nLabel->setText(QApplication::translate("TemplateDialog", "\345\220\215\347\247\260(&N):", nullptr));
        pLabel->setText(QApplication::translate("TemplateDialog", "\345\220\216\347\274\200(&P):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TemplateDialog: public Ui_TemplateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATEDIALOG_H
