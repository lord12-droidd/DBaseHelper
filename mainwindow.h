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
#include "helpwindow.h"
#include "choosetablewindow.h"
#include "errorwindow.h"

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

    void on_executeQueryButton_clicked();

    void on_actionCleanInputField_triggered();

    void on_actionCleanWorkArea_triggered();

    void on_actionCleanOutput_triggered();

    void on_addColumnButton_clicked();

    void on_deleteColumnButton_clicked();

    void on_actionNew_table_triggered();

    void on_actionHelp_triggered();

    void on_actionTable_triggered();

    void on_actionDatabase_triggered();

private:
    Ui::MainWindow *ui;
    about *aboutWindow;
    HelpWindow *helpWindow;
    CreateTableWindow *createTableWindow;
    CreateColumnForm *createColumnWindow;
    QSqlDatabase db;
    QSqlTableModel* model;
    ChooseTableWindow *tableWindow;
    ErrorWindow *errorWindow;
};
#endif // MAINWINDOW_H
