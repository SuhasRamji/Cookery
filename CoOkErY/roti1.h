#ifndef ROTI1_H
#define ROTI1_H

#include <QWidget>
#include "roti2.h"

namespace Ui {
    class Roti1;
}

class Roti1 : public QWidget
{
    Q_OBJECT

public:
    explicit Roti1(QWidget *parent = 0);
    ~Roti1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Roti1 *ui;
    Roti2 roti2;
};

#endif // ROTI1_H
