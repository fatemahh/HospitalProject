#include "rating.h"
#include "ui_rating.h"

Rating::Rating(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rating)
{
    ui->setupUi(this);

    ui->doubleSpinBox->setMaximum(10);
}

Rating::~Rating()
{
    delete ui;
}
