/********************************************************************************
** Form generated from reading UI file 'createcolumnform.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECOLUMNFORM_H
#define UI_CREATECOLUMNFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_CreateColumnForm
{
public:
    QComboBox *dataTypesComboBox;
    QPushButton *createColumnButton;
    QLineEdit *columnName;
    QLabel *columnNameLabel;
    QRadioButton *isPrimaryButton;
    QRadioButton *isNullableButton;

    void setupUi(QDialog *CreateColumnForm)
    {
        if (CreateColumnForm->objectName().isEmpty())
            CreateColumnForm->setObjectName(QString::fromUtf8("CreateColumnForm"));
        CreateColumnForm->resize(400, 300);
        dataTypesComboBox = new QComboBox(CreateColumnForm);
        dataTypesComboBox->setObjectName(QString::fromUtf8("dataTypesComboBox"));
        dataTypesComboBox->setGeometry(QRect(280, 110, 101, 31));
        createColumnButton = new QPushButton(CreateColumnForm);
        createColumnButton->setObjectName(QString::fromUtf8("createColumnButton"));
        createColumnButton->setGeometry(QRect(150, 240, 93, 28));
        columnName = new QLineEdit(CreateColumnForm);
        columnName->setObjectName(QString::fromUtf8("columnName"));
        columnName->setGeometry(QRect(100, 60, 113, 22));
        columnNameLabel = new QLabel(CreateColumnForm);
        columnNameLabel->setObjectName(QString::fromUtf8("columnNameLabel"));
        columnNameLabel->setGeometry(QRect(10, 60, 81, 16));
        isPrimaryButton = new QRadioButton(CreateColumnForm);
        isPrimaryButton->setObjectName(QString::fromUtf8("isPrimaryButton"));
        isPrimaryButton->setGeometry(QRect(30, 110, 111, 21));
        isNullableButton = new QRadioButton(CreateColumnForm);
        isNullableButton->setObjectName(QString::fromUtf8("isNullableButton"));
        isNullableButton->setGeometry(QRect(30, 140, 95, 20));

        retranslateUi(CreateColumnForm);

        QMetaObject::connectSlotsByName(CreateColumnForm);
    } // setupUi

    void retranslateUi(QDialog *CreateColumnForm)
    {
        CreateColumnForm->setWindowTitle(QCoreApplication::translate("CreateColumnForm", "Dialog", nullptr));
        createColumnButton->setText(QCoreApplication::translate("CreateColumnForm", "Create", nullptr));
        columnNameLabel->setText(QCoreApplication::translate("CreateColumnForm", "Column Name", nullptr));
        isPrimaryButton->setText(QCoreApplication::translate("CreateColumnForm", "Primary Key", nullptr));
        isNullableButton->setText(QCoreApplication::translate("CreateColumnForm", "Nullable", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateColumnForm: public Ui_CreateColumnForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECOLUMNFORM_H
