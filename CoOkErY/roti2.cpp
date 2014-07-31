#include "roti2.h"
#include "ui_roti2.h"

Roti2::Roti2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Roti2)
{
    ui->setupUi(this);
}

Roti2::~Roti2()
{
    delete ui;
}

void Roti2::on_pushButton_clicked()
{
    roti3.show();
    this->hide();
}
