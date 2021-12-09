#ifndef CREATECOLUMNFORM_H
#define CREATECOLUMNFORM_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>

namespace Ui {
class CreateColumnForm;
}

class CreateColumnForm : public QDialog
{
    Q_OBJECT

public:
    explicit CreateColumnForm(QWidget *parent = nullptr, QSqlDatabase connectedDb = QSqlDatabase(), QString openedTableName = nullptr, QSqlTableModel *tableModel = nullptr);
    ~CreateColumnForm();

private slots:
    void on_createColumnButton_clicked();

    void on_isPrimaryButton_clicked();

    void on_isNullableButton_clicked();

private:
    Ui::CreateColumnForm *ui;
    CreateColumnForm *createColumnForm;
    QSqlDatabase db;
    QString openedTableName;
};

#endif // CREATECOLUMNFORM_H
