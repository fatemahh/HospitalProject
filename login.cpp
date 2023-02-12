#include "login.h"
#include "ui_hospital.h"
#include "patienttype.h"
#include "login.h"
#include <QTextEdit>
#include <QString>
#include <vector>
#include "confirmation.h"

Hospital::Hospital(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Hospital)

{
    ui->setupUi(this);

}

Hospital::~Hospital()
{
    delete ui;
}



void Hospital::on_PushButton_Register_clicked()
{
    if (ui->LineEdit_RegisterFullName->text() == "")
    {
        ui->Label_RegisterState->setText("Please enter Full Name.");
        return;
    }

    if ((ui->LineEdit_RegisterAge->text().toInt() < 0) || (ui->LineEdit_RegisterAge->text().toInt() > 100))
    {
        ui->Label_RegisterState->setText("Age must be between 0 and 100.");
        return;
    }

    if (!(ui->RadioButton_RegisterGenderFemale->isChecked()) && !(ui->RadioButton_RegisterGenderMale->isChecked()) )
    {   ui->Label_RegisterState->setText("Please choose a gender.");
        return;
    }


    if (ui->LineEdit_RegisterNumber->text() == "")
    {
        ui->Label_RegisterState->setText("Please enter number.");
        return;
    }

    if (ui->LineEdit_RegisterAddress->text() == "")
    {
        ui->Label_RegisterState->setText("Please enter Address.");
        return;
    }

    int x = Patients.size();
    for (int i=0 ; i < x ; i++)
        {
        if (ui->LineEdit_RegisterUsername->text() == Patients[i].getUsername())
        {
            ui->Label_RegisterState->setText("Username is already registered, choose another name.");
            return;
        }
        }

    if (ui->LineEdit_RegisterPassword->text().length() < 5)
    {
            ui->Label_RegisterState->setText("Password must be at least 5 characters.");
            return;
    }




        Patient New;
        New.setName(ui->LineEdit_RegisterFullName->text());
        New.setPassword(ui->LineEdit_RegisterPassword->text());
        New.setAge(ui->LineEdit_RegisterAge->text().toInt());
        New.setNumber(ui->LineEdit_RegisterNumber->text());
        New.setAddress(ui->LineEdit_RegisterAddress->text());
        New.setUsername(ui->LineEdit_RegisterUsername->text());

        if (ui->RadioButton_RegisterGenderFemale->isChecked())
        New.setGender(ui->RadioButton_RegisterGenderFemale->text());
        if (ui->RadioButton_RegisterGenderMale->isChecked())
        New.setGender(ui->RadioButton_RegisterGenderMale->text());

        Patients.push_back(New);

        ui->LineEdit_RegisterFullName->setText("");
        ui->LineEdit_RegisterPassword->setText("");
        ui->LineEdit_RegisterAge->setText("");
        ui->LineEdit_RegisterNumber->setText("");
        ui->LineEdit_RegisterAddress->setText("");
        ui->LineEdit_RegisterUsername->setText("");
        ui->Label_RegisterState->setText("Registered Successfully.");

    return;
}


void Hospital::on_PushButton_Login_clicked()
{
    bool Registered = false;
       int i=0;
       int x = Patients.size();
       do
       {
           if (ui->LineEdit_LoginUsername->text() == Patients[i].getUsername())
               Registered = true;
           else
               Registered = false;
           i++;

       } while ((Registered == false) && (i < x));

        if (Registered == false)
        {
            ui->Label_LoginState->setText("Username is not registered.");
            return;
        }

        if (ui->LineEdit_LoginPassword->text() != Patients[i-1].getPassword())
        {
            ui->Label_LoginState->setText("Username is correct but password is wrong.");
            return;
        }


        ui->Label_LoginState->setText("Signed in successfully.");

    PatientType patienttype;
    patienttype.setModal(true);
    patienttype.exec();


}


