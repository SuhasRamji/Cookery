#include "nonveg.h"
#include "ui_nonveg.h"

NonVeg::NonVeg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NonVeg)
{
    ui->setupUi(this);
}

NonVeg::~NonVeg()
{
    delete ui;
}

void NonVeg::on_pushButton_clicked()
{
    nonveg1.show();
    this->hide();
}
