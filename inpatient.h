#ifndef INPATIENT_H
#define INPATIENT_H

#include <QDialog>
#include "confirmation.h"

namespace Ui {
class Inpatient;
}

class Inpatient : public QDialog
{
    Q_OBJECT

public:
    explicit Inpatient(QWidget *parent = nullptr);
    ~Inpatient();


private slots:
    void on_pushButton_InBook_clicked();

    void on_comboBox_InRoomType_currentTextChanged(const QString &arg1);

    void on_comboBox_InDepartment_currentTextChanged(const QString &arg1);

    void on_comboBox_InDepartment_currentIndexChanged(int index);

    void on_comboBox_InRoomType_currentIndexChanged(int index);

private:
    Ui::Inpatient *ui;
};

#endif // INPATIENT_H
