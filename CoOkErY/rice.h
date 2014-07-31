#ifndef RICE_H
#define RICE_H

#include <QWidget>
#include "rice1.h"

namespace Ui {
    class Rice;
}

class Rice : public QWidget
{
    Q_OBJECT

public:
    explicit Rice(QWidget *parent = 0);
    ~Rice();

private slots:

    void on_pushButton_clicked();

private:
    Ui::Rice *ui;
    Rice1 rice1;

};

#endif // RICE_H
