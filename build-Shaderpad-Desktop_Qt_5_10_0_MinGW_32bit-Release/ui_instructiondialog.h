/********************************************************************************
** Form generated from reading UI file 'instructiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTIONDIALOG_H
#define UI_INSTRUCTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_InstructionDialog
{
public:
    QGridLayout *gridLayout;
    QTextEdit *textEdit;

    void setupUi(QDialog *InstructionDialog)
    {
        if (InstructionDialog->objectName().isEmpty())
            InstructionDialog->setObjectName(QStringLiteral("InstructionDialog"));
        InstructionDialog->resize(800, 600);
        gridLayout = new QGridLayout(InstructionDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(InstructionDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);


        retranslateUi(InstructionDialog);

        QMetaObject::connectSlotsByName(InstructionDialog);
    } // setupUi

    void retranslateUi(QDialog *InstructionDialog)
    {
        InstructionDialog->setWindowTitle(QApplication::translate("InstructionDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InstructionDialog: public Ui_InstructionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTIONDIALOG_H
