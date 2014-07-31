#ifndef NONVEG_H
#define NONVEG_H

#include <QWidget>
#include "nonveg1.h"

namespace Ui {
    class NonVeg;
}

class NonVeg : public QWidget
{
    Q_OBJECT

public:
    explicit NonVeg(QWidget *parent = 0);
    ~NonVeg();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NonVeg *ui;
    Nonveg1 nonveg1;
};

#endif // NONVEG_H
