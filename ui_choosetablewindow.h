/********************************************************************************
** Form generated from reading UI file 'choosetablewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSETABLEWINDOW_H
#define UI_CHOOSETABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChooseTableWindow
{
public:
    QComboBox *comboBox;
    QPushButton *openTableButton;
    QLabel *tableLabel;

    void setupUi(QDialog *ChooseTableWindow)
    {
        if (ChooseTableWindow->objectName().isEmpty())
            ChooseTableWindow->setObjectName(QString::fromUtf8("ChooseTableWindow"));
        ChooseTableWindow->resize(400, 300);
        comboBox = new QComboBox(ChooseTableWindow);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(120, 140, 151, 41));
        openTableButton = new QPushButton(ChooseTableWindow);
        openTableButton->setObjectName(QString::fromUtf8("openTableButton"));
        openTableButton->setGeometry(QRect(150, 220, 93, 28));
        tableLabel = new QLabel(ChooseTableWindow);
        tableLabel->setObjectName(QString::fromUtf8("tableLabel"));
        tableLabel->setGeometry(QRect(160, 90, 81, 16));

        retranslateUi(ChooseTableWindow);

        QMetaObject::connectSlotsByName(ChooseTableWindow);
    } // setupUi

    void retranslateUi(QDialog *ChooseTableWindow)
    {
        ChooseTableWindow->setWindowTitle(QCoreApplication::translate("ChooseTableWindow", "Choose Table", nullptr));
        openTableButton->setText(QCoreApplication::translate("ChooseTableWindow", "Open", nullptr));
        tableLabel->setText(QCoreApplication::translate("ChooseTableWindow", "Choose Table", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseTableWindow: public Ui_ChooseTableWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSETABLEWINDOW_H
