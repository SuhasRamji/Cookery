#include "sabgis4.h"
#include "ui_sabgis4.h"

Sabgis4::Sabgis4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sabgis4)
{
    ui->setupUi(this);
}

Sabgis4::~Sabgis4()
{
    delete ui;
}
