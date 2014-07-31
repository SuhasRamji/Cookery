#ifndef RICE1_H
#define RICE1_H

#include <QWidget>
#include "rice2.h"

namespace Ui {
    class Rice1;
}

class Rice1 : public QWidget
{
    Q_OBJECT

public:
    explicit Rice1(QWidget *parent = 0);
    ~Rice1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Rice1 *ui;
    Rice2 rice2;
};

#endif // RICE1_H
