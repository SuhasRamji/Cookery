#ifndef SABGIS1_H
#define SABGIS1_H

#include <QWidget>
#include "sabgis2.h"

namespace Ui {
    class Sabgis1;
}

class Sabgis1 : public QWidget
{
    Q_OBJECT

public:
    explicit Sabgis1(QWidget *parent = 0);
    ~Sabgis1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Sabgis1 *ui;
    Sabgis2 sabgis2;
};

#endif // SABGIS1_H
