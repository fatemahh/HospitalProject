#ifndef OUTPATIENT_H
#define OUTPATIENT_H

#include <QDialog>
#include "confirmation.h"

namespace Ui {
class Outpatient;
}

class Outpatient : public QDialog
{
    Q_OBJECT

public:
    explicit Outpatient(QWidget *parent = nullptr);
    ~Outpatient();
private slots:
    void on_pushButton_OutBook_clicked();

    void on_comboBox_OutDepartment_currentTextChanged(const QString &arg1);

private:
    Ui::Outpatient *ui;
};

#endif // OUTPATIENT_H
