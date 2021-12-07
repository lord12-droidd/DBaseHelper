#include "inputdbsettingswindow.h"
#include "ui_inputdbsettingswindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QtSql/QSqlError>
#include <QtSql/QSqlRecord>

InputDBSettingsWindow::InputDBSettingsWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InputDBSettingsWindow)
{
    ui->setupUi(this);
}

InputDBSettingsWindow::~InputDBSettingsWindow()
{
    delete ui;
}
void InputDBSettingsWindow::on_submitConnectionSettingsBtn_clicked()
{
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName(ui->hostNameLine->text());
    db.setDatabaseName(ui->dbLine->text());
    db.setUserName(ui->userNameLine->text());
    db.setPassword(ui->passwordLine->text());
    if (!db.open()){
        qDebug() << db.lastError().text();
    }
    else {
        qDebug() << "Success";
        mainWindow = new MainWindow(nullptr, db);
        mainWindow->show();
        this->close();
    }
}

