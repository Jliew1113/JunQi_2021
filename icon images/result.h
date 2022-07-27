#ifndef RESULT_H
#define RESULT_H

#include <QDialog>

namespace Ui {
class Result;
}

class Result : public QDialog
{
    Q_OBJECT

public:
    explicit Result(QWidget *parent = nullptr);
    ~Result();

    bool close = false;
    void rslt(int win);

public slots:
    void bye();

private:
    Ui::Result *ui;
};

#endif // RESULT_H
