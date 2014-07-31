#include "veg.h"
#include "ui_veg.h"

Veg::Veg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Veg)
{
    ui->setupUi(this);
}

Veg::~Veg()
{
    delete ui;
}

void Veg::on_radioButton_clicked()
{
    rice.show();
    this->hide();
}

void Veg::on_radioButton_2_clicked()
{
    roti.show();
    this->hide();
}

void Veg::on_radioButton_3_clicked()
{
    sabgis.show();
    this->hide();
}
