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
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CreateColumnForm
{
public:

    void setupUi(QDialog *CreateColumnForm)
    {
        if (CreateColumnForm->objectName().isEmpty())
            CreateColumnForm->setObjectName(QString::fromUtf8("CreateColumnForm"));
        CreateColumnForm->resize(400, 300);

        retranslateUi(CreateColumnForm);

        QMetaObject::connectSlotsByName(CreateColumnForm);
    } // setupUi

    void retranslateUi(QDialog *CreateColumnForm)
    {
        CreateColumnForm->setWindowTitle(QCoreApplication::translate("CreateColumnForm", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateColumnForm: public Ui_CreateColumnForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECOLUMNFORM_H
