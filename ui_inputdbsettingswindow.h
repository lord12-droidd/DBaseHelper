/********************************************************************************
** Form generated from reading UI file 'inputdbsettingswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDBSETTINGSWINDOW_H
#define UI_INPUTDBSETTINGSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputDBSettingsWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *hostNameLine;
    QLineEdit *dbLine;
    QLineEdit *userNameLine;
    QLineEdit *passwordLine;
    QLabel *welcomeLabel;
    QLabel *hostNamelabel;
    QLabel *dbNameLabel;
    QLabel *userNameLabel;
    QLabel *passwordLabel;
    QPushButton *submitConnectionSettingsBtn;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *InputDBSettingsWindow)
    {
        if (InputDBSettingsWindow->objectName().isEmpty())
            InputDBSettingsWindow->setObjectName(QString::fromUtf8("InputDBSettingsWindow"));
        InputDBSettingsWindow->resize(800, 600);
        centralwidget = new QWidget(InputDBSettingsWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        hostNameLine = new QLineEdit(centralwidget);
        hostNameLine->setObjectName(QString::fromUtf8("hostNameLine"));
        hostNameLine->setGeometry(QRect(300, 200, 171, 31));
        dbLine = new QLineEdit(centralwidget);
        dbLine->setObjectName(QString::fromUtf8("dbLine"));
        dbLine->setGeometry(QRect(300, 260, 171, 31));
        userNameLine = new QLineEdit(centralwidget);
        userNameLine->setObjectName(QString::fromUtf8("userNameLine"));
        userNameLine->setGeometry(QRect(300, 320, 171, 31));
        passwordLine = new QLineEdit(centralwidget);
        passwordLine->setObjectName(QString::fromUtf8("passwordLine"));
        passwordLine->setGeometry(QRect(300, 380, 171, 31));
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(200, 60, 371, 51));
        QFont font;
        font.setPointSize(28);
        welcomeLabel->setFont(font);
        welcomeLabel->setAlignment(Qt::AlignCenter);
        hostNamelabel = new QLabel(centralwidget);
        hostNamelabel->setObjectName(QString::fromUtf8("hostNamelabel"));
        hostNamelabel->setGeometry(QRect(360, 170, 55, 16));
        hostNamelabel->setAlignment(Qt::AlignCenter);
        dbNameLabel = new QLabel(centralwidget);
        dbNameLabel->setObjectName(QString::fromUtf8("dbNameLabel"));
        dbNameLabel->setGeometry(QRect(340, 240, 101, 16));
        dbNameLabel->setAlignment(Qt::AlignCenter);
        userNameLabel = new QLabel(centralwidget);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        userNameLabel->setGeometry(QRect(350, 300, 71, 16));
        userNameLabel->setAlignment(Qt::AlignCenter);
        passwordLabel = new QLabel(centralwidget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(360, 360, 55, 16));
        passwordLabel->setAlignment(Qt::AlignCenter);
        submitConnectionSettingsBtn = new QPushButton(centralwidget);
        submitConnectionSettingsBtn->setObjectName(QString::fromUtf8("submitConnectionSettingsBtn"));
        submitConnectionSettingsBtn->setGeometry(QRect(330, 440, 121, 41));
        InputDBSettingsWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(InputDBSettingsWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InputDBSettingsWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(InputDBSettingsWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        InputDBSettingsWindow->setMenuBar(menubar);

        retranslateUi(InputDBSettingsWindow);

        QMetaObject::connectSlotsByName(InputDBSettingsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InputDBSettingsWindow)
    {
        InputDBSettingsWindow->setWindowTitle(QCoreApplication::translate("InputDBSettingsWindow", "MainWindow", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("InputDBSettingsWindow", "DBaseHelper", nullptr));
        hostNamelabel->setText(QCoreApplication::translate("InputDBSettingsWindow", "Host", nullptr));
        dbNameLabel->setText(QCoreApplication::translate("InputDBSettingsWindow", "Database Name", nullptr));
        userNameLabel->setText(QCoreApplication::translate("InputDBSettingsWindow", "Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("InputDBSettingsWindow", "Password", nullptr));
        submitConnectionSettingsBtn->setText(QCoreApplication::translate("InputDBSettingsWindow", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputDBSettingsWindow: public Ui_InputDBSettingsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDBSETTINGSWINDOW_H
