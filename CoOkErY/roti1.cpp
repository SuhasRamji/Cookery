#include "roti1.h"
#include "ui_roti1.h"

Roti1::Roti1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Roti1)
{
    ui->setupUi(this);
}

Roti1::~Roti1()
{
    delete ui;
}

void Roti1::on_pushButton_clicked()
{
    roti2.show();
    this->hide();
}
