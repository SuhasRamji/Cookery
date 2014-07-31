#include "nonveg4.h"
#include "ui_nonveg4.h"

Nonveg4::Nonveg4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nonveg4)
{
    ui->setupUi(this);
}

Nonveg4::~Nonveg4()
{
    delete ui;
}

void Nonveg4::on_pushButton_clicked()
{
    nonveg5.show();
    this->hide();
}
