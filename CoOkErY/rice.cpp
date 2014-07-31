#include "rice.h"
#include "ui_rice.h"

Rice::Rice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Rice)
{
    ui->setupUi(this);
}

Rice::~Rice()
{
    delete ui;

}

void Rice::on_pushButton_clicked()
{
    rice1.show();
    this->hide();
}

