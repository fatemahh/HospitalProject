#ifndef CONFIRMATION_H
#define CONFIRMATION_H

#include <QDialog>

namespace Ui {
class Confirmation;
}

class Receipt
{
private:
double fees;
QString Pname;
QString Room;
QString dep_Receipt;
QString doc_Recepit;
QString Time;
public:
void setFees(double F)
{
 fees=F;
}

double getFees()
{
    return fees;
}

void setPname(QString Pn)
{
    Pname=Pn;
}

QString getPname()
{
    return Pname;
}

void setRoom(QString r)
{
    Room=r;
}

QString getRoom()
{
    return Room;
}

void setDep_R(QString dR)
{
    dep_Receipt=dR;
}

QString getDep_R()
{
    return dep_Receipt;
}
void setDoc_R(QString docR)
{
    doc_Recepit=docR;
}
QString getDoc_R()
{
    return doc_Recepit;
}
void setTime(QString t)
{
    Time=t;
}

QString getTime()
{
    return Time;
}

};

class Confirmation : public QDialog
{
    Q_OBJECT

public:
    explicit Confirmation(QWidget *parent = nullptr);
    ~Confirmation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Confirmation *ui;
};

#endif // CONFIRMATION_H
