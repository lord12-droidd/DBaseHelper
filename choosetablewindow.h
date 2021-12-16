#ifndef CHOOSETABLEWINDOW_H
#define CHOOSETABLEWINDOW_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>
#include <QTableView>
#include <QLabel>

namespace Ui {
class ChooseTableWindow;
}

class ChooseTableWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseTableWindow(QWidget *parent = nullptr,
                               QSqlTableModel* model = nullptr,
                               QSqlDatabase connectedDb = QSqlDatabase(),
                               QTableView* tableView = nullptr,
                               QLabel* tableLable = nullptr);
    ~ChooseTableWindow();

private slots:

    void on_openTableButton_clicked();

private:
    Ui::ChooseTableWindow *ui;
    QSqlTableModel* model;
    QSqlDatabase db;
    QTableView* tableView;
    QLabel* mainTableLable;
};

#endif // CHOOSETABLEWINDOW_H
