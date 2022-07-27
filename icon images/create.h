#ifndef CREATE_H
#define CREATE_H

#include <QDialog>
#include <QString>
#include <QTimer>

namespace Ui {
class Create;
}

class Create : public QDialog
{
    Q_OBJECT

public:
    explicit Create(QWidget *parent = nullptr);
    ~Create();

    void setIP(QString ip);
    bool create = false;

public slots:
    void confirm();

private:
    Ui::Create *ui;

};

#endif // CREATE_H
