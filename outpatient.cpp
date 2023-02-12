#include "outpatient.h"
#include "ui_outpatient.h"
#include "confirmation.h"
#include "patienttype.h"

Department Departmentss[] = {Department("Bones"), Department("Surgery"), Department("Neurology")};


Outpatient::Outpatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Outpatient)
{
    ui->setupUi(this);
    ui->comboBox_OutDepartment->addItem(Departmentss[0].Name);
    ui->comboBox_OutDepartment->addItem(Departmentss[1].Name);
    ui->comboBox_OutDepartment->addItem(Departmentss[2].Name);

}

Outpatient::~Outpatient()
{
    delete ui;
}

void Outpatient::on_pushButton_OutBook_clicked()
{    Receipt receipt1;

    receipt1.setFees(ui->label_price->text().toInt());
    receipt1.setRoom("None");
    receipt1.setDep_R(ui->comboBox_OutDepartment->currentText());
    receipt1.setDoc_R(ui->comboBox_OutDoctor->currentText());
    receipt1.setTime(ui->dateTimeEdit->text());

    Confirmation confirmation;
    confirmation.setModal(true);
    confirmation.exec();

}


void Outpatient::on_comboBox_OutDepartment_currentTextChanged(const QString &arg1)
{
        if (arg1 == "Department Bones")
       {
    ui->comboBox_OutDoctor->clear();
                ui->comboBox_OutDoctor->addItem(Departmentss[0].Doctors[0].getName());
                ui->comboBox_OutDoctor->addItem(Departmentss[0].Doctors[1].getName());
                ui->comboBox_OutDoctor->addItem(Departmentss[0].Doctors[2].getName());
                ui->comboBox_OutDoctor->addItem(Departmentss[0].Doctors[3].getName());
                ui->comboBox_OutDoctor->addItem(Departmentss[0].Doctors[4].getName());
        }
       else if (arg1 == "Department Surgery")
       {
            ui->comboBox_OutDoctor->clear();

                ui->comboBox_OutDoctor->addItem(Departmentss[1].Doctors[0].getName());
                ui->comboBox_OutDoctor->addItem(Departmentss[1].Doctors[1].getName());
                ui->comboBox_OutDoctor->addItem(Departmentss[1].Doctors[2].getName());
                ui->comboBox_OutDoctor->addItem(Departmentss[1].Doctors[3].getName());
                ui->comboBox_OutDoctor->addItem(Departmentss[1].Doctors[4].getName());
        }
       else if (arg1 == "Department Neurology")
       {
            ui->comboBox_OutDoctor->clear();

                ui->comboBox_OutDoctor->addItem(Departmentss[2].Doctors[0].getName());
                ui->comboBox_OutDoctor->addItem(Departmentss[2].Doctors[1].getName());
                ui->comboBox_OutDoctor->addItem(Departmentss[2].Doctors[2].getName());
                ui->comboBox_OutDoctor->addItem(Departmentss[2].Doctors[3].getName());
                ui->comboBox_OutDoctor->addItem(Departmentss[2].Doctors[4].getName());
        }
}

