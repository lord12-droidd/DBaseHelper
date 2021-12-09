#include "createtablewindow.h"
#include "ui_createtablewindow.h"

CreateTableWindow::CreateTableWindow(QWidget *parent, QSqlDatabase connectedDb) :
    QDialog(parent),
    ui(new Ui::CreateTableWindow)
{
    ui->setupUi(this);
}

CreateTableWindow::~CreateTableWindow()
{
    delete ui;
}

void CreateTableWindow::on_createTableButton_clicked()
{
    QString tableName = ui->tableNameInput->text();
    QSqlQuery query = QSqlQuery(db);

    std::string str = "CREATE TABLE \"" + tableName.toStdString() + "\"();";
    query.exec(QString::fromStdString(str));
    qDebug() << QString::fromStdString(str);
    this->close();
}

