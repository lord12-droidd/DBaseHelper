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
    db.setConnectOptions("connect_timeout=5");
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName(ui->hostNameLine->text());
    db.setDatabaseName(ui->dbLine->text());
    db.setUserName(ui->userNameLine->text());
    db.setPassword(ui->passwordLine->text());

    if (!db.open()){
        QString message = db.lastError().text();
        ErrorWindow* errWindow = new ErrorWindow(nullptr, message);
        errWindow->setModal(true);
        errWindow->show();
        qDebug() << db.lastError().text();
    }
    else if (ui->dbLine->text() == ""){
        ErrorWindow* errWindow = new ErrorWindow(nullptr, "Please input database name");
        errWindow->setModal(true);
        errWindow->show();
    }
    else {
        qDebug() << "Success";
        mainWindow = new MainWindow(nullptr, db);
        mainWindow->show();
        this->close();
    }
}

