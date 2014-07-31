#ifndef ROTI4_H
#define ROTI4_H

#include <QWidget>

namespace Ui {
    class Roti4;
}

class Roti4 : public QWidget
{
    Q_OBJECT

public:
    explicit Roti4(QWidget *parent = 0);
    ~Roti4();

private:
    Ui::Roti4 *ui;
};

#endif // ROTI4_H
