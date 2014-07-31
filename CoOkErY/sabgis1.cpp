#include "sabgis1.h"
#include "ui_sabgis1.h"

Sabgis1::Sabgis1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sabgis1)
{
    ui->setupUi(this);
}

Sabgis1::~Sabgis1()
{
    delete ui;
}

void Sabgis1::on_pushButton_clicked()
{
    sabgis2.show();
    this->hide();
}
