#ifndef NONVEG4_H
#define NONVEG4_H

#include <QWidget>
#include "nonveg5.h"

namespace Ui {
    class Nonveg4;
}

class Nonveg4 : public QWidget
{
    Q_OBJECT

public:
    explicit Nonveg4(QWidget *parent = 0);
    ~Nonveg4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Nonveg4 *ui;
    Nonveg5 nonveg5;
};

#endif // NONVEG4_H
