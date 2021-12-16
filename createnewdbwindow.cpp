#include "createnewdbwindow.h"
#include "ui_createnewdbwindow.h"

CreateNewDbWindow::CreateNewDbWindow(QWidget *parent, QSqlDatabase connectedDb) :
    QDialog(parent),
    ui(new Ui::CreateNewDbWindow)
{
    db = connectedDb;
    ui->setupUi(this);
}

CreateNewDbWindow::~CreateNewDbWindow()
{
    delete ui;
}

void CreateNewDbWindow::on_createDbButton_clicked()
{
    QString dbName = ui->dbNameInput->text();
    QSqlQuery query = QSqlQuery(db);

    std::string str = "CREATE DATABASE \"" + dbName.toStdString() + "\"";
    query.exec(QString::fromStdString(str));
    qDebug() << QString::fromStdString(str);
    this->close();
}

