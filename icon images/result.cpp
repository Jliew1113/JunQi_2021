#include "result.h"
#include "ui_result.h"

Result::Result(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Result)
{
    ui->setupUi(this);

    ui->win->setVisible(false);
    ui->lose->setVisible(false);

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(bye()));
    connect(ui->buttonBox, SIGNAL(rejected()), this, SLOT(bye()));
}

Result::~Result()
{
    delete ui;
}

void Result::rslt(int win)
{
    if(win){
        ui->win->setVisible(true);
    }
    else{
        ui->lose->setVisible(true);
    }
}

void Result::bye()
{
    close = true;
    this->accept();
}
