#include "nonveg6.h"
#include "ui_nonveg6.h"

Nonveg6::Nonveg6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nonveg6)
{
    ui->setupUi(this);
}

Nonveg6::~Nonveg6()
{
    delete ui;
}

void Nonveg6::on_pushButton_clicked()
{
    nonveg7.show();
    this->hide();
}
