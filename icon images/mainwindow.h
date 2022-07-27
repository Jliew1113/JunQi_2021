#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QTimer>
#include <QTime>
#include <QtNetwork>
#include <QString>
#include <QVector>
#include "piece.h"
#include "board.h"
#include "clickablelabel.h"
#include "graph.h"
#include "create.h"
#include "connect.h"
#include "forfeit.h"
#include "result.h"
#include "disconnect.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    int turn = 0;
    int side;
    int chosen = 0;
    int life = 3;
    int opp_life = 3;
    int mine = 3;
    int opp_mine = 3;
    bool decide = false;
    bool host = false;
    bool started = false;
    bool connected = false;
    int total_move = 0;
    QTime time_;
    Board board;
    QVector<ClickableLabel*> station;
    QVector<int> ch_log;


    void gen_piece(int seed);
    bool check_format(QString ip);
    bool in_rail(int pre, int next);
    bool rail_move(int now, int pre, int next);
    bool findpath(int pre, int next);
    void replace(int now, ClickableLabel* next);
    void remove(int pos);
    void move(int now, ClickableLabel* next);
    bool trap(int ps);
    void change_turn();
    void decide_side(int now);
    void decide_side_opp(int now);
    void result();

public slots:
    void piece_move(int ps, ClickableLabel* lbl);
    void piece_move_Opp(int ps, ClickableLabel* lbl);
    void updatetimer();
    void start();
    void start_client(int seed);
    void forfeit();
    void default_(int ds);
    void initServer();
    void acceptConnection();
    void connectHost();
    void recvInput();
    void sendInput(QString msg);
    void disconnect_();

private:
    Ui::MainWindow *ui;
    QTimer* timer;
    QTcpServer *listenSocket;
    QTcpSocket *rwSocket;


};
#endif // MAINWINDOW_H
