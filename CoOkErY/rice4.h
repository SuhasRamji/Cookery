#ifndef RICE4_H
#define RICE4_H

#include <QWidget>

namespace Ui {
    class Rice4;
}

class Rice4 : public QWidget
{
    Q_OBJECT

public:
    explicit Rice4(QWidget *parent = 0);
    ~Rice4();

private:
    Ui::Rice4 *ui;
};

#endif // RICE4_H
