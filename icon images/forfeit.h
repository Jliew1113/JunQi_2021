#ifndef FORFEIT_H
#define FORFEIT_H

#include <QDialog>

namespace Ui {
class Forfeit;
}

class Forfeit : public QDialog
{
    Q_OBJECT

public:
    explicit Forfeit(QWidget *parent = nullptr);
    ~Forfeit();

    bool sure = false;

public slots:
    void confirm();

private:
    Ui::Forfeit *ui;
};

#endif // FORFEIT_H
