#include "confirmation.h"
#include "ui_confirmation.h"
#include "pay.h"
#include "inpatient.h"
#include "outpatient.h"


Confirmation::Confirmation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Confirmation)
{

       ui->setupUi(this);
}

Confirmation::~Confirmation()
{
    delete ui;
}

void Confirmation::on_pushButton_clicked()
{
    Pay pay;
    pay.setModal(true);
    pay.exec();
}

