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
        std::string str = "select * from \"" + model->tableName().toStdString() + "\"";
        if (!query.exec(QString::fromStdString(str))){
            qDebug() << query.lastError().databaseText();
            qDebug() << query.lastError().driverText();
        }
        while(query.next()){
            qDebug() << query.record();
        }
        model->submitAll();
        ui->progressBar->setValue(100);
        std::this_thread::sleep_for (std::chrono::milliseconds(100));
        ui->progressBar->setValue(0);
}


void MainWindow::on_addRowButton_clicked()
{
    if(model->columnCount() == 0){
        ErrorWindow* errWindow = new ErrorWindow(nullptr, "You should add column first");
        errWindow->setModal(true);
        errWindow->show();
        return;
    }
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


void MainWindow::on_executeQueryButton_clicked()
{
    QSqlQuery query = QSqlQuery(db);
    QString queryText(ui->queryArea->toPlainText());

    if (!query.exec(queryText)){
        ErrorWindow* errWindow = new ErrorWindow(nullptr, query.lastError().databaseText());
        errWindow->setModal(true);
        errWindow->show();
        return;
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
    createColumnWindow = new CreateColumnForm(this, this->db, model, ui->tableView);
    createColumnWindow->setModal(true);
    createColumnWindow->show();
    model->setTable(model->tableName());
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
    createTableWindow->setModal(true);
    createTableWindow->show();
}


void MainWindow::on_actionHelp_triggered()
{
    helpWindow = new HelpWindow(this);
    helpWindow->setModal(true);
    helpWindow->show();
}


void MainWindow::on_actionTable_triggered()
{
    tableWindow = new ChooseTableWindow(this, model, db, ui->tableView);
    tableWindow->setModal(true);
    tableWindow->show();
}

