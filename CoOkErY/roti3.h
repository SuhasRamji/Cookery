#ifndef ROTI3_H
#define ROTI3_H

#include <QWidget>
#include "roti4.h"

namespace Ui {
    class Roti3;
}

class Roti3 : public QWidget
{
    Q_OBJECT

public:
    explicit Roti3(QWidget *parent = 0);
    ~Roti3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Roti3 *ui;
    Roti4 roti4;
};

#endif // ROTI3_H
