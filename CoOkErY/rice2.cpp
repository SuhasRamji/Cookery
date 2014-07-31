#include "rice2.h"
#include "ui_rice2.h"

Rice2::Rice2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rice2)
{
    ui->setupUi(this);
}

Rice2::~Rice2()
{
    delete ui;
}

void Rice2::on_pushButton_clicked()
{
    rice3.show();
    this->hide();
}
