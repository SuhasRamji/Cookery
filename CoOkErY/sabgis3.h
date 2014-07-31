#ifndef SABGIS3_H
#define SABGIS3_H

#include <QWidget>
#include "sabgis4.h"

namespace Ui {
    class Sabgis3;
}

class Sabgis3 : public QWidget
{
    Q_OBJECT

public:
    explicit Sabgis3(QWidget *parent = 0);
    ~Sabgis3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Sabgis3 *ui;
    Sabgis4 sabgis4;
};

#endif // SABGIS3_H
