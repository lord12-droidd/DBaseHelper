#include "choosetablewindow.h"
#include "ui_choosetablewindow.h"

ChooseTableWindow::ChooseTableWindow(QWidget *parent, QSqlTableModel* model, QSqlDatabase connectedDb, QTableView* view) :
    QDialog(parent),
    ui(new Ui::ChooseTableWindow)
{
    db = connectedDb;
    ui->setupUi(this);
    this->model = model;
    ui->comboBox->addItems(connectedDb.tables());
    this->tableView = view;
}

ChooseTableWindow::~ChooseTableWindow()
{
    delete ui;
}




void ChooseTableWindow::on_openTableButton_clicked()
{
    QString tableName = ui->comboBox->currentText();
    model->setTable(tableName);
    model->select();
    this->tableView->setModel(model);
    this->close();
}

