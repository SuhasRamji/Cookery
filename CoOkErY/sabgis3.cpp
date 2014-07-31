#include "sabgis3.h"
#include "ui_sabgis3.h"

Sabgis3::Sabgis3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sabgis3)
{
    ui->setupUi(this);
}

Sabgis3::~Sabgis3()
{
    delete ui;
}

void Sabgis3::on_pushButton_clicked()
{
    sabgis4.show();
    this->hide();
}
