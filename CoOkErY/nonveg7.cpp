#include "nonveg7.h"
#include "ui_nonveg7.h"

Nonveg7::Nonveg7(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nonveg7)
{
    ui->setupUi(this);
}

Nonveg7::~Nonveg7()
{
    delete ui;
}

void Nonveg7::on_pushButton_clicked()
{
    nonveg8.show();
    this->hide();
}
