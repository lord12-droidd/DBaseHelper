#ifndef CREATENEWDBWINDOW_H
#define CREATENEWDBWINDOW_H

#include <QDialog>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>

namespace Ui {
class CreateNewDbWindow;
}

class CreateNewDbWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CreateNewDbWindow(QWidget *parent = nullptr, QSqlDatabase connectedDb = QSqlDatabase());
    ~CreateNewDbWindow();

private slots:
    void on_createDbButton_clicked();

private:
    Ui::CreateNewDbWindow *ui;
    QSqlDatabase db;
};

#endif // CREATENEWDBWINDOW_H
