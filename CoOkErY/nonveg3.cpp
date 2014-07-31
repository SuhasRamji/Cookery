#include "nonveg3.h"
#include "ui_nonveg3.h"

Nonveg3::Nonveg3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nonveg3)
{
    ui->setupUi(this);
}

Nonveg3::~Nonveg3()
{
    delete ui;
}

void Nonveg3::on_pushButton_clicked()
{
    nonveg4.show();
    this->hide();
}
