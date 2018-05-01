/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionSaveAll;
    QAction *actionClose;
    QAction *actionCloseAll;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSelectAll;
    QAction *actionComment;
    QAction *actionSearch;
    QAction *actionTheme;
    QAction *actionBackground;
    QAction *actionHighlight;
    QAction *actionInstruction;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionNext;
    QAction *actionPrevious;
    QAction *actionPrintView;
    QAction *actionPDFExport;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_File;
    QMenu *menu_2;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1040, 780);
        MainWindow->setMinimumSize(QSize(1040, 780));
        MainWindow->setStyleSheet(QStringLiteral(""));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon3);
        actionSaveAll = new QAction(MainWindow);
        actionSaveAll->setObjectName(QStringLiteral("actionSaveAll"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/saveall.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAll->setIcon(icon4);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon5);
        actionCloseAll = new QAction(MainWindow);
        actionCloseAll->setObjectName(QStringLiteral("actionCloseAll"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/closeAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloseAll->setIcon(icon6);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon7);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon8);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon10);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon11);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon12);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon13);
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QStringLiteral("actionSelectAll"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/icons/selectall.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectAll->setIcon(icon14);
        actionComment = new QAction(MainWindow);
        actionComment->setObjectName(QStringLiteral("actionComment"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/icons/comment.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComment->setIcon(icon15);
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QStringLiteral("actionSearch"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/icons/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearch->setIcon(icon16);
        actionTheme = new QAction(MainWindow);
        actionTheme->setObjectName(QStringLiteral("actionTheme"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/icons/theme.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTheme->setIcon(icon17);
        actionBackground = new QAction(MainWindow);
        actionBackground->setObjectName(QStringLiteral("actionBackground"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/icons/background.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackground->setIcon(icon18);
        actionHighlight = new QAction(MainWindow);
        actionHighlight->setObjectName(QStringLiteral("actionHighlight"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/icons/highlight.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHighlight->setIcon(icon19);
        actionInstruction = new QAction(MainWindow);
        actionInstruction->setObjectName(QStringLiteral("actionInstruction"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/icons/instruction.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInstruction->setIcon(icon20);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/icons/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon21);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/icons/Qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutQt->setIcon(icon22);
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QStringLiteral("actionNext"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/icons/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNext->setIcon(icon23);
        actionPrevious = new QAction(MainWindow);
        actionPrevious->setObjectName(QStringLiteral("actionPrevious"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/icons/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrevious->setIcon(icon24);
        actionPrintView = new QAction(MainWindow);
        actionPrintView->setObjectName(QStringLiteral("actionPrintView"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/icons/view.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrintView->setIcon(icon25);
        actionPDFExport = new QAction(MainWindow);
        actionPDFExport->setObjectName(QStringLiteral("actionPDFExport"));
        QIcon icon26;
        icon26.addFile(QStringLiteral(":/icons/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPDFExport->setIcon(icon26);
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        QIcon icon27;
        icon27.addFile(QStringLiteral(":/icons/ZoomIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon27);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        QIcon icon28;
        icon28.addFile(QStringLiteral(":/icons/ZoomOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon28);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        splitter->addWidget(tabWidget);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1040, 25));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setAutoFillBackground(true);
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(actionNew);
        menu_F->addAction(actionOpen);
        menu_F->addSeparator();
        menu_F->addAction(actionSave);
        menu_F->addAction(actionSaveAs);
        menu_F->addAction(actionSaveAll);
        menu_F->addAction(actionClose);
        menu_F->addAction(actionCloseAll);
        menu_F->addSeparator();
        menu_F->addAction(actionPrint);
        menu_F->addAction(actionPrintView);
        menu_F->addAction(actionPDFExport);
        menu_F->addSeparator();
        menu_F->addAction(actionExit);
        menu_E->addAction(actionUndo);
        menu_E->addAction(actionRedo);
        menu_E->addSeparator();
        menu_E->addAction(actionCut);
        menu_E->addAction(actionCopy);
        menu_E->addAction(actionPaste);
        menu_E->addAction(actionSelectAll);
        menu_E->addSeparator();
        menu_E->addAction(actionComment);
        menu_File->addAction(actionSearch);
        menu_File->addSeparator();
        menu_File->addAction(actionPrevious);
        menu_File->addAction(actionNext);
        menu_2->addAction(actionTheme);
        menu_2->addAction(actionBackground);
        menu_2->addSeparator();
        menu_2->addAction(actionHighlight);
        menu_2->addAction(actionZoomIn);
        menu_2->addAction(actionZoomOut);
        menu_H->addAction(actionInstruction);
        menu_H->addAction(actionAbout);
        menu_H->addAction(actionAboutQt);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSaveAs);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSearch);
        mainToolBar->addAction(actionComment);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266(&N)...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266(&O)...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSaveAs->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)...", nullptr));
        actionSaveAll->setText(QApplication::translate("MainWindow", "\345\205\250\351\203\250\344\277\235\345\255\230(&G)", nullptr));
        actionClose->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(&C)", nullptr));
        actionCloseAll->setText(QApplication::translate("MainWindow", "\345\205\250\351\203\250\345\205\263\351\227\255(&H)", nullptr));
        actionPrint->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260(&P)...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPrint->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", nullptr));
        actionUndo->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200(&U)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_NO_SHORTCUT
        actionRedo->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215(&R)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207(&T)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(&P)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionSelectAll->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211(&A)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSelectAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionComment->setText(QApplication::translate("MainWindow", "\344\273\243\347\240\201\345\235\227\346\263\250\351\207\212/\345\217\226\346\266\210\346\263\250\351\207\212(&Z)...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionComment->setShortcut(QApplication::translate("MainWindow", "Ctrl+/", nullptr));
#endif // QT_NO_SHORTCUT
        actionSearch->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276(&F)...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSearch->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionTheme->setText(QApplication::translate("MainWindow", "\344\270\273\351\242\230(&T)...", nullptr));
        actionBackground->setText(QApplication::translate("MainWindow", "\350\203\214\346\231\257\345\233\276\347\211\207(&B)", nullptr));
        actionHighlight->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240\351\253\230\344\272\256\350\257\215(&H)...", nullptr));
        actionInstruction->setText(QApplication::translate("MainWindow", "\350\257\264\346\230\216\344\271\246(&I)", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", nullptr));
        actionAboutQt->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Qt(&Q)", nullptr));
        actionNext->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252\346\226\207\346\241\243(&N)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNext->setShortcut(QApplication::translate("MainWindow", "PgDown", nullptr));
#endif // QT_NO_SHORTCUT
        actionPrevious->setText(QApplication::translate("MainWindow", "\345\211\215\344\270\200\344\270\252\346\226\207\346\241\243(&P)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPrevious->setShortcut(QApplication::translate("MainWindow", "PgUp", nullptr));
#endif // QT_NO_SHORTCUT
        actionPrintView->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260\351\242\204\350\247\210(&V)", nullptr));
        actionPDFExport->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272PDF\346\226\207\344\273\266(&E)", nullptr));
        actionZoomIn->setText(QApplication::translate("MainWindow", "\345\242\236\345\244\247\345\255\227\344\275\223(&U)\n"
"", nullptr));
#ifndef QT_NO_SHORTCUT
        actionZoomIn->setShortcut(QApplication::translate("MainWindow", "Ctrl+=", nullptr));
#endif // QT_NO_SHORTCUT
        actionZoomOut->setText(QApplication::translate("MainWindow", "\345\207\217\345\260\217\345\255\227\344\275\223(&D)\n"
"", nullptr));
#ifndef QT_NO_SHORTCUT
        actionZoomOut->setShortcut(QApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_NO_SHORTCUT
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindow", "\346\226\207\346\241\243(&v)", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\351\243\216\346\240\274(&S)", nullptr));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
