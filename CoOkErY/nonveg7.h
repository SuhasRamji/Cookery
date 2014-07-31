#ifndef NONVEG7_H
#define NONVEG7_H

#include <QWidget>
#include "nonveg8.h"

namespace Ui {
    class Nonveg7;
}

class Nonveg7 : public QWidget
{
    Q_OBJECT

public:
    explicit Nonveg7(QWidget *parent = 0);
    ~Nonveg7();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Nonveg7 *ui;
    Nonveg8 nonveg8;
};

#endif // NONVEG7_H
