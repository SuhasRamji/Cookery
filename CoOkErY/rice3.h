#ifndef RICE3_H
#define RICE3_H

#include <QWidget>
#include "rice4.h"

namespace Ui {
    class Rice3;
}

class Rice3 : public QWidget
{
    Q_OBJECT

public:
    explicit Rice3(QWidget *parent = 0);
    ~Rice3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Rice3 *ui;
    Rice4 rice4;
};

#endif // RICE3_H
