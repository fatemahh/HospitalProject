#ifndef PATIENTTYPE_H
#define PATIENTTYPE_H

#include <QDialog>
#include <iostream>
using namespace std;

namespace Ui {
class PatientType;
}

class Doctor
{
private:
    QString NameDoc;
    double Rate;

public:
    QString getName()
    {
        return NameDoc;
    }

    double getRate()
    {
    return Rate;
    }

    void setName(QString ND)
    {
        NameDoc = ND;
    }

    void setRate(double R)
    {
    Rate=R;
    }

};

class Room
{
public:
    int Number;
    int Price;
    bool Taken;
    Room()
    {
        Taken = false;
        Number =0;
        Price =0;
    }
};

class NormalRoom : public Room
{
public:
    NormalRoom()
    {
        Price = 500;
    }
};

class VIPRoom : public Room
{
public:
    VIPRoom()
    {
        Price = 1000;
  }
};

class SuiteRoom : public Room
{
public:
    SuiteRoom()
    {
        Price = 1500;
    }
};

class Department
{
public:
    QString Name;
    int Price;
    Doctor Doctors[10];
    NormalRoom Normal[100];
    VIPRoom VIP[50];
    SuiteRoom Suite[10];

    Department(QString dep)
    {
        Name = "Department " + dep;
        for (int i =0; i <100; i++)
            Normal[i].Number = i;
        for (int i =100; i <150; i++)
            VIP[i].Number = i;
        for (int i =150; i <160; i++)
            Suite[i].Number = i;
        for (int i=0; i<10; i++)
            Doctors[i].setName(Name + " Doctor " + QString::number(i+1));

    }


};

class PatientType : public QDialog
{
    Q_OBJECT

public:
    explicit PatientType(QWidget *parent = nullptr);
    ~PatientType();

private slots:
    void on_pushButton_Inpatient_clicked();

    void on_pushButton_Outpatient_clicked();

    void on_pushButton_Emergency_clicked();

    void on_pushButton_InHomeVisit_clicked();





private:
    Ui::PatientType *ui;
};

#endif // PATIENTTYPE_H
