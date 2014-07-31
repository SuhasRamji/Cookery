#include "roti4.h"
#include "ui_roti4.h"

Roti4::Roti4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Roti4)
{
    ui->setupUi(this);
}

Roti4::~Roti4()
{
    delete ui;
}
