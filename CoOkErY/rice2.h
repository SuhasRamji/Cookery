#ifndef RICE2_H
#define RICE2_H

#include <QWidget>
#include "rice3.h"
namespace Ui {
    class Rice2;
}

class Rice2 : public QWidget
{
    Q_OBJECT

public:
    explicit Rice2(QWidget *parent = 0);
    ~Rice2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Rice2 *ui;
    Rice3 rice3;
};

#endif // RICE2_H
