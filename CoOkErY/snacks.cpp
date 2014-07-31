#include "snacks.h"
#include "ui_snacks.h"

Snacks::Snacks(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Snacks)
{
    ui->setupUi(this);
}

Snacks::~Snacks()
{
    delete ui;
}
