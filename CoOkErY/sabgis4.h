#ifndef SABGIS4_H
#define SABGIS4_H

#include <QWidget>

namespace Ui {
    class Sabgis4;
}

class Sabgis4 : public QWidget
{
    Q_OBJECT

public:
    explicit Sabgis4(QWidget *parent = 0);
    ~Sabgis4();

private:
    Ui::Sabgis4 *ui;
};

#endif // SABGIS4_H
