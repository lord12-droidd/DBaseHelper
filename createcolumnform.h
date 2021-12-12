#ifndef CREATECOLUMNFORM_H
#define CREATECOLUMNFORM_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>
#include <QTableView>

namespace Ui {
class CreateColumnForm;
}

class CreateColumnForm : public QDialog
{
    Q_OBJECT

public:
    explicit CreateColumnForm(QWidget *parent = nullptr, QSqlDatabase connectedDb = QSqlDatabase(), QSqlTableModel *tableModel = nullptr, QTableView* view = nullptr);
    ~CreateColumnForm();

private slots:
    void on_createColumnButton_clicked();

    void on_isPrimaryButton_clicked();

    void on_isNullableButton_clicked();

private:
    Ui::CreateColumnForm *ui;
    CreateColumnForm *createColumnForm;
    QSqlDatabase db;
    QSqlTableModel *openedTable;
    QTableView* tableView;
};

#endif // CREATECOLUMNFORM_H
