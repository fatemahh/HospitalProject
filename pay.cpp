#include "pay.h"
#include "ui_pay.h"
#include "credit.h"
#include "rating.h"

Pay::Pay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pay)
{
    ui->setupUi(this);
}

Pay::~Pay()
{
    delete ui;
}

void Pay::on_pushButton_3_clicked()
{
    Credit credit;
    credit.setModal(true);
    credit.exec();

}


void Pay::on_pushButton_clicked()
{
    Rating rating;
    rating.setModal(true);
    rating.exec();
}


void Pay::on_pushButton_2_clicked()
{
    Rating rating;
    rating.setModal(true);
    rating.exec();
}

