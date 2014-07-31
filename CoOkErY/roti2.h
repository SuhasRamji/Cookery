#ifndef ROTI2_H
#define ROTI2_H

#include <QWidget>
#include "roti3.h"

namespace Ui {
    class Roti2;
}

class Roti2 : public QWidget
{
    Q_OBJECT

public:
    explicit Roti2(QWidget *parent = 0);
    ~Roti2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Roti2 *ui;
    Roti3 roti3;
};

#endif // ROTI2_H
