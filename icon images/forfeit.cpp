#include "forfeit.h"
#include "ui_forfeit.h"

Forfeit::Forfeit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Forfeit)
{
    ui->setupUi(this);

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(confirm()));
}

Forfeit::~Forfeit()
{
    delete ui;
}

void Forfeit::confirm()
{
    sure = true;
    this->accept();
}
