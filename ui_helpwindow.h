/********************************************************************************
** Form generated from reading UI file 'helpwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPWINDOW_H
#define UI_HELPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_HelpWindow
{
public:
    QLabel *labelDescription;

    void setupUi(QDialog *HelpWindow)
    {
        if (HelpWindow->objectName().isEmpty())
            HelpWindow->setObjectName(QString::fromUtf8("HelpWindow"));
        HelpWindow->resize(632, 460);
        labelDescription = new QLabel(HelpWindow);
        labelDescription->setObjectName(QString::fromUtf8("labelDescription"));
        labelDescription->setGeometry(QRect(80, 120, 481, 231));
        QFont font;
        font.setPointSize(10);
        labelDescription->setFont(font);
        labelDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelDescription->setWordWrap(true);

        retranslateUi(HelpWindow);

        QMetaObject::connectSlotsByName(HelpWindow);
    } // setupUi

    void retranslateUi(QDialog *HelpWindow)
    {
        HelpWindow->setWindowTitle(QCoreApplication::translate("HelpWindow", "Dialog", nullptr));
        labelDescription->setText(QCoreApplication::translate("HelpWindow", "<html><head/><body><p>1) \320\236\320\261\320\273\320\260\321\202\321\214 \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\217 \320\277\321\200\320\260\321\206\321\216\321\224 \320\267\320\260 \321\201\320\270\320\275\321\202\320\260\320\272\321\201\320\270\321\201\320\276\320\274 postgreSQL<br/>2) \320\237\320\260\320\275\320\265\320\273\321\214 \321\203\320\277\321\200\320\260\320\262\320\273\321\226\320\275\320\275\321\217 \320\274\320\276\320\266\320\275\320\260 \320\272\320\260\321\201\321\202\320\276\320\274\321\226\320\267\321\203\320\262\320\260\321\202\320\270 \320\267\320\260 \320\277\320\276\320\273\320\276\320\266\320\265\320\275\320\275\321\217\320\274 \320\277\320\276 \320\277\320\273\320\276\321\211\321\226 \320\262\321\226\320\272\320\275\320\260<br/>3) \320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270 \320\276\320\261\320\273\320\260\321\201\321\202\321\214 \320\262\320\262\320\265\320\264\320\265\320\275\320\275\321\217 (Ctrl + Shift+ T)</p><p>4) \320\236\321\207\320"
                        "\270\321\201\321\202\320\270\321\202\320\270 \320\276\320\261\320\273\320\260\321\201\321\202\321\214 \320\262\320\270\320\262\320\265\320\264\320\265\320\275\320\275\321\217 (Ctrl + Shift + V)</p><p>5) \320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270 \321\200\320\276\320\261\320\276\321\207\321\203 \320\276\320\261\320\273\320\260\321\201\321\202\321\214 (Ctrl + Shift + W)</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpWindow: public Ui_HelpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPWINDOW_H
