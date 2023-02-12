#ifndef EMERGENCY_H
#define EMERGENCY_H

#include <QDialog>

namespace Ui {
class Emergency;
}

class Emergency : public QDialog
{
    Q_OBJECT

public:
    explicit Emergency(QWidget *parent = nullptr);
    ~Emergency();

private:
    Ui::Emergency *ui;
};

#endif // EMERGENCY_H
