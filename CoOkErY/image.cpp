#include "image.h"
#include "ui_image.h"

image::image(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::image)
{
    ui->setupUi(this);
}

image::~image()
{
    delete ui;
}
