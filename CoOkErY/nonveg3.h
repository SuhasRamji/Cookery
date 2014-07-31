#ifndef NONVEG3_H
#define NONVEG3_H

#include <QWidget>
#include "nonveg4.h"

namespace Ui {
    class Nonveg3;
}

class Nonveg3 : public QWidget
{
    Q_OBJECT

public:
    explicit Nonveg3(QWidget *parent = 0);
    ~Nonveg3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Nonveg3 *ui;
    Nonveg4 nonveg4;
};

#endif // NONVEG3_H
