#ifndef INHOMEVISIT_H
#define INHOMEVISIT_H

#include <QDialog>
#include "confirmation.h"

namespace Ui {
class InHomeVisit;
}

class InHomeVisit : public QDialog
{
    Q_OBJECT

public:
    explicit InHomeVisit(QWidget *parent = nullptr);
    ~InHomeVisit();

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::InHomeVisit *ui;
};

#endif // INHOMEVISIT_H
