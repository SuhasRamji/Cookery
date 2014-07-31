#include "nonveg5.h"
#include "ui_nonveg5.h"

Nonveg5::Nonveg5(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nonveg5)
{
    ui->setupUi(this);
}

Nonveg5::~Nonveg5()
{
    delete ui;
}

void Nonveg5::on_pushButton_clicked()
{
    nonveg6.show();
    this->hide();
}
