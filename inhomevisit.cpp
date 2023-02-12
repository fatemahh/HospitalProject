#include "inhomevisit.h"
#include "ui_inhomevisit.h"
#include "confirmation.h"
#include "patienttype.h"

Department Departmentsss[] = {Department("Bones"), Department("Surgery"), Department("Neurology")};

InHomeVisit::InHomeVisit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InHomeVisit)
{
    ui->setupUi(this);

    ui->comboBox->addItem(Departmentsss[0].Name);
    ui->comboBox->addItem(Departmentsss[1].Name);
    ui->comboBox->addItem(Departmentsss[2].Name);
}

InHomeVisit::~InHomeVisit()
{
    delete ui;
}

void InHomeVisit::on_comboBox_currentTextChanged(const QString &arg1)
{
    if (arg1 == "Department Bones")
   {
ui->comboBox_2->clear();
            ui->comboBox_2->addItem(Departmentsss[0].Doctors[0].getName());
            ui->comboBox_2->addItem(Departmentsss[0].Doctors[1].getName());
            ui->comboBox_2->addItem(Departmentsss[0].Doctors[2].getName());
            ui->comboBox_2->addItem(Departmentsss[0].Doctors[3].getName());
            ui->comboBox_2->addItem(Departmentsss[0].Doctors[4].getName());
    }
   else if (arg1 == "Department Surgery")
   {
        ui->comboBox_2->clear();

            ui->comboBox_2->addItem(Departmentsss[1].Doctors[0].getName());
            ui->comboBox_2->addItem(Departmentsss[1].Doctors[1].getName());
            ui->comboBox_2->addItem(Departmentsss[1].Doctors[2].getName());
            ui->comboBox_2->addItem(Departmentsss[1].Doctors[3].getName());
            ui->comboBox_2->addItem(Departmentsss[1].Doctors[4].getName());
    }
   else if (arg1 == "Department Neurology")
   {
        ui->comboBox_2->clear();

            ui->comboBox_2->addItem(Departmentsss[2].Doctors[0].getName());
            ui->comboBox_2->addItem(Departmentsss[2].Doctors[1].getName());
            ui->comboBox_2->addItem(Departmentsss[2].Doctors[2].getName());
            ui->comboBox_2->addItem(Departmentsss[2].Doctors[3].getName());
            ui->comboBox_2->addItem(Departmentsss[2].Doctors[4].getName());
    }
}


void InHomeVisit::on_pushButton_clicked()
{
    Receipt receipt1;
    receipt1.setFees(ui->label_price->text().toInt());
    receipt1.setRoom("None");
    receipt1.setDep_R(ui->comboBox->currentText());
    receipt1.setDoc_R(ui->comboBox_2->currentText());
    receipt1.setTime(ui->dateTimeEdit->text());

    Confirmation confirmation;
    confirmation.setModal(true);
    confirmation.exec();
}

