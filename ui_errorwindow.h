/********************************************************************************
** Form generated from reading UI file 'errorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERRORWINDOW_H
#define UI_ERRORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ErrorWindow
{
public:
    QLabel *errorDescription;

    void setupUi(QDialog *ErrorWindow)
    {
        if (ErrorWindow->objectName().isEmpty())
            ErrorWindow->setObjectName(QString::fromUtf8("ErrorWindow"));
        ErrorWindow->resize(400, 300);
        errorDescription = new QLabel(ErrorWindow);
        errorDescription->setObjectName(QString::fromUtf8("errorDescription"));
        errorDescription->setGeometry(QRect(40, 50, 331, 221));
        QFont font;
        font.setPointSize(10);
        errorDescription->setFont(font);
        errorDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        errorDescription->setWordWrap(true);

        retranslateUi(ErrorWindow);

        QMetaObject::connectSlotsByName(ErrorWindow);
    } // setupUi

    void retranslateUi(QDialog *ErrorWindow)
    {
        ErrorWindow->setWindowTitle(QCoreApplication::translate("ErrorWindow", "Dialog", nullptr));
        errorDescription->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ErrorWindow: public Ui_ErrorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERRORWINDOW_H
