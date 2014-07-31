#ifndef SNACKS_H
#define SNACKS_H

#include <QWidget>

namespace Ui {
    class Snacks;
}

class Snacks : public QWidget
{
    Q_OBJECT

public:
    explicit Snacks(QWidget *parent = 0);
    ~Snacks();

private:
    Ui::Snacks *ui;
};

#endif // SNACKS_H
