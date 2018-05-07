/********************************************************************************
** Form generated from reading UI file 'documentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCUMENTDIALOG_H
#define UI_DOCUMENTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DocumentDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLineEdit *lineEditTarget;
    QPushButton *pushButtonQuery;
    QTextEdit *textEdit;

    void setupUi(QDialog *DocumentDialog)
    {
        if (DocumentDialog->objectName().isEmpty())
            DocumentDialog->setObjectName(QStringLiteral("DocumentDialog"));
        DocumentDialog->resize(800, 600);
        gridLayout = new QGridLayout(DocumentDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(DocumentDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        lineEditTarget = new QLineEdit(splitter);
        lineEditTarget->setObjectName(QStringLiteral("lineEditTarget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditTarget->sizePolicy().hasHeightForWidth());
        lineEditTarget->setSizePolicy(sizePolicy);
        lineEditTarget->setMinimumSize(QSize(0, 50));
        lineEditTarget->setMaximumSize(QSize(300, 16777215));
        splitter->addWidget(lineEditTarget);
        pushButtonQuery = new QPushButton(splitter);
        pushButtonQuery->setObjectName(QStringLiteral("pushButtonQuery"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonQuery->sizePolicy().hasHeightForWidth());
        pushButtonQuery->setSizePolicy(sizePolicy1);
        pushButtonQuery->setMaximumSize(QSize(50, 50));
        splitter->addWidget(pushButtonQuery);

        verticalLayout->addWidget(splitter);

        textEdit = new QTextEdit(DocumentDialog);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(DocumentDialog);

        QMetaObject::connectSlotsByName(DocumentDialog);
    } // setupUi

    void retranslateUi(QDialog *DocumentDialog)
    {
        DocumentDialog->setWindowTitle(QApplication::translate("DocumentDialog", "Dialog", nullptr));
        pushButtonQuery->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DocumentDialog: public Ui_DocumentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCUMENTDIALOG_H
