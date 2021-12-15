/********************************************************************************
** Form generated from reading UI file 'createtablewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATETABLEWINDOW_H
#define UI_CREATETABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateTableWindow
{
public:
    QPushButton *createTableButton;
    QLabel *tableNameLabel;
    QLineEdit *tableNameInput;

    void setupUi(QDialog *CreateTableWindow)
    {
        if (CreateTableWindow->objectName().isEmpty())
            CreateTableWindow->setObjectName(QString::fromUtf8("CreateTableWindow"));
        CreateTableWindow->resize(400, 300);
        createTableButton = new QPushButton(CreateTableWindow);
        createTableButton->setObjectName(QString::fromUtf8("createTableButton"));
        createTableButton->setGeometry(QRect(150, 210, 93, 28));
        tableNameLabel = new QLabel(CreateTableWindow);
        tableNameLabel->setObjectName(QString::fromUtf8("tableNameLabel"));
        tableNameLabel->setGeometry(QRect(80, 80, 71, 16));
        tableNameInput = new QLineEdit(CreateTableWindow);
        tableNameInput->setObjectName(QString::fromUtf8("tableNameInput"));
        tableNameInput->setGeometry(QRect(160, 80, 113, 22));

        retranslateUi(CreateTableWindow);

        QMetaObject::connectSlotsByName(CreateTableWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateTableWindow)
    {
        CreateTableWindow->setWindowTitle(QCoreApplication::translate("CreateTableWindow", "Create Table ", nullptr));
        createTableButton->setText(QCoreApplication::translate("CreateTableWindow", "Create", nullptr));
        tableNameLabel->setText(QCoreApplication::translate("CreateTableWindow", "Table Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateTableWindow: public Ui_CreateTableWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATETABLEWINDOW_H
