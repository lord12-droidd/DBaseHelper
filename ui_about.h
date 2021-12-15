/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *labelFullName;
    QLabel *labelPicture;
    QLabel *labelDescription;
    QPushButton *closeButton;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(507, 380);
        labelFullName = new QLabel(about);
        labelFullName->setObjectName(QString::fromUtf8("labelFullName"));
        labelFullName->setGeometry(QRect(130, 20, 241, 71));
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        labelFullName->setFont(font);
        labelFullName->setAlignment(Qt::AlignCenter);
        labelPicture = new QLabel(about);
        labelPicture->setObjectName(QString::fromUtf8("labelPicture"));
        labelPicture->setGeometry(QRect(20, 110, 211, 131));
        labelDescription = new QLabel(about);
        labelDescription->setObjectName(QString::fromUtf8("labelDescription"));
        labelDescription->setGeometry(QRect(310, 110, 191, 151));
        QFont font1;
        font1.setPointSize(10);
        labelDescription->setFont(font1);
        labelDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelDescription->setWordWrap(true);
        closeButton = new QPushButton(about);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(100, 300, 321, 51));

        retranslateUi(about);

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QCoreApplication::translate("about", "About", nullptr));
        labelFullName->setText(QCoreApplication::translate("about", "DBaseHelper", nullptr));
        labelPicture->setText(QString());
        labelDescription->setText(QCoreApplication::translate("about", "\320\232\320\243\320\240\320\241\320\220\320\247 \320\222 \320\231\320\236\320\221\320\220\320\235\320\230\320\231 \320\222\320\235\320\242\320\243 \320\221\320\233\320\257\320\242\320\254 \320\241\320\220\320\234\320\220 \320\237\320\206\320\227\320\224\320\220\320\242\320\220 \320\237\320\240\320\236\320\223\320\220, \320\257 \320\220\320\242\320\222\320\206\320\247\320\220\320\256, \320\237\320\236\320\241\320\242\320\220\320\222\320\242\320\225 5 \320\206\320\235\320\220\320\247\320\225 \320\232\320\243\320\233\320\225\320\221\320\257\320\232\320\220 \320\221\320\233\320\247\320\242\320\254", nullptr));
        closeButton->setText(QCoreApplication::translate("about", "\320\235\320\220\320\245\320\243\320\257 \320\242\320\243\320\242 \320\246\320\257 2 \320\232\320\235\320\236\320\237\320\232\320\220 \320\227\320\220\320\232\320\240\320\230\320\242\320\242\320\257 \320\235\320\236 \320\233\320\220\320\224\320\235\320\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
