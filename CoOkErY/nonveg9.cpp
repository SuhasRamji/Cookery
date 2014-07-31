#include "nonveg9.h"
#include "ui_nonveg9.h"

Nonveg9::Nonveg9(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Nonveg9)
{
    ui->setupUi(this);
}

Nonveg9::~Nonveg9()
{
    delete ui;
}
