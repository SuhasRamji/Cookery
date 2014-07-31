#include "nonveg1.h"
#include "ui_nonveg1.h"

Nonveg1::Nonveg1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nonveg1)
{
    ui->setupUi(this);
}

Nonveg1::~Nonveg1()
{
    delete ui;
}

void Nonveg1::on_pushButton_clicked()
{
    nonveg2.show();
    this->hide();
}
