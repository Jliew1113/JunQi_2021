#include "disconnect.h"
#include "ui_disconnect.h"

Disconnect::Disconnect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Disconnect)
{
    ui->setupUi(this);
    ui->succ->setVisible(false);

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(confirm()));
}

Disconnect::~Disconnect()
{
    delete ui;
}

void Disconnect::opp()
{
    ui->label->setVisible(false);
    ui->succ->setVisible(true);
}

void Disconnect::confirm()
{
    sure = true;
    ui->label->setVisible(false);
    ui->succ->setVisible(true);
    QTimer::singleShot(1000, this, &QDialog::accept);
}
