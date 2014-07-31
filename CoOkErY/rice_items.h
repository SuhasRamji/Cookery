#ifndef RICE_ITEMS_H
#define RICE_ITEMS_H

#include <QWidget>

namespace Ui {
    class Rice_Items;
}

class Rice_Items : public QWidget
{
    Q_OBJECT

public:
    explicit Rice_Items(QWidget *parent = 0);
    ~Rice_Items();

private:
    Ui::Rice_Items *ui;
};

#endif // RICE_ITEMS_H
