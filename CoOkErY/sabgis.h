#ifndef SABGIS_H
#define SABGIS_H

#include <QWidget>
#include "sabgis1.h"

namespace Ui {
    class Sabgis;
}

class Sabgis : public QWidget
{
    Q_OBJECT

public:
    explicit Sabgis(QWidget *parent = 0);
    ~Sabgis();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Sabgis *ui;
    Sabgis1 sabgis1;
};

#endif // SABGIS_H
