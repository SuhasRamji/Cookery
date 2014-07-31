#ifndef NONVEG8_H
#define NONVEG8_H

#include <QWidget>
#include "nonveg9.h"

namespace Ui {
    class Nonveg8;
}

class Nonveg8 : public QWidget
{
    Q_OBJECT

public:
    explicit Nonveg8(QWidget *parent = 0);
    ~Nonveg8();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Nonveg8 *ui;
    Nonveg9 nonveg9;
};

#endif // NONVEG8_H
