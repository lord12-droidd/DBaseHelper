#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlTableModel>
#include "about.h"
#include "createcolumnform.h"
#include "createtablewindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, QSqlDatabase connectedDb = QSqlDatabase());
    ~MainWindow();


private slots:
    void on_actionAbout_triggered();

    void on_submitButton_clicked();

    void on_addRowButton_clicked();

    void on_deleteRowButton_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_executeQueryButton_clicked();

    void on_actionCleanInputField_triggered();

    void on_actionCleanWorkArea_triggered();

    void on_actionCleanOutput_triggered();

    void on_addColumnButton_clicked();

    void on_deleteColumnButton_clicked();

    void on_actionNew_table_triggered();

private:
    Ui::MainWindow *ui;
    about *aboutWindow;
    CreateTableWindow *createTableWindow;
    CreateColumnForm *createColumnWindow;
    QSqlDatabase db;
    QSqlTableModel* model;
};
#endif // MAINWINDOW_H
