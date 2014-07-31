#include "roti.h"
#include "ui_roti.h"

Roti::Roti(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Roti)
{
    ui->setupUi(this);
}

Roti::~Roti()
{
    delete ui;
}

void Roti::on_pushButton_clicked()
{
    roti1.show();
    this->hide();
}
