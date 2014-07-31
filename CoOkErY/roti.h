#ifndef ROTI_H
#define ROTI_H

#include <QWidget>
#include "roti1.h"

namespace Ui {
    class Roti;
}

class Roti : public QWidget
{
    Q_OBJECT

public:
    explicit Roti(QWidget *parent = 0);
    ~Roti();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Roti *ui;
    Roti1 roti1;
};

#endif // ROTI_H
