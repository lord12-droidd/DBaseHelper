/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionCleanWorkArea;
    QAction *actionCleanInputField;
    QAction *actionCleanOutput;
    QAction *actionNew_table;
    QAction *actionTable;
    QAction *actionDatabase;
    QWidget *centralwidget;
    QTableView *tableView;
    QProgressBar *progressBar;
    QPushButton *addRowButton;
    QPushButton *deleteRowButton;
    QPushButton *submitButton;
    QPushButton *executeQueryButton;
    QTextEdit *queryArea;
    QPushButton *addColumnButton;
    QPushButton *deleteColumnButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOpen;
    QMenu *menuProcess;
    QMenu *menuCreate;
    QMenu *menuInfo;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionCleanWorkArea = new QAction(MainWindow);
        actionCleanWorkArea->setObjectName(QString::fromUtf8("actionCleanWorkArea"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("application_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCleanWorkArea->setIcon(icon);
        actionCleanInputField = new QAction(MainWindow);
        actionCleanInputField->setObjectName(QString::fromUtf8("actionCleanInputField"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("textfield_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCleanInputField->setIcon(icon1);
        actionCleanOutput = new QAction(MainWindow);
        actionCleanOutput->setObjectName(QString::fromUtf8("actionCleanOutput"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("table_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCleanOutput->setIcon(icon2);
        actionNew_table = new QAction(MainWindow);
        actionNew_table->setObjectName(QString::fromUtf8("actionNew_table"));
        actionTable = new QAction(MainWindow);
        actionTable->setObjectName(QString::fromUtf8("actionTable"));
        actionDatabase = new QAction(MainWindow);
        actionDatabase->setObjectName(QString::fromUtf8("actionDatabase"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 20, 461, 461));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(280, 500, 201, 23));
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);
        addRowButton = new QPushButton(centralwidget);
        addRowButton->setObjectName(QString::fromUtf8("addRowButton"));
        addRowButton->setGeometry(QRect(490, 20, 151, 51));
        deleteRowButton = new QPushButton(centralwidget);
        deleteRowButton->setObjectName(QString::fromUtf8("deleteRowButton"));
        deleteRowButton->setGeometry(QRect(490, 80, 151, 51));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(560, 160, 151, 51));
        executeQueryButton = new QPushButton(centralwidget);
        executeQueryButton->setObjectName(QString::fromUtf8("executeQueryButton"));
        executeQueryButton->setGeometry(QRect(590, 480, 121, 41));
        queryArea = new QTextEdit(centralwidget);
        queryArea->setObjectName(QString::fromUtf8("queryArea"));
        queryArea->setGeometry(QRect(520, 360, 251, 101));
        addColumnButton = new QPushButton(centralwidget);
        addColumnButton->setObjectName(QString::fromUtf8("addColumnButton"));
        addColumnButton->setGeometry(QRect(640, 20, 151, 51));
        deleteColumnButton = new QPushButton(centralwidget);
        deleteColumnButton->setObjectName(QString::fromUtf8("deleteColumnButton"));
        deleteColumnButton->setGeometry(QRect(640, 80, 151, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOpen = new QMenu(menuFile);
        menuOpen->setObjectName(QString::fromUtf8("menuOpen"));
        menuProcess = new QMenu(menubar);
        menuProcess->setObjectName(QString::fromUtf8("menuProcess"));
        menuCreate = new QMenu(menuProcess);
        menuCreate->setObjectName(QString::fromUtf8("menuCreate"));
        menuInfo = new QMenu(menubar);
        menuInfo->setObjectName(QString::fromUtf8("menuInfo"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuProcess->menuAction());
        menubar->addAction(menuInfo->menuAction());
        menuFile->addAction(menuOpen->menuAction());
        menuOpen->addAction(actionTable);
        menuOpen->addAction(actionDatabase);
        menuProcess->addAction(menuCreate->menuAction());
        menuCreate->addAction(actionNew_table);
        menuInfo->addAction(actionHelp);
        menuInfo->addAction(actionAbout);
        toolBar->addAction(actionCleanWorkArea);
        toolBar->addAction(actionCleanInputField);
        toolBar->addAction(actionCleanOutput);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DBaseHelper", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionCleanWorkArea->setText(QCoreApplication::translate("MainWindow", "CleanWorkArea", nullptr));
#if QT_CONFIG(tooltip)
        actionCleanWorkArea->setToolTip(QCoreApplication::translate("MainWindow", "Clean Work Area (Ctrl+Shift+W)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCleanWorkArea->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCleanInputField->setText(QCoreApplication::translate("MainWindow", "CleanInputField", nullptr));
#if QT_CONFIG(tooltip)
        actionCleanInputField->setToolTip(QCoreApplication::translate("MainWindow", "Clean Input Field (Ctrl+Shift+T)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCleanInputField->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCleanOutput->setText(QCoreApplication::translate("MainWindow", "CleanOutput", nullptr));
#if QT_CONFIG(tooltip)
        actionCleanOutput->setToolTip(QCoreApplication::translate("MainWindow", "Clean Output (Ctrl+Shift+V)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCleanOutput->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_table->setText(QCoreApplication::translate("MainWindow", "New table", nullptr));
        actionTable->setText(QCoreApplication::translate("MainWindow", "Table", nullptr));
        actionDatabase->setText(QCoreApplication::translate("MainWindow", "Database", nullptr));
        addRowButton->setText(QCoreApplication::translate("MainWindow", "Add Row", nullptr));
        deleteRowButton->setText(QCoreApplication::translate("MainWindow", "Delete Row", nullptr));
        submitButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        executeQueryButton->setText(QCoreApplication::translate("MainWindow", "Execute", nullptr));
        addColumnButton->setText(QCoreApplication::translate("MainWindow", "Add Column", nullptr));
        deleteColumnButton->setText(QCoreApplication::translate("MainWindow", "Delete Column", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuOpen->setTitle(QCoreApplication::translate("MainWindow", "Open", nullptr));
        menuProcess->setTitle(QCoreApplication::translate("MainWindow", "Process", nullptr));
        menuCreate->setTitle(QCoreApplication::translate("MainWindow", "Create", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("MainWindow", "Info", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
