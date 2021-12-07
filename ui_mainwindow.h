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
#include <QtWidgets/QComboBox>
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
    QAction *actionOpen;
    QAction *actionCreate;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionCleanWorkArea;
    QAction *actionCleanInputField;
    QAction *actionCleanOutput;
    QWidget *centralwidget;
    QTableView *tableView;
    QProgressBar *progressBar;
    QPushButton *addRowButton;
    QPushButton *deleteRowButton;
    QPushButton *submitButton;
    QComboBox *comboBox;
    QPushButton *executeQueryButton;
    QTextEdit *queryArea;
    QPushButton *addColumnButton;
    QPushButton *deleteColumnButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuProcess;
    QMenu *menuInfo;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionCreate = new QAction(MainWindow);
        actionCreate->setObjectName(QString::fromUtf8("actionCreate"));
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionCleanWorkArea = new QAction(MainWindow);
        actionCleanWorkArea->setObjectName(QString::fromUtf8("actionCleanWorkArea"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Downloads/application_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCleanWorkArea->setIcon(icon);
        actionCleanInputField = new QAction(MainWindow);
        actionCleanInputField->setObjectName(QString::fromUtf8("actionCleanInputField"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../Downloads/textfield_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCleanInputField->setIcon(icon1);
        actionCleanOutput = new QAction(MainWindow);
        actionCleanOutput->setObjectName(QString::fromUtf8("actionCleanOutput"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../Downloads/table_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCleanOutput->setIcon(icon2);
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
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(560, 280, 151, 41));
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
        menuProcess = new QMenu(menubar);
        menuProcess->setObjectName(QString::fromUtf8("menuProcess"));
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
        menuFile->addAction(actionOpen);
        menuProcess->addAction(actionCreate);
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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionCreate->setText(QCoreApplication::translate("MainWindow", "Create", nullptr));
        actionHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionCleanWorkArea->setText(QCoreApplication::translate("MainWindow", "CleanWorkArea", nullptr));
#if QT_CONFIG(shortcut)
        actionCleanWorkArea->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCleanInputField->setText(QCoreApplication::translate("MainWindow", "CleanInputField", nullptr));
#if QT_CONFIG(shortcut)
        actionCleanInputField->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCleanOutput->setText(QCoreApplication::translate("MainWindow", "CleanOutput", nullptr));
#if QT_CONFIG(shortcut)
        actionCleanOutput->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        addRowButton->setText(QCoreApplication::translate("MainWindow", "Add Row", nullptr));
        deleteRowButton->setText(QCoreApplication::translate("MainWindow", "Delete Row", nullptr));
        submitButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        executeQueryButton->setText(QCoreApplication::translate("MainWindow", "Execute", nullptr));
        addColumnButton->setText(QCoreApplication::translate("MainWindow", "Add Column", nullptr));
        deleteColumnButton->setText(QCoreApplication::translate("MainWindow", "Delete Column", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuProcess->setTitle(QCoreApplication::translate("MainWindow", "Process", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("MainWindow", "Info", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
