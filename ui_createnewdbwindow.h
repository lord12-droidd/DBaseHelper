/********************************************************************************
** Form generated from reading UI file 'createnewdbwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWDBWINDOW_H
#define UI_CREATENEWDBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateNewDbWindow
{
public:
    QLabel *tableNameLabel;
    QPushButton *createDbButton;
    QLineEdit *dbNameInput;

    void setupUi(QDialog *CreateNewDbWindow)
    {
        if (CreateNewDbWindow->objectName().isEmpty())
            CreateNewDbWindow->setObjectName(QString::fromUtf8("CreateNewDbWindow"));
        CreateNewDbWindow->resize(400, 300);
        tableNameLabel = new QLabel(CreateNewDbWindow);
        tableNameLabel->setObjectName(QString::fromUtf8("tableNameLabel"));
        tableNameLabel->setGeometry(QRect(100, 100, 91, 16));
        createDbButton = new QPushButton(CreateNewDbWindow);
        createDbButton->setObjectName(QString::fromUtf8("createDbButton"));
        createDbButton->setGeometry(QRect(160, 210, 93, 28));
        dbNameInput = new QLineEdit(CreateNewDbWindow);
        dbNameInput->setObjectName(QString::fromUtf8("dbNameInput"));
        dbNameInput->setGeometry(QRect(200, 100, 113, 22));

        retranslateUi(CreateNewDbWindow);

        QMetaObject::connectSlotsByName(CreateNewDbWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateNewDbWindow)
    {
        CreateNewDbWindow->setWindowTitle(QCoreApplication::translate("CreateNewDbWindow", "Dialog", nullptr));
        tableNameLabel->setText(QCoreApplication::translate("CreateNewDbWindow", "Database Name", nullptr));
        createDbButton->setText(QCoreApplication::translate("CreateNewDbWindow", "Create", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateNewDbWindow: public Ui_CreateNewDbWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWDBWINDOW_H
