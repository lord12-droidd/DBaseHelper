#include "createcolumnform.h"
#include "ui_createcolumnform.h"

CreateColumnForm::CreateColumnForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateColumnForm)
{
    ui->setupUi(this);
}

CreateColumnForm::~CreateColumnForm()
{
    delete ui;
}
