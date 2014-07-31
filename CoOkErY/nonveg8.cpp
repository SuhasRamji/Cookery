#include "nonveg8.h"
#include "ui_nonveg8.h"

Nonveg8::Nonveg8(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nonveg8)
{
    ui->setupUi(this);
}

Nonveg8::~Nonveg8()
{
    delete ui;
}

void Nonveg8::on_pushButton_clicked()
{
    nonveg9.show();
    this->hide();
}
