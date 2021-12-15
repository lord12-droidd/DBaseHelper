#include "errorwindow.h"
#include "ui_errorwindow.h"

ErrorWindow::ErrorWindow(QWidget *parent, QString errorMessage) :
    QDialog(parent),
    ui(new Ui::ErrorWindow)
{
    ui->setupUi(this);
    ui->errorDescription->setText(errorMessage);
}

ErrorWindow::~ErrorWindow()
{
    delete ui;
}

void ErrorWindow::on_closeButton_clicked()
{
    this->close();
}

