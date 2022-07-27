#ifndef CONNECT_H
#define CONNECT_H

#include <QDialog>
#include <QString>
#include <QTimer>
#include <QtNetwork>

namespace Ui {
class Connect;
}

class Connect : public QDialog
{
    Q_OBJECT

public:
    explicit Connect(QWidget *parent = nullptr);
    ~Connect();

    QString text = " ";
    bool isNumber(const QString &str);
    QVector<QString> split(const QString &str, char delim);
    bool check_format(QString ip);

public slots:
    void wait();
    void get_text();
    void connected();
    void not_connected();

private:
    Ui::Connect *ui;
};

#endif // CONNECT_H
