#ifndef NONVEG5_H
#define NONVEG5_H

#include <QWidget>
#include "nonveg6.h"

namespace Ui {
    class Nonveg5;
}

class Nonveg5 : public QWidget
{
    Q_OBJECT

public:
    explicit Nonveg5(QWidget *parent = 0);
    ~Nonveg5();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Nonveg5 *ui;
    Nonveg6 nonveg6;
};

#endif // NONVEG5_H
