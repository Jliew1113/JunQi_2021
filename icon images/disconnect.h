#ifndef DISCONNECT_H
#define DISCONNECT_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class Disconnect;
}

class Disconnect : public QDialog
{
    Q_OBJECT

public:
    explicit Disconnect(QWidget *parent = nullptr);
    ~Disconnect();

    bool sure = false;
    void opp();

public slots:
    void confirm();

private:
    Ui::Disconnect *ui;
};

#endif // DISCONNECT_H
