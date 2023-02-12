#include "inpatient.h"
#include "login.h"
#include "ui_inpatient.h"
#include "confirmation.h"
#include "patienttype.h"


Department Departments[] = {Department("Bones"), Department("Surgery"), Department("Neurology")};
Receipt receipt1;


Inpatient::Inpatient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inpatient)
{
    ui->setupUi(this);

    ui->comboBox_InDepartment->addItem(Departments[0].Name);
    ui->comboBox_InDepartment->addItem(Departments[1].Name);
    ui->comboBox_InDepartment->addItem(Departments[2].Name);

    ui->comboBox_InRoomType->addItem("Normal Room");
    ui->comboBox_InRoomType->addItem("VIP Room");
    ui->comboBox_InRoomType->addItem("Suite Room");
}

Inpatient::~Inpatient()
{
    delete ui;
}

void Inpatient::on_comboBox_InRoomType_currentTextChanged(const QString &arg1)
{
    Department Department1("temp");

    if (arg1 == "")
            ui->label_5->setText("");

    else if (arg1 == "Normal Room")
       { ui->label_5->clear();
        bool T =false ;
        int i = 0;
        while (T == true && i <100)
        {
        if (Department1.Normal[i].Taken == true)
            T = true;
        else
            T = false;
        }
        if (T== true)
          {  ui->label_6->setText("No Available Rooms");
        return;}
    ui->label_5->setText(QString::number(Department1.Normal[0].Price));
    receipt1.setRoom(ui->comboBox_InRoomType->currentText() + QString::number(Department1.Normal[i].Number));

    }

    else if (arg1 == "VIP Room")
    { ui->label_5->clear();
        bool T =false ;
        int i = 0;
        while (T == true && i <100)
        {
        if (Department1.VIP[i].Taken == true)
            T = true;
        else
            T = false;
        }
        if (T== true)
        {    ui->label_6->setText("No Available Rooms");
        return;}
    ui->label_5->setText(QString::number(Department1.VIP[0].Price));
    receipt1.setRoom(ui->comboBox_InRoomType->currentText() + QString::number(Department1.VIP[i].Number));

}
    else if (arg1 == "Suite Room")
    { ui->label_5->clear();
        bool T =false ;
        int i = 0;
        while (T == true && i <100)        {
        if (Department1.Suite[i].Taken == true)
            T = true;
        else
            T = false;
        }
        if (T== true)
        {
            ui->label_6->setText("No Available Rooms");
            return;}
    ui->label_5->setText(QString::number(Department1.Suite[0].Price));
    receipt1.setRoom(ui->comboBox_InRoomType->currentText() + QString::number(Department1.Suite[i].Number));
}
}

void Inpatient::on_comboBox_InDepartment_currentTextChanged(const QString &arg1)
{


    if (arg1 == "Department Bones")
   {
ui->comboBox_InDoctor->clear();
            ui->comboBox_InDoctor->addItem(Departments[0].Doctors[0].getName());
            ui->comboBox_InDoctor->addItem(Departments[0].Doctors[1].getName());
            ui->comboBox_InDoctor->addItem(Departments[0].Doctors[2].getName());
            ui->comboBox_InDoctor->addItem(Departments[0].Doctors[3].getName());
            ui->comboBox_InDoctor->addItem(Departments[0].Doctors[4].getName());
    }
   else if (arg1 == "Department Surgery")
   {
        ui->comboBox_InDoctor->clear();

            ui->comboBox_InDoctor->addItem(Departments[1].Doctors[0].getName());
            ui->comboBox_InDoctor->addItem(Departments[1].Doctors[1].getName());
            ui->comboBox_InDoctor->addItem(Departments[1].Doctors[2].getName());
            ui->comboBox_InDoctor->addItem(Departments[1].Doctors[3].getName());
            ui->comboBox_InDoctor->addItem(Departments[1].Doctors[4].getName());
    }
   else if (arg1 == "Department Neurology")
   {
        ui->comboBox_InDoctor->clear();

            ui->comboBox_InDoctor->addItem(Departments[2].Doctors[0].getName());
            ui->comboBox_InDoctor->addItem(Departments[2].Doctors[1].getName());
            ui->comboBox_InDoctor->addItem(Departments[2].Doctors[2].getName());
            ui->comboBox_InDoctor->addItem(Departments[2].Doctors[3].getName());
            ui->comboBox_InDoctor->addItem(Departments[2].Doctors[4].getName());
    }
}







void Inpatient::on_pushButton_InBook_clicked()
{
    receipt1.setFees(ui->label_5->text().toInt());
    receipt1.setRoom(ui->comboBox_InRoomType->currentText());
    receipt1.setDep_R(ui->comboBox_InDepartment->currentText());
    receipt1.setDoc_R(ui->comboBox_InDoctor->currentText());
    receipt1.setTime(ui->dateTimeEdit->text());

    Confirmation confirmation;
    confirmation.setModal(true);
    confirmation.exec();

}

