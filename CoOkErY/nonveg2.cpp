#include "nonveg2.h"
#include "ui_nonveg2.h"

Nonveg2::Nonveg2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nonveg2)
{
    ui->setupUi(this);
}

Nonveg2::~Nonveg2()
{
    delete ui;
}

void Nonveg2::on_pushButton_clicked()
{
    nonveg3.show();
    this->hide();
}
