#include "connect.h"
#include "ui_connect.h"

Connect::Connect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connect)
{
    ui->setupUi(this);

    ui->error->setVisible(false);
    ui->error_2->setVisible(false);

    connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(wait()));
}

Connect::~Connect()
{
    delete ui;
}

void Connect::wait()
{
    ui->please->setText("Connecting... Please Wait...");
    ui->please->repaint();
    get_text();
}

void Connect::get_text()
{
    QString str = ui->ip->text();

    if(str == ""){
        ui->error->setVisible(true);
        QTimer::singleShot(800, ui->error, &QLabel::hide);
        ui->please->setText("Please Enter IP:");
        ui->ip->clear();
    }

    if(!check_format(str)){
        ui->error->setVisible(true);
        QTimer::singleShot(800, ui->error, &QLabel::hide);
        ui->please->setText("Please Enter IP:");
        ui->ip->clear();
    }
    else{
        QTcpSocket tmp;
        tmp.connectToHost(QHostAddress(str),8888);

        if(tmp.waitForConnected(5000)){
            tmp.disconnectFromHost();
            text = str;
            connected();
        }
        else{
            not_connected();
        }
    }
}

void Connect::connected()
{
    ui->error->setText("    Connected");
    ui->error->setVisible(true);
    QTimer::singleShot(1200, this, &QDialog::accept);
}

void Connect::not_connected()
{
    ui->error_2->setVisible(true);
    QTimer::singleShot(800, ui->error_2, &QLabel::hide);
    ui->please->setText("Please Enter IP:");
    ui->ip->clear();
}

bool Connect::isNumber(const QString &str)
{
    for (QChar ch: str)
    {
        if (!ch.isDigit()) {
            return false;
        }
    }

    return true;
}

QVector<QString> Connect::split(const QString &str, char delim)
{
    auto i = 0;
    QVector<QString> list;

    auto pos = str.toStdString().find(delim);

    while (pos != std::string::npos)
    {
        list.push_back(QString::fromStdString((str.toStdString().substr(i, pos - i))));
        i = ++pos;
        pos = str.toStdString().find(delim, pos);
    }

    list.push_back(QString::fromStdString((str.toStdString().substr(i, str.length()))));

    return list;
}

bool Connect::check_format(QString ip)
{
    QVector<QString> list = split(ip, '.');

    if (list.size() != 4) {
        return false;
    }

    for (QString str: list)
    {
        if (!isNumber(str) || str.toInt() > 255 || str.toInt() < 0) {
            return false;
        }
    }
    return true;
}


