#ifndef INPUTDBSETTINGSWINDOW_H
#define INPUTDBSETTINGSWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>
#include "mainwindow.h"

namespace Ui {
class InputDBSettingsWindow;
}

class InputDBSettingsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InputDBSettingsWindow(QWidget *parent = nullptr);
    ~InputDBSettingsWindow();

private slots:
    void on_submitConnectionSettingsBtn_clicked();

private:
    Ui::InputDBSettingsWindow *ui;
    QSqlDatabase db;
    MainWindow *mainWindow;
};

#endif // INPUTDBSETTINGSWINDOW_H
