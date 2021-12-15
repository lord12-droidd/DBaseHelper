#include "about.h"
#include "ui_about.h"
#include <QPixmap>

about::about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
    QPixmap pix("./icon.png");
    ui->labelPicture->setPixmap(pix.scaled(100, 100, Qt::KeepAspectRatio));
}

about::~about()
{
    delete ui;
}

void about::on_closeButton_clicked()
{
    this->close();
}

