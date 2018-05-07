/********************************************************************************
** Form generated from reading UI file 'jumpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUMPDIALOG_H
#define UI_JUMPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JumpDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *Label;
    QLineEdit *LineEditFile;
    QLabel *rLabel;
    QLineEdit *rLineEditRow;
    QGridLayout *gridLayout;
    QPushButton *pushButtonSure;

    void setupUi(QDialog *JumpDialog)
    {
        if (JumpDialog->objectName().isEmpty())
            JumpDialog->setObjectName(QStringLiteral("JumpDialog"));
        JumpDialog->resize(328, 151);
        verticalLayout = new QVBoxLayout(JumpDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setVerticalSpacing(15);
        formLayout->setContentsMargins(5, 5, 5, 5);
        Label = new QLabel(JumpDialog);
        Label->setObjectName(QStringLiteral("Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        LineEditFile = new QLineEdit(JumpDialog);
        LineEditFile->setObjectName(QStringLiteral("LineEditFile"));
        LineEditFile->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, LineEditFile);

        rLabel = new QLabel(JumpDialog);
        rLabel->setObjectName(QStringLiteral("rLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, rLabel);

        rLineEditRow = new QLineEdit(JumpDialog);
        rLineEditRow->setObjectName(QStringLiteral("rLineEditRow"));

        formLayout->setWidget(1, QFormLayout::FieldRole, rLineEditRow);


        verticalLayout->addLayout(formLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonSure = new QPushButton(JumpDialog);
        pushButtonSure->setObjectName(QStringLiteral("pushButtonSure"));
        pushButtonSure->setMaximumSize(QSize(100, 40));

        gridLayout->addWidget(pushButtonSure, 0, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

#ifndef QT_NO_SHORTCUT
        rLabel->setBuddy(rLineEditRow);
#endif // QT_NO_SHORTCUT

        retranslateUi(JumpDialog);

        QMetaObject::connectSlotsByName(JumpDialog);
    } // setupUi

    void retranslateUi(QDialog *JumpDialog)
    {
        JumpDialog->setWindowTitle(QApplication::translate("JumpDialog", "Dialog", nullptr));
        Label->setText(QApplication::translate("JumpDialog", "\345\275\223\345\211\215\346\226\207\346\241\243:", nullptr));
        rLabel->setText(QApplication::translate("JumpDialog", "\350\241\214(&R):", nullptr));
        rLineEditRow->setText(QApplication::translate("JumpDialog", "0", nullptr));
        pushButtonSure->setText(QApplication::translate("JumpDialog", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JumpDialog: public Ui_JumpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUMPDIALOG_H
