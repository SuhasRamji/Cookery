#include "sabgis.h"
#include "ui_sabgis.h"

Sabgis::Sabgis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sabgis)
{
    ui->setupUi(this);
}

Sabgis::~Sabgis()
{
    delete ui;
}

void Sabgis::on_pushButton_clicked()
{
    sabgis1.show();
    this->hide();
}
