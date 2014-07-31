#include "roti3.h"
#include "ui_roti3.h"

Roti3::Roti3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Roti3)
{
    ui->setupUi(this);
}

Roti3::~Roti3()
{
    delete ui;
}

void Roti3::on_pushButton_clicked()
{
    roti4.show();
    this->hide();
}
