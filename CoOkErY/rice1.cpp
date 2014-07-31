#include "rice1.h"
#include "ui_rice1.h"

Rice1::Rice1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rice1)
{
    ui->setupUi(this);
}

Rice1::~Rice1()
{
    delete ui;
}

void Rice1::on_pushButton_clicked()
{
    rice2.show();
    this->hide();
}
