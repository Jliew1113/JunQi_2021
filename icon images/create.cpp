#include "create.h"
#include "ui_create.h"

Create::Create(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Create)
{
    ui->setupUi(this);

    ui->succ->setVisible(false);

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(confirm()));
}

Create::~Create()
{
    delete ui;
}

void Create::setIP(QString ip)
{
    ui->IP->setText(ip);
}

void Create::confirm()
{
    ui->confirm->setVisible(false);
    create = true;
    ui->succ->setVisible(true);
    QTimer::singleShot(700, this, &QDialog::accept);
}


