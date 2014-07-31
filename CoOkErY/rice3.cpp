#include "rice3.h"
#include "ui_rice3.h"

Rice3::Rice3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rice3)
{
    ui->setupUi(this);
}

Rice3::~Rice3()
{
    delete ui;
}

void Rice3::on_pushButton_clicked()
{
    rice4.show();
    this->hide();
}
