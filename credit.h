#ifndef CREDIT_H
#define CREDIT_H

#include <QDialog>

namespace Ui {
class Credit;
}
class CreditCard{
  private:
  QString CardNum;
  QString NameHolder;
  QString CVV;

  public:
  void setCardNum(QString CN)
  {
      CardNum=CN;
  }

  QString getCardNum()
  {
      return CardNum;
  }
  void setNameHolder(QString NH)
  {
      NameHolder=NH;
  }

  QString getNameHolder()
  {
      return NameHolder;
  }

  void setCVV(QString c)
  {
      CVV=c;
  }

  QString getCVV()
  {
      return CVV;
  }


};

class Credit : public QDialog
{
    Q_OBJECT

public:
    explicit Credit(QWidget *parent = nullptr);
    ~Credit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Credit *ui;
};

#endif // CREDIT_H
