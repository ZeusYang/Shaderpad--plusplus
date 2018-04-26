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
    QAction *actionFont;
    QAction *actionBackground;
    QAction *actionHighlight;
    QAction *actionInstruction;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionNext;
    QAction *actionPrevious;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
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
        MainWindow->resize(572, 538);
        MainWindow->setStyleSheet(QLatin1String("QPalette{background:#1F2026;}*{outline:0px;color:#D7E2E9;}\n"
"\n"
"QWidget[form=\"true\"],QLabel[frameShape=\"1\"]{\n"
"border:1px solid #111214;\n"
"border-radius:0px;\n"
"}\n"
"\n"
"*{\n"
"background-color: #404244;\n"
"font: 11pt \"Lobster\";\n"
"}\n"
"\n"
"QMessageBox{\n"
"background-color: #404244;\n"
"font: 11pt \"Lobster\";\n"
"}\n"
"\n"
"QWidget[form=\"bottom\"]{\n"
"background:#242629;\n"
"}\n"
"\n"
"QWidget[form=\"bottom\"] .QFrame{\n"
"border:1px solid #D7E2E9;\n"
"}\n"
"\n"
"QWidget[form=\"bottom\"] QLabel,QWidget[form=\"title\"] QLabel{\n"
"border-radius:0px;\n"
"color:#D7E2E9;\n"
"background:none;\n"
"border-style:none;\n"
"}\n"
"\n"
"QWidget[form=\"title\"],QWidget[nav=\"left\"],QWidget[nav=\"top\"] QAbstractButton{\n"
"border-style:none;\n"
"border-radius:0px;\n"
"padding:5px;\n"
"color:#D7E2E9;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #242629,stop:1 #141518);\n"
"}\n"
"\n"
"QWidget[nav=\"top\"] QAbstractButton:hover,QWidget[nav=\"top\"] QAbstractButton:pressed,QWid"
                        "get[nav=\"top\"] QAbstractButton:checked{\n"
"border-style:solid;\n"
"border-width:0px 0px 2px 0px;\n"
"padding:4px 4px 2px 4px;\n"
"border-color:#00BB9E;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #007DC4,stop:1 #0074BF);\n"
"}\n"
"\n"
"QWidget[nav=\"left\"] QAbstractButton{\n"
"border-radius:0px;\n"
"color:#D7E2E9;\n"
"background:none;\n"
"border-style:none;\n"
"}\n"
"\n"
"QWidget[nav=\"left\"] QAbstractButton:hover{\n"
"color:#FFFFFF;\n"
"background-color:#00BB9E;\n"
"}\n"
"\n"
"QWidget[nav=\"left\"] QAbstractButton:checked,QWidget[nav=\"left\"] QAbstractButton:pressed{\n"
"color:#D7E2E9;\n"
"border-style:solid;\n"
"border-width:0px 0px 0px 2px;\n"
"padding:4px 4px 4px 2px;\n"
"border-color:#00BB9E;\n"
"background-color:#1F2026;\n"
"}\n"
"\n"
"QWidget[video=\"true\"] QLabel{\n"
"color:#D7E2E9;\n"
"border:1px solid #111214;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #242629,stop:1 #141518);\n"
"}\n"
"\n"
"QWidget[video=\"true\"] QLabel:focus{\n"
"border:1px"
                        " solid #00BB9E;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #007DC4,stop:1 #0074BF);\n"
"}\n"
"\n"
"QLineEdit,QTextEdit,QPlainTextEdit,QSpinBox,QDoubleSpinBox,QComboBox,QDateEdit,QTimeEdit,QDateTimeEdit{\n"
"border:1px solid #111214;\n"
"border-radius:3px;\n"
"padding:2px;\n"
"background:none;\n"
"selection-background-color:#242629;\n"
"selection-color:#D7E2E9;\n"
"}\n"
"\n"
"QLineEdit:focus,QTextEdit:focus,QPlainTextEdit:focus,QSpinBox:focus,QDoubleSpinBox:focus,QComboBox:focus,QDateEdit:focus,QTimeEdit:focus,QDateTimeEdit:focus,QLineEdit:hover,QTextEdit:hover,QPlainTextEdit:hover,QSpinBox:hover,QDoubleSpinBox:hover,QComboBox:hover,QDateEdit:hover,QTimeEdit:hover,QDateTimeEdit:hover{\n"
"border:1px solid #111214;\n"
"}\n"
"\n"
"QLineEdit[echoMode=\"2\"]{\n"
"lineedit-password-character:9679;\n"
"}\n"
"\n"
".QFrame{\n"
"border:1px solid #111214;\n"
"border-radius:3px;\n"
"}\n"
"\n"
".QGroupBox{\n"
"border:1px solid #111214;\n"
"border-radius:5px;\n"
"margin-top:3ex;\n"
"}\n"
"\n"
".QGr"
                        "oupBox::title{\n"
"subcontrol-origin:margin;\n"
"position:relative;\n"
"left:10px;\n"
"}\n"
"\n"
".QPushButton,.QToolButton{\n"
"border-style:none;\n"
"border:1px solid #111214;\n"
"color:#D7E2E9;\n"
"padding:5px;\n"
"min-height:15px;\n"
"border-radius:5px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #242629,stop:1 #141518);\n"
"}\n"
"\n"
".QPushButton:hover,.QToolButton:hover{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #007DC4,stop:1 #0074BF);\n"
"}\n"
"\n"
".QPushButton:pressed,.QToolButton:pressed{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #242629,stop:1 #141518);\n"
"}\n"
"\n"
".QToolButton::menu-indicator{\n"
"image:None;\n"
"}\n"
"\n"
"QToolButton#btnMenu,QPushButton#btnMenu_Min,QPushButton#btnMenu_Max,QPushButton#btnMenu_Close{\n"
"border-radius:3px;\n"
"color:#D7E2E9;\n"
"padding:3px;\n"
"margin:0px;\n"
"background:none;\n"
"border-style:none;\n"
"}\n"
"\n"
"QToolButton#btnMenu:hover,QPushButton#btnMenu_Min:hover,QPushButton#"
                        "btnMenu_Max:hover{\n"
"color:#FFFFFF;\n"
"margin:1px 1px 2px 1px;\n"
"background-color:rgba(51,127,209,230);\n"
"}\n"
"\n"
"QPushButton#btnMenu_Close:hover{\n"
"color:#FFFFFF;\n"
"margin:1px 1px 2px 1px;\n"
"background-color:rgba(238,0,0,128);\n"
"}\n"
"\n"
"QRadioButton::indicator{\n"
"width:15px;\n"
"height:15px;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked{\n"
"image:url(:/qss/darkblack/radiobutton_unchecked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked:disabled{\n"
"image:url(:/qss/darkblack/radiobutton_unchecked_disable.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked{\n"
"image:url(:/qss/darkblack/radiobutton_checked.png);\n"
"}\n"
"\n"
"QRadioButton::indicator::checked:disabled{\n"
"image:url(:/qss/darkblack/radiobutton_checked_disable.png);\n"
"}\n"
"\n"
"QGroupBox::indicator,QTreeWidget::indicator,QListWidget::indicator{\n"
"padding:0px -3px 0px 3px;\n"
"}\n"
"\n"
"QCheckBox::indicator,QGroupBox::indicator,QTreeWidget::indicator,QListWidget::indicator{\n"
"width:13px;\n"
"height:13"
                        "px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked,QGroupBox::indicator:unchecked,QTreeWidget::indicator:unchecked,QListWidget::indicator:unchecked{\n"
"image:url(:/qss/darkblack/checkbox_unchecked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:disabled,QGroupBox::indicator:unchecked:disabled,QTreeWidget::indicator:unchecked:disabled,QListWidget::indicator:disabled{\n"
"image:url(:/qss/darkblack/checkbox_unchecked_disable.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked,QGroupBox::indicator:checked,QTreeWidget::indicator:checked,QListWidget::indicator:checked{\n"
"image:url(:/qss/darkblack/checkbox_checked.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:disabled,QGroupBox::indicator:checked:disabled,QTreeWidget::indicator:checked:disabled,QListWidget::indicator:checked:disabled{\n"
"image:url(:/qss/darkblack/checkbox_checked_disable.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate,QGroupBox::indicator:indeterminate,QTreeWidget::indicator:indeterminate,QListWidget::indicator:indeterminate{\n"
"ima"
                        "ge:url(:/qss/darkblack/checkbox_parcial.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:disabled,QGroupBox::indicator:indeterminate:disabled,QTreeWidget::indicator:indeterminate:disabled,QListWidget::indicator:indeterminate:disabled{\n"
"image:url(:/qss/darkblack/checkbox_parcial_disable.png);\n"
"}\n"
"\n"
"QTimeEdit::up-button,QDateEdit::up-button,QDateTimeEdit::up-button,QDoubleSpinBox::up-button,QSpinBox::up-button{\n"
"image:url(:/qss/darkblack/add_top.png);\n"
"width:10px;\n"
"height:10px;\n"
"padding:2px 5px 0px 0px;\n"
"}\n"
"\n"
"QTimeEdit::down-button,QDateEdit::down-button,QDateTimeEdit::down-button,QDoubleSpinBox::down-button,QSpinBox::down-button{\n"
"image:url(:/qss/darkblack/add_bottom.png);\n"
"width:10px;\n"
"height:10px;\n"
"padding:0px 5px 2px 0px;\n"
"}\n"
"\n"
"QTimeEdit::up-button:pressed,QDateEdit::up-button:pressed,QDateTimeEdit::up-button:pressed,QDoubleSpinBox::up-button:pressed,QSpinBox::up-button:pressed{\n"
"top:-2px;\n"
"}\n"
"  \n"
"QTimeEdit::down-button:pressed,QDateEdi"
                        "t::down-button:pressed,QDateTimeEdit::down-button:pressed,QDoubleSpinBox::down-button:pressed,QSpinBox::down-button:pressed,QSpinBox::down-button:pressed{\n"
"bottom:-2px;\n"
"}\n"
"\n"
"QComboBox::down-arrow,QDateEdit[calendarPopup=\"true\"]::down-arrow,QTimeEdit[calendarPopup=\"true\"]::down-arrow,QDateTimeEdit[calendarPopup=\"true\"]::down-arrow{\n"
"image:url(:/qss/darkblack/add_bottom.png);\n"
"width:10px;\n"
"height:10px;\n"
"right:2px;\n"
"}\n"
"\n"
"QComboBox::drop-down,QDateEdit::drop-down,QTimeEdit::drop-down,QDateTimeEdit::drop-down{\n"
"subcontrol-origin:padding;\n"
"subcontrol-position:top right;\n"
"width:15px;\n"
"border-left-width:0px;\n"
"border-left-style:solid;\n"
"border-top-right-radius:3px;\n"
"border-bottom-right-radius:3px;\n"
"border-left-color:#111214;\n"
"}\n"
"\n"
"QComboBox::drop-down:on{\n"
"top:1px;\n"
"}\n"
"\n"
"QMenuBar::item{\n"
"color:#D7E2E9;\n"
"background-color:#242629;\n"
"margin:0px;\n"
"padding:3px 10px;\n"
"}\n"
"\n"
"QMenu,QMenuBar,QMenu:disabled,QMenuBar:disabled{\n"
""
                        "color:#D7E2E9;\n"
"background-color:#242629;\n"
"border:1px solid #111214;\n"
"margin:0px;\n"
"}\n"
"\n"
"QMenu::item{\n"
"padding:3px 20px;\n"
"}\n"
"\n"
"QMenu::indicator{\n"
"width:13px;\n"
"height:13px;\n"
"}\n"
"\n"
"QMenu::item:selected,QMenuBar::item:selected{\n"
"color:#D7E2E9;\n"
"border:0px solid #111214;\n"
"background:#007DC4;\n"
"}\n"
"\n"
"QMenu::separator{\n"
"height:1px;\n"
"background:#111214;\n"
"}\n"
"\n"
"QProgressBar{\n"
"min-height:10px;\n"
"background:#242629;\n"
"border-radius:5px;\n"
"text-align:center;\n"
"border:1px solid #242629;\n"
"}\n"
"\n"
"QProgressBar:chunk{\n"
"border-radius:5px;\n"
"background-color:#111214;\n"
"}\n"
"\n"
"QSlider::groove:horizontal{\n"
"background:#242629;\n"
"height:8px;\n"
"border-radius:4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal{\n"
"background:#242629;\n"
"height:8px;\n"
"border-radius:4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal{\n"
"background:#111214;\n"
"height:8px;\n"
"border-radius:4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal{\n"
"widt"
                        "h:13px;\n"
"margin-top:-3px;\n"
"margin-bottom:-3px;\n"
"border-radius:6px;\n"
"background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 #1F2026,stop:0.8 #111214);\n"
"}\n"
"\n"
"QSlider::groove:vertical{\n"
"width:8px;\n"
"border-radius:4px;\n"
"background:#242629;\n"
"}\n"
"\n"
"QSlider::add-page:vertical{\n"
"width:8px;\n"
"border-radius:4px;\n"
"background:#242629;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical{\n"
"width:8px;\n"
"border-radius:4px;\n"
"background:#111214;\n"
"}\n"
"\n"
"QSlider::handle:vertical{\n"
"height:14px;\n"
"margin-left:-3px;\n"
"margin-right:-3px;\n"
"border-radius:6px;\n"
"background:qradialgradient(spread:pad,cx:0.5,cy:0.5,radius:0.5,fx:0.5,fy:0.5,stop:0.6 #1F2026,stop:0.8 #111214);\n"
"}\n"
"\n"
"QScrollBar:horizontal{\n"
"background:#242629;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-height:12px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal{\n"
"background:#0074BF;\n"
"min-width:50px;\n"
"border-radius:6px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizo"
                        "ntal:hover{\n"
"background:#111214;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal:pressed{\n"
"background:#111214;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal{\n"
"background:none;\n"
"}\n"
"\n"
"QScrollBar::sub-page:horizontal{\n"
"background:none;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal{\n"
"background:none;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal{\n"
"background:none;\n"
"}\n"
"\n"
"QScrollBar:vertical{\n"
"background:#242629;\n"
"padding:0px;\n"
"border-radius:6px;\n"
"max-width:12px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical{\n"
"background:#0074BF;\n"
"min-height:50px;\n"
"border-radius:6px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover{\n"
"background:#111214;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:pressed{\n"
"background:#111214;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical{\n"
"background:none;\n"
"}\n"
"\n"
"QScrollBar::sub-page:vertical{\n"
"background:none;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical{\n"
"background:none;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical{\n"
"ba"
                        "ckground:none;\n"
"}\n"
"\n"
"QScrollArea{\n"
"border:0px;\n"
"}\n"
"\n"
"QTreeView,QListView,QTableView,QTabWidget::pane{\n"
"border:1px solid #111214;\n"
"selection-background-color:#007DC4;\n"
"selection-color:#D7E2E9;\n"
"alternate-background-color:#0074BF;\n"
"gridline-color:#111214;\n"
"}\n"
"\n"
"QTreeView::branch:closed:has-children{\n"
"margin:4px;\n"
"border-image:url(:/qss/darkblack/branch_open.png);\n"
"}\n"
"\n"
"QTreeView::branch:open:has-children{\n"
"margin:4px;\n"
"border-image:url(:/qss/darkblack/branch_close.png);\n"
"}\n"
"\n"
"QTreeView,QListView,QTableView,QSplitter::handle,QTreeView::branch{\n"
"background:#1F2026;\n"
"}\n"
"\n"
"QTableView::item:selected,QListView::item:selected,QTreeView::item:selected{\n"
"color:#D7E2E9;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #242629,stop:1 #141518);\n"
"}\n"
"\n"
"QTableView::item:hover,QListView::item:hover,QTreeView::item:hover{\n"
"color:#D7E2E9;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #00"
                        "7DC4,stop:1 #0074BF);\n"
"}\n"
"\n"
"QTableView::item,QListView::item,QTreeView::item{\n"
"padding:1px;\n"
"margin:0px;\n"
"}\n"
"\n"
"QHeaderView::section,QTableCornerButton:section{\n"
"padding:3px;\n"
"margin:0px;\n"
"color:#D7E2E9;\n"
"border:1px solid #111214;\n"
"border-left-width:0px;\n"
"border-right-width:1px;\n"
"border-top-width:0px;\n"
"border-bottom-width:1px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #007DC4,stop:1 #0074BF);\n"
"}\n"
"\n"
"QTabBar::tab{\n"
"border:1px solid #111214;\n"
"color:#D7E2E9;\n"
"margin:0px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #007DC4,stop:1 #0074BF);\n"
"}\n"
"\n"
"QTabBar::tab:selected,QTabBar::tab:hover{\n"
"border-style:solid;\n"
"border-color:#00BB9E;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #242629,stop:1 #141518);\n"
"}\n"
"\n"
"QTabBar::tab:top,QTabBar::tab:bottom{\n"
"padding:3px 8px 3px 8px;\n"
"}\n"
"\n"
"QTabBar::tab:left,QTabBar::tab:right{\n"
"padding:8px 3px 8px 3px;\n"
""
                        "}\n"
"\n"
"QTabBar::tab:top:selected,QTabBar::tab:top:hover{\n"
"border-width:2px 0px 0px 0px;\n"
"}\n"
"\n"
"QTabBar::tab:right:selected,QTabBar::tab:right:hover{\n"
"border-width:0px 0px 0px 2px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:selected,QTabBar::tab:bottom:hover{\n"
"border-width:0px 0px 2px 0px;\n"
"}\n"
"\n"
"QTabBar::tab:left:selected,QTabBar::tab:left:hover{\n"
"border-width:0px 2px 0px 0px;\n"
"}\n"
"\n"
"QTabBar::tab:first:top:selected,QTabBar::tab:first:top:hover,QTabBar::tab:first:bottom:selected,QTabBar::tab:first:bottom:hover{\n"
"border-left-width:1px;\n"
"border-left-color:#111214;\n"
"}\n"
"\n"
"QTabBar::tab:first:left:selected,QTabBar::tab:first:left:hover,QTabBar::tab:first:right:selected,QTabBar::tab:first:right:hover{\n"
"border-top-width:1px;\n"
"border-top-color:#111214;\n"
"}\n"
"\n"
"QTabBar::tab:last:top:selected,QTabBar::tab:last:top:hover,QTabBar::tab:last:bottom:selected,QTabBar::tab:last:bottom:hover{\n"
"border-right-width:1px;\n"
"border-right-color:#111214;\n"
"}\n"
"\n"
"QTab"
                        "Bar::tab:last:left:selected,QTabBar::tab:last:left:hover,QTabBar::tab:last:right:selected,QTabBar::tab:last:right:hover{\n"
"border-bottom-width:1px;\n"
"border-bottom-color:#111214;\n"
"}\n"
"\n"
"QStatusBar::item{\n"
"border:0px solid #242629;\n"
"border-radius:3px;\n"
"}\n"
"\n"
"QToolBox::tab,QGroupBox#gboxDevicePanel,QGroupBox#gboxDeviceTitle,QFrame#gboxDevicePanel,QFrame#gboxDeviceTitle{\n"
"padding:3px;\n"
"border-radius:5px;\n"
"color:#D7E2E9;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #242629,stop:1 #141518);\n"
"}\n"
"\n"
"QToolTip{\n"
"border:0px solid #D7E2E9;\n"
"padding:1px;\n"
"color:#D7E2E9;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #242629,stop:1 #141518);\n"
"}\n"
"\n"
"QToolBox::tab:selected{\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #007DC4,stop:1 #0074BF);\n"
"}\n"
"\n"
"QPrintPreviewDialog QToolButton{\n"
"border:0px solid #D7E2E9;\n"
"border-radius:0px;\n"
"margin:0px;\n"
"padding:3px;\n"
"background:none;\n"
""
                        "}\n"
"\n"
"QColorDialog QPushButton,QFileDialog QPushButton{\n"
"min-width:80px;\n"
"}\n"
"\n"
"QToolButton#qt_calendar_prevmonth{\n"
"icon-size:0px;\n"
"min-width:20px;\n"
"image:url(:/qss/darkblack/calendar_prevmonth.png);\n"
"}\n"
"\n"
"QToolButton#qt_calendar_nextmonth{\n"
"icon-size:0px;\n"
"min-width:20px;\n"
"image:url(:/qss/darkblack/calendar_nextmonth.png);\n"
"}\n"
"\n"
"QToolButton#qt_calendar_prevmonth,QToolButton#qt_calendar_nextmonth,QToolButton#qt_calendar_monthbutton,QToolButton#qt_calendar_yearbutton{\n"
"border:0px solid #D7E2E9;\n"
"border-radius:3px;\n"
"margin:3px 3px 3px 3px;\n"
"padding:3px;\n"
"background:none;\n"
"}\n"
"\n"
"QToolButton#qt_calendar_prevmonth:hover,QToolButton#qt_calendar_nextmonth:hover,QToolButton#qt_calendar_monthbutton:hover,QToolButton#qt_calendar_yearbutton:hover,QToolButton#qt_calendar_prevmonth:pressed,QToolButton#qt_calendar_nextmonth:pressed,QToolButton#qt_calendar_monthbutton:pressed,QToolButton#qt_calendar_yearbutton:pressed{\n"
"border:1px solid #111214;\n"
""
                        "}\n"
"\n"
"QCalendarWidget QSpinBox#qt_calendar_yearedit{\n"
"margin:2px;\n"
"}\n"
"\n"
"QCalendarWidget QToolButton::menu-indicator{\n"
"image:None;\n"
"}\n"
"\n"
"QCalendarWidget QTableView{\n"
"border-width:0px;\n"
"}\n"
"\n"
"QCalendarWidget QWidget#qt_calendar_navigationbar{\n"
"border:1px solid #111214;\n"
"border-width:1px 1px 0px 1px;\n"
"background:qlineargradient(spread:pad,x1:0,y1:0,x2:0,y2:1,stop:0 #242629,stop:1 #141518);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item{\n"
"min-height:20px;\n"
"min-width:10px;\n"
"}\n"
"\n"
"QTableView[model=\"true\"]::item{\n"
"padding:0px;\n"
"margin:0px;\n"
"}\n"
"\n"
"QTableView QLineEdit,QTableView QComboBox,QTableView QSpinBox,QTableView QDoubleSpinBox,QTableView QDateEdit,QTableView QTimeEdit,QTableView QDateTimeEdit{\n"
"border-width:0px;\n"
"border-radius:0px;\n"
"}\n"
"\n"
"QTableView QLineEdit:focus,QTableView QComboBox:focus,QTableView QSpinBox:focus,QTableView QDoubleSpinBox:focus,QTableView QDateEdit:focus,QTableView QTimeEdit:focus,QTableView QDate"
                        "TimeEdit:focus{\n"
"border-width:0px;\n"
"border-radius:0px;\n"
"}\n"
"\n"
"QLineEdit,QTextEdit,QPlainTextEdit,QSpinBox,QDoubleSpinBox,QComboBox,QDateEdit,QTimeEdit,QDateTimeEdit{\n"
"background:#1F2026;\n"
"}\n"
"\n"
"*:disabled{\n"
"background:#1F2026;\n"
"border-color:#242629;\n"
"}\n"
"\n"
"/*TextColor:#D7E2E9*/\n"
"/*PanelColor:#1F2026*/\n"
"/*BorderColor:#111214*/\n"
"/*NormalColorStart:#242629*/\n"
"/*NormalColorEnd:#141518*/\n"
"/*DarkColorStart:#007DC4*/\n"
"/*DarkColorEnd:#0074BF*/\n"
"/*HighColor:#00BB9E*/\n"
""));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QStringLiteral("actionSaveAs"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon3);
        actionSaveAll = new QAction(MainWindow);
        actionSaveAll->setObjectName(QStringLiteral("actionSaveAll"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/saveall.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAll->setIcon(icon4);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon5);
        actionCloseAll = new QAction(MainWindow);
        actionCloseAll->setObjectName(QStringLiteral("actionCloseAll"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/closeAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloseAll->setIcon(icon6);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icon/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon7);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icon/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon8);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icon/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icon/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon10);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icon/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon11);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icon/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon12);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icon/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon13);
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QStringLiteral("actionSelectAll"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/icon/selectAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectAll->setIcon(icon14);
        actionComment = new QAction(MainWindow);
        actionComment->setObjectName(QStringLiteral("actionComment"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/icon/comment.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComment->setIcon(icon15);
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName(QStringLiteral("actionSearch"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/icon/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSearch->setIcon(icon16);
        actionTheme = new QAction(MainWindow);
        actionTheme->setObjectName(QStringLiteral("actionTheme"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/icon/theme.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTheme->setIcon(icon17);
        actionFont = new QAction(MainWindow);
        actionFont->setObjectName(QStringLiteral("actionFont"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/icon/font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont->setIcon(icon18);
        actionBackground = new QAction(MainWindow);
        actionBackground->setObjectName(QStringLiteral("actionBackground"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/icon/background.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackground->setIcon(icon19);
        actionHighlight = new QAction(MainWindow);
        actionHighlight->setObjectName(QStringLiteral("actionHighlight"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/icon/highlight.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHighlight->setIcon(icon20);
        actionInstruction = new QAction(MainWindow);
        actionInstruction->setObjectName(QStringLiteral("actionInstruction"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/icon/instruction.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInstruction->setIcon(icon21);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/icon/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon22);
        actionAboutQt = new QAction(MainWindow);
        actionAboutQt->setObjectName(QStringLiteral("actionAboutQt"));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/icon/Qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutQt->setIcon(icon23);
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QStringLiteral("actionNext"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/icon/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNext->setIcon(icon24);
        actionPrevious = new QAction(MainWindow);
        actionPrevious->setObjectName(QStringLiteral("actionPrevious"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/icon/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrevious->setIcon(icon25);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 572, 31));
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
        menu_2->addAction(actionFont);
        menu_2->addAction(actionBackground);
        menu_2->addSeparator();
        menu_2->addAction(actionHighlight);
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

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


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
        actionComment->setText(QApplication::translate("MainWindow", "\346\263\250\351\207\212/\345\217\226\346\266\210\346\263\250\351\207\212(&Z)...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionComment->setShortcut(QApplication::translate("MainWindow", "Ctrl+/", nullptr));
#endif // QT_NO_SHORTCUT
        actionSearch->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276(&F)...", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSearch->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_NO_SHORTCUT
        actionTheme->setText(QApplication::translate("MainWindow", "\344\270\273\351\242\230(&T)...", nullptr));
        actionFont->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223(&F)...", nullptr));
        actionBackground->setText(QApplication::translate("MainWindow", "\350\203\214\346\231\257\345\233\276\347\211\207(&B)", nullptr));
        actionHighlight->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240\351\253\230\344\272\256\350\257\215(&H)...", nullptr));
        actionInstruction->setText(QApplication::translate("MainWindow", "\350\257\264\346\230\216\344\271\246(&I)", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", nullptr));
        actionAboutQt->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Qt(&Q)", nullptr));
        actionNext->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252\346\226\207\346\241\243(&N)", nullptr));
        actionPrevious->setText(QApplication::translate("MainWindow", "\345\211\215\344\270\200\344\270\252\346\226\207\346\241\243(&P)", nullptr));
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
