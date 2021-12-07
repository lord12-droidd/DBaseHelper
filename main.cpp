#include "mainwindow.h"
#include "inputdbsettingswindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InputDBSettingsWindow w;
    w.show();
    return a.exec();
}
