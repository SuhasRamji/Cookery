#ifndef SABGIS2_H
#define SABGIS2_H

#include <QWidget>
#include "sabgis3.h"

namespace Ui {
    class Sabgis2;
}

class Sabgis2 : public QWidget
{
    Q_OBJECT

public:
    explicit Sabgis2(QWidget *parent = 0);
    ~Sabgis2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Sabgis2 *ui;
    Sabgis3 sabgis3;

};

#endif // SABGIS2_H
