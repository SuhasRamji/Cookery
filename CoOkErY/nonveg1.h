#ifndef NONVEG1_H
#define NONVEG1_H

#include <QWidget>
#include "nonveg2.h"

namespace Ui {
    class Nonveg1;
}

class Nonveg1 : public QWidget
{
    Q_OBJECT

public:
    explicit Nonveg1(QWidget *parent = 0);
    ~Nonveg1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Nonveg1 *ui;
    Nonveg2 nonveg2;
};

#endif // NONVEG1_H
