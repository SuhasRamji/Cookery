#ifndef IMAGE_H
#define IMAGE_H

#include <QWidget>

namespace Ui {
    class image;
}

class image : public QWidget
{
    Q_OBJECT

public:
    explicit image(QWidget *parent = 0);
    ~image();

private:
    Ui::image *ui;
};

#endif // IMAGE_H
