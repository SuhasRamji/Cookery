#ifndef VEG_H
#define VEG_H

#include <QWidget>
#include "rice.h"
#include "roti.h"
#include "sabgis.h"

namespace Ui {
    class Veg;
}

class Veg : public QWidget
{
    Q_OBJECT

public:
    explicit Veg(QWidget *parent = 0);
    ~Veg();

private slots:
    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

private:
    Ui::Veg *ui;
    Rice rice;
    Roti roti;
    Sabgis sabgis;
};

#endif // VEG_H
