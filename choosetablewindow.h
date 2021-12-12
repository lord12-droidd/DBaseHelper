#ifndef CHOOSETABLEWINDOW_H
#define CHOOSETABLEWINDOW_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>
#include <QTableView>

namespace Ui {
class ChooseTableWindow;
}

class ChooseTableWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseTableWindow(QWidget *parent = nullptr, QSqlTableModel* model = nullptr, QSqlDatabase connectedDb = QSqlDatabase(), QTableView* tableView = nullptr);
    ~ChooseTableWindow();

private slots:

    void on_openTableButton_clicked();

private:
    Ui::ChooseTableWindow *ui;
    QSqlTableModel* model;
    QSqlDatabase db;
    QTableView* tableView;
};

#endif // CHOOSETABLEWINDOW_H
