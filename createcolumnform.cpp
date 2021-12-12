#include "createcolumnform.h"
#include "ui_createcolumnform.h"

CreateColumnForm::CreateColumnForm(QWidget *parent, QSqlDatabase connectedDb, QSqlTableModel *openedTable, QTableView* tableView) :
    QDialog(parent),
    ui(new Ui::CreateColumnForm)
{
    db = connectedDb;
    ui->setupUi(this);
    this->tableView = tableView;
    QStringList columnTypes =
    {
        "Integer",
        "VARCHAR",
        "SERIAL"
    };
    this->openedTable = openedTable;
    ui->dataTypesComboBox->addItems(columnTypes);
    ui->dataTypesComboBox->setCurrentText(columnTypes[0]);
}

CreateColumnForm::~CreateColumnForm()
{
    delete ui;
}

void CreateColumnForm::on_createColumnButton_clicked()
{
    QString columnType = ui->dataTypesComboBox->currentText();
    QString columnName = ui->columnName->text();
    QSqlQuery query = QSqlQuery(db);
    if (ui->isPrimaryButton->isChecked()){
        std::string str = "ALTER TABLE \"" + openedTable->tableName().toStdString() + "\"" + " ADD COLUMN" + " \"" + columnName.toStdString() + "\"" + columnType.toStdString() + " PRIMARY KEY";
        query.exec(QString::fromStdString(str));
        qDebug() << QString::fromStdString(str);
        tableView->setModel(openedTable);
        this->close();
        return;
    }
    if (ui->isNullableButton->isChecked()){
        std::string str = "ALTER TABLE \"" + openedTable->tableName().toStdString() + "\"" + " ADD COLUMN" + " \"" + columnName.toStdString() + "\"" + columnType.toStdString();
        query.exec(QString::fromStdString(str));
        qDebug() << QString::fromStdString(str);
        tableView->setModel(openedTable);
        this->close();
        return;
    }
    std::string str = "ALTER TABLE \"" + openedTable->tableName().toStdString() + "\"" + " ADD COLUMN" + " \"" + columnName.toStdString() + "\"" + columnType.toStdString() + " NOT NULL DEFAULT '1'";
    query.exec(QString::fromStdString(str));
    qDebug() << QString::fromStdString(str);
    tableView->setModel(openedTable);
    this->close();
}


void CreateColumnForm::on_isPrimaryButton_clicked()
{
    if(ui->isPrimaryButton-> isChecked()){
        ui->isPrimaryButton->setAutoExclusive(false);
        ui->isNullableButton->setChecked(false);
        ui->isPrimaryButton->setChecked(true);
        ui->dataTypesComboBox->setCurrentText("SERIAL");
        ui->dataTypesComboBox->setDisabled(true);
        return;
    }
    ui->isPrimaryButton->setAutoExclusive(true);
    ui->isPrimaryButton->setChecked(false);
    ui->dataTypesComboBox->setDisabled(false);
}


void CreateColumnForm::on_isNullableButton_clicked()
{
    if(ui->isNullableButton-> isChecked()){
        ui->isNullableButton->setAutoExclusive(false);
        ui->isPrimaryButton->setChecked(false);
        ui->isNullableButton->setChecked(true);
        ui->dataTypesComboBox->setDisabled(false);
        return;
    }
    ui->isNullableButton->setAutoExclusive(true);
    ui->isNullableButton->setChecked(false);
}

