#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <iostream>
#include <vector>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Hospital; }
QT_END_NAMESPACE


class Patient
{
private:
    QString Name;
    int Age;
    QString Gender;
    QString Number;
    QString Address;
    QString Username;
    QString Password;
    int Points;
    double Wallet;

public:
    QString getName()
    {
        return Name;
    }
    int getAge()
    {
        return Age;
    }
    QString getGender()
    {
        return Gender;
    }
    QString getNumber()
    {
        return Number;
    }
    QString getAddress()
    {
        return Address;
    }
    QString getUsername()
    {
        return Username;
    }
    QString getPassword()
    {
        return Password;
    }
    void setName(QString N)
    {
        Name = N;
    }
    void setAge(int A)
    {
        Age = A;
    }
    void setGender(QString G)
    {
        Gender = G;
    }
    void setNumber(QString Num)
    {
        Number = Num;
    }
    void setAddress(QString Add)
    {
        Address = Add;
    }
    void setUsername(QString User)
    {
        Username = User;
    }
    void setPassword(QString Pass)
    {
        Password = Pass;
    }
    void setPoints(int p)
    {
        Points = p;
    }
    int getPoints()
    {
        return Points;
    }
    void setWallet(double p)
    {
        Points = p;
    }
    double getWallet()
    {
        return Points;
    }

};




class Hospital : public QMainWindow
{
    Q_OBJECT

public:
    Hospital(QWidget *parent = nullptr);
    ~Hospital();
    vector<Patient> Patients;


private slots:
    void on_PushButton_Register_clicked();

    void on_PushButton_Login_clicked();

private:
    Ui::Hospital *ui;
};
#endif // LOGIN_H

