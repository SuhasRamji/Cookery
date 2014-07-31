#include "sabgis2.h"
#include "ui_sabgis2.h"

Sabgis2::Sabgis2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sabgis2)
{
    ui->setupUi(this);
}

Sabgis2::~Sabgis2()
{
    delete ui;
}

void Sabgis2::on_pushButton_clicked()
{
    sabgis3.show();
    this->hide();
}
