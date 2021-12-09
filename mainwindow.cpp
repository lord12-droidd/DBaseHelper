#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QtCore>
#include <QtGui>
#include <QtSql/QSqlError>
#include <QtSql/QSqlRecord>

MainWindow::MainWindow(QWidget *parent, QSqlDatabase connectedDb)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db = connectedDb;
    model = new QSqlTableModel(this);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    if (connectedDb.tables().count() > 0){
            model->setTable(connectedDb.tables()[0]);
    }
    model->select();
    ui->tableView->setModel(model);
    ui->comboBox->addItems(connectedDb.tables());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAbout_triggered()
{
    aboutWindow = new about(this);
    aboutWindow->show();
}


void MainWindow::on_submitButton_clicked()
{
    QSqlQuery query = QSqlQuery(db);
    if (!query.exec("select * from testtable")){
        qDebug() << query.lastError().databaseText();
        qDebug() << query.lastError().driverText();
    }
    while(query.next()){
        qDebug() << query.record();
    }
    model->submitAll();
}


void MainWindow::on_addRowButton_clicked()
{
    qDebug() << "inserting row" << model->insertRow(model->rowCount());
}


void MainWindow::on_deleteRowButton_clicked()
{
    int selectedRow = ui->tableView->currentIndex().row();
    if (selectedRow >= 0){
        qDebug() << "Deleting row:" << model->removeRow(selectedRow);
    }
    else{
        qDebug() << "No row select";
    }
}



void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    model->setTable(arg1);
    model->select();
    ui->tableView->setModel(model);
}


void MainWindow::on_executeQueryButton_clicked()
{
    QSqlQuery query = QSqlQuery(db);
    QString queryText(ui->queryArea->toPlainText());

    if (!query.exec(queryText)){
        qDebug() << query.lastError().databaseText();
        qDebug() << query.lastError().driverText();
    }
    QSqlQueryModel *setquery1 = new QSqlQueryModel;
    setquery1->setQuery(queryText);
    QTableView *tv = new QTableView(this);
    tv->setModel(setquery1);
    ui->tableView->setModel(setquery1);
}


void MainWindow::on_actionCleanInputField_triggered()
{
    ui->queryArea->clear();
}


void MainWindow::on_actionCleanWorkArea_triggered()
{
    ui->queryArea->clear();
    model->clear();
}


void MainWindow::on_actionCleanOutput_triggered()
{
    model->clear();
}


void MainWindow::on_addColumnButton_clicked()
{
    createColumnWindow = new CreateColumnForm(this, this->db, ui->comboBox->currentText(), model);
    createColumnWindow->show();
    model->setTable(ui->comboBox->currentText());
    model->select();
    ui->tableView->setModel(model);
}


void MainWindow::on_deleteColumnButton_clicked()
{
    int selectedColumn = ui->tableView->currentIndex().column();
    QString columnName = model->record().fieldName(selectedColumn);
    QSqlQuery query = QSqlQuery(db);
    std::string str = "ALTER TABLE " + model->tableName().toStdString() + " DROP COLUMN" + " \"" + columnName.toStdString() + "\"" +"CASCADE";
    if (selectedColumn >= 0){
        qDebug() << "Deleting column:" << model->removeColumn(selectedColumn);
        qDebug() << QString::fromStdString(str);
        query.exec(QString::fromStdString(str));
    }
    else{
        qDebug() << "No column select";
    }
}


void MainWindow::on_actionNew_table_triggered()
{
    createTableWindow = new CreateTableWindow(this, this->db);
    createTableWindow->show();
    ui->comboBox->clear();
    ui->comboBox->addItems(db.tables());
}

