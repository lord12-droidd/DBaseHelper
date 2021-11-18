#include "about.h"
#include "ui_about.h"
#include <QPixmap>

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/USER/Downloads/photo5395825396479538552.jpg");
    ui->labelPicture->setPixmap(pix.scaled(200, 200, Qt::KeepAspectRatio));
}

about::~about()
{
    delete ui;
}

void about::on_closeButton_clicked()
{
    this->close();
}

