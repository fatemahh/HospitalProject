#include "credit.h"
#include "ui_credit.h"
#include "rating.h"


Credit::Credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Credit)
{
    ui->setupUi(this);

    CreditCard credit1;
    credit1.setCardNum(ui->label->text());
    credit1.setCVV(ui->label_2->text());
    credit1.setNameHolder(ui->label_3->text());



}

Credit::~Credit()
{
    delete ui;
}

void Credit::on_pushButton_clicked()
{
    Rating rating;
    rating.setModal(true);
    rating.exec();
}

