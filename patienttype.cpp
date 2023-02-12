#include "patienttype.h"
#include "ui_patienttype.h"
#include "inpatient.h"
#include "outpatient.h"
#include "emergency.h"
#include "inhomevisit.h"

PatientType::PatientType(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PatientType)
{
    ui->setupUi(this);

}

PatientType::~PatientType()
{
    delete ui;
}

void PatientType::on_pushButton_Inpatient_clicked()
{
Inpatient inpatient;
inpatient.setModal(true);
inpatient.exec();
}


void PatientType::on_pushButton_Outpatient_clicked()
{
    Outpatient outpatient;
    outpatient.setModal(true);
    outpatient.exec();
}


void PatientType::on_pushButton_Emergency_clicked()
{
    Emergency emergency;
    emergency.setModal(true);
    emergency.exec();
}


void PatientType::on_pushButton_InHomeVisit_clicked()
{
    InHomeVisit inhomevisit;
    inhomevisit.setModal(true);
    inhomevisit.exec();
}

