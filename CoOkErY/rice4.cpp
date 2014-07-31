#include "rice4.h"
#include "ui_rice4.h"

Rice4::Rice4(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rice4)
{
    ui->setupUi(this);
}

Rice4::~Rice4()
{
    delete ui;
}
