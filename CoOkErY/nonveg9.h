#ifndef NONVEG9_H
#define NONVEG9_H

#include <QWidget>

namespace Ui {
    class Nonveg9;
}

class Nonveg9 : public QWidget
{
    Q_OBJECT

public:
    explicit Nonveg9(QWidget *parent = 0);
    ~Nonveg9();

private:
    Ui::Nonveg9 *ui;
};

#endif // NONVEG9_H
