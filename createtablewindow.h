#ifndef CREATETABLEWINDOW_H
#define CREATETABLEWINDOW_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>

namespace Ui {
class CreateTableWindow;
}

class CreateTableWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CreateTableWindow(QWidget *parent = nullptr, QSqlDatabase connectedDb = QSqlDatabase());
    ~CreateTableWindow();

private slots:
    void on_createTableButton_clicked();

private:
    Ui::CreateTableWindow *ui;
    QSqlDatabase db;
};

#endif // CREATETABLEWINDOW_H
