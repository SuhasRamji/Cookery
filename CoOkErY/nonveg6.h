#ifndef NONVEG6_H
#define NONVEG6_H

#include <QWidget>
#include "nonveg7.h"

namespace Ui {
    class Nonveg6;
}

class Nonveg6 : public QWidget
{
    Q_OBJECT

public:
    explicit Nonveg6(QWidget *parent = 0);
    ~Nonveg6();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Nonveg6 *ui;
    Nonveg7 nonveg7;
};

#endif // NONVEG6_H
