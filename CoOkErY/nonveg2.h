#ifndef NONVEG2_H
#define NONVEG2_H

#include <QWidget>
#include "nonveg3.h"

namespace Ui {
    class Nonveg2;
}

class Nonveg2 : public QWidget
{
    Q_OBJECT

public:
    explicit Nonveg2(QWidget *parent = 0);
    ~Nonveg2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Nonveg2 *ui;
    Nonveg3 nonveg3;
};

#endif // NONVEG2_H
