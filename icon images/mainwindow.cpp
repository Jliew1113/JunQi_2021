#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->blue->setVisible(false);
    ui->red->setVisible(false);
    ui->timeremain->setVisible(false);
    ui->error->setVisible(false);
    ui->error_2->setVisible(false);
    ui->select->setVisible(false);
    ui->turn->setVisible(false);
    ui->count->setVisible(false);
    ui->move->setVisible(false);
    ui->count_2->setVisible(false);
    ui->lives->setVisible(false);
    ui->tt1->setFrameStyle(QFrame::NoFrame);
    ui->tt2->setFrameStyle(QFrame::NoFrame);

    station.push_back(new ClickableLabel());
    station.push_back(ui->label_1);
    station.push_back(ui->label_2);
    station.push_back(ui->label_3);
    station.push_back(ui->label_4);
    station.push_back(ui->label_5);
    station.push_back(ui->label_6);
    station.push_back(ui->label_7);
    station.push_back(ui->label_8);
    station.push_back(ui->label_9);
    station.push_back(ui->label_10);
    station.push_back(ui->label_11);
    station.push_back(ui->label_12);
    station.push_back(ui->label_13);
    station.push_back(ui->label_14);
    station.push_back(ui->label_15);
    station.push_back(ui->label_16);
    station.push_back(ui->label_17);
    station.push_back(ui->label_18);
    station.push_back(ui->label_19);
    station.push_back(ui->label_20);
    station.push_back(ui->label_21);
    station.push_back(ui->label_22);
    station.push_back(ui->label_23);
    station.push_back(ui->label_24);
    station.push_back(ui->label_25);
    station.push_back(ui->label_26);
    station.push_back(ui->label_27);
    station.push_back(ui->label_28);
    station.push_back(ui->label_29);
    station.push_back(ui->label_30);
    station.push_back(ui->label_31);
    station.push_back(ui->label_32);
    station.push_back(ui->label_33);
    station.push_back(ui->label_34);
    station.push_back(ui->label_35);
    station.push_back(ui->label_36);
    station.push_back(ui->label_37);
    station.push_back(ui->label_38);
    station.push_back(ui->label_39);
    station.push_back(ui->label_40);
    station.push_back(ui->label_41);
    station.push_back(ui->label_42);
    station.push_back(ui->label_43);
    station.push_back(ui->label_44);
    station.push_back(ui->label_45);
    station.push_back(ui->label_46);
    station.push_back(ui->label_47);
    station.push_back(ui->label_48);
    station.push_back(ui->label_49);
    station.push_back(ui->label_50);
    station.push_back(ui->label_51);
    station.push_back(ui->label_52);
    station.push_back(ui->label_53);
    station.push_back(ui->label_54);
    station.push_back(ui->label_55);
    station.push_back(ui->label_56);
    station.push_back(ui->label_57);
    station.push_back(ui->label_58);
    station.push_back(ui->label_59);
    station.push_back(ui->label_60);

    ch_log.push_back(2);
    ch_log.push_back(2);

    connect(ui->actionCreate_Connection, SIGNAL(triggered()), this, SLOT(initServer()));
    connect(ui->actionConnect_to_Server, SIGNAL(triggered()), this, SLOT(connectHost()));
    connect(ui->actionStart, SIGNAL(triggered()), this, SLOT(start()));
    connect(ui->actionForfeit, SIGNAL(triggered()), this, SLOT(forfeit()));
    connect(ui->actionRefresh, &QAction::triggered, this, [&](){this->default_(0);});

    connect(ui->label_1, &ClickableLabel::clicked, this, [&](){
        this->piece_move(1, ui->label_1);
    });
    connect(ui->label_2, &ClickableLabel::clicked, this, [&](){
        this->piece_move(2, ui->label_2);
    });
    connect(ui->label_3, &ClickableLabel::clicked, this, [&](){
        this->piece_move(3, ui->label_3);
    });
    connect(ui->label_4, &ClickableLabel::clicked, this, [&](){
        this->piece_move(4, ui->label_4);
    });
    connect(ui->label_5, &ClickableLabel::clicked, this, [&](){
        this->piece_move(5, ui->label_5);
    });
    connect(ui->label_6, &ClickableLabel::clicked, this, [&](){
        this->piece_move(6, ui->label_6);
    });
    connect(ui->label_7, &ClickableLabel::clicked, this, [&](){
        this->piece_move(7, ui->label_7);
    });
    connect(ui->label_8, &ClickableLabel::clicked, this, [&](){
        this->piece_move(8, ui->label_8);
    });
    connect(ui->label_9, &ClickableLabel::clicked, this, [&](){
        this->piece_move(9, ui->label_9);
    });
    connect(ui->label_10, &ClickableLabel::clicked, this, [&](){
        this->piece_move(10, ui->label_10);
    });
    connect(ui->label_11, &ClickableLabel::clicked, this, [&](){
        this->piece_move(11, ui->label_11);
    });
    connect(ui->label_12, &ClickableLabel::clicked, this, [&](){
        this->piece_move(12, ui->label_12);
    });
    connect(ui->label_13, &ClickableLabel::clicked, this, [&](){
        this->piece_move(13, ui->label_13);
    });
    connect(ui->label_14, &ClickableLabel::clicked, this, [&](){
        this->piece_move(14, ui->label_14);
    });
    connect(ui->label_15, &ClickableLabel::clicked, this, [&](){
        this->piece_move(15, ui->label_15);
    });
    connect(ui->label_16, &ClickableLabel::clicked, this, [&](){
        this->piece_move(16, ui->label_16);
    });
    connect(ui->label_17, &ClickableLabel::clicked, this, [&](){
        this->piece_move(17, ui->label_17);
    });
    connect(ui->label_18, &ClickableLabel::clicked, this, [&](){
        this->piece_move(18, ui->label_18);
    });
    connect(ui->label_19, &ClickableLabel::clicked, this, [&](){
        this->piece_move(19, ui->label_19);
    });
    connect(ui->label_20, &ClickableLabel::clicked, this, [&](){
        this->piece_move(20, ui->label_20);
    });
    connect(ui->label_21, &ClickableLabel::clicked, this, [&](){
        this->piece_move(21, ui->label_21);
    });
    connect(ui->label_22, &ClickableLabel::clicked, this, [&](){
        this->piece_move(22, ui->label_22);
    });
    connect(ui->label_23, &ClickableLabel::clicked, this, [&](){
        this->piece_move(23, ui->label_23);
    });
    connect(ui->label_24, &ClickableLabel::clicked, this, [&](){
        this->piece_move(24, ui->label_24);
    });
    connect(ui->label_25, &ClickableLabel::clicked, this, [&](){
        this->piece_move(25, ui->label_25);
    });
    connect(ui->label_26, &ClickableLabel::clicked, this, [&](){
        this->piece_move(26, ui->label_26);
    });
    connect(ui->label_27, &ClickableLabel::clicked, this, [&](){
        this->piece_move(27, ui->label_27);
    });
    connect(ui->label_28, &ClickableLabel::clicked, this, [&](){
        this->piece_move(28, ui->label_28);
    });
    connect(ui->label_29, &ClickableLabel::clicked, this, [&](){
        this->piece_move(29, ui->label_29);
    });
    connect(ui->label_30, &ClickableLabel::clicked, this, [&](){
        this->piece_move(30, ui->label_30);
    });
    connect(ui->label_31, &ClickableLabel::clicked, this, [&](){
        this->piece_move(31, ui->label_31);
    });
    connect(ui->label_32, &ClickableLabel::clicked, this, [&](){
        this->piece_move(32, ui->label_32);
    });
    connect(ui->label_33, &ClickableLabel::clicked, this, [&](){
        this->piece_move(33, ui->label_33);
    });
    connect(ui->label_34, &ClickableLabel::clicked, this, [&](){
        this->piece_move(34, ui->label_34);
    });
    connect(ui->label_35, &ClickableLabel::clicked, this, [&](){
        this->piece_move(35, ui->label_35);
    });
    connect(ui->label_36, &ClickableLabel::clicked, this, [&](){
        this->piece_move(36, ui->label_36);
    });
    connect(ui->label_37, &ClickableLabel::clicked, this, [&](){
        this->piece_move(37, ui->label_37);
    });
    connect(ui->label_38, &ClickableLabel::clicked, this, [&](){
        this->piece_move(38, ui->label_38);
    });
    connect(ui->label_39, &ClickableLabel::clicked, this, [&](){
        this->piece_move(39, ui->label_39);
    });
    connect(ui->label_40, &ClickableLabel::clicked, this, [&](){
        this->piece_move(40, ui->label_40);
    });
    connect(ui->label_41, &ClickableLabel::clicked, this, [&](){
        this->piece_move(41, ui->label_41);
    });
    connect(ui->label_42, &ClickableLabel::clicked, this, [&](){
        this->piece_move(42, ui->label_42);
    });
    connect(ui->label_43, &ClickableLabel::clicked, this, [&](){
        this->piece_move(43, ui->label_43);
    });
    connect(ui->label_44, &ClickableLabel::clicked, this, [&](){
        this->piece_move(44, ui->label_44);
    });
    connect(ui->label_45, &ClickableLabel::clicked, this, [&](){
        this->piece_move(45, ui->label_45);
    });
    connect(ui->label_46, &ClickableLabel::clicked, this, [&](){
        this->piece_move(46, ui->label_46);
    });
    connect(ui->label_47, &ClickableLabel::clicked, this, [&](){
        this->piece_move(47, ui->label_47);
    });
    connect(ui->label_48, &ClickableLabel::clicked, this, [&](){
        this->piece_move(48, ui->label_48);
    });
    connect(ui->label_49, &ClickableLabel::clicked, this, [&](){
        this->piece_move(49, ui->label_49);
    });
    connect(ui->label_50, &ClickableLabel::clicked, this, [&](){
        this->piece_move(50, ui->label_50);
    });
    connect(ui->label_51, &ClickableLabel::clicked, this, [&](){
        this->piece_move(51, ui->label_51);
    });
    connect(ui->label_52, &ClickableLabel::clicked, this, [&](){
        this->piece_move(52, ui->label_52);
    });
    connect(ui->label_53, &ClickableLabel::clicked, this, [&](){
        this->piece_move(53, ui->label_53);
    });
    connect(ui->label_54, &ClickableLabel::clicked, this, [&](){
        this->piece_move(54, ui->label_54);
    });
    connect(ui->label_55, &ClickableLabel::clicked, this, [&](){
        this->piece_move(55, ui->label_55);
    });
    connect(ui->label_56, &ClickableLabel::clicked, this, [&](){
        this->piece_move(56, ui->label_56);
    });
    connect(ui->label_57, &ClickableLabel::clicked, this, [&](){
        this->piece_move(57, ui->label_57);
    });
    connect(ui->label_58, &ClickableLabel::clicked, this, [&](){
        this->piece_move(58, ui->label_58);
    });
    connect(ui->label_59, &ClickableLabel::clicked, this, [&](){
        this->piece_move(59, ui->label_59);
    });
    connect(ui->label_60, &ClickableLabel::clicked, this, [&](){
        this->piece_move(60, ui->label_60);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initServer(){
    Create* popup = new Create();

    QString localHostName = QHostInfo::localHostName();
    QHostInfo info = QHostInfo::fromName(localHostName);

    QString servIP;
    foreach(QHostAddress address,info.addresses())
    {
        if(address.protocol() == QAbstractSocket::IPv4Protocol)
            servIP = address.toString();
    }
    popup->setIP(servIP);
    popup->exec();

    if(popup->create){
        this->listenSocket = new QTcpServer;
        this->listenSocket->listen(QHostAddress::Any,8888);
        host = true;

        connect(this->listenSocket,SIGNAL(newConnection()),this, SLOT(acceptConnection()));
    }

}

void MainWindow::connectHost(){
    Connect* popup = new Connect();
    popup->exec();

    QString ip = popup->text;

    if(ip != " "){
        this->rwSocket = new QTcpSocket();
        this->rwSocket->connectToHost(QHostAddress(ip),8888);
        QObject::connect(this->rwSocket,SIGNAL(readyRead()),this,SLOT(recvInput()));
        connect(ui->actionStart, SIGNAL(triggered()), this, SLOT(start()));
        connect(ui->actionDisconnect, SIGNAL(triggered()), this, SLOT(disconnect_()));
        connected = true;
    }
}

void MainWindow::acceptConnection(){
    this->rwSocket = this->listenSocket->nextPendingConnection();
    connect(this->rwSocket, SIGNAL(readyRead()), this, SLOT(recvInput()));
    connect(ui->actionDisconnect, SIGNAL(triggered()), this, SLOT(disconnect_()));
    connected = true;
}

void MainWindow::recvInput()
{
    QString msg;
    int ps = 0;
    msg = this->rwSocket->readAll();

    if(msg.length() > 5){
        if(msg == "forfeit"){
            opp_life = 0;
            result();
        }
        else if(msg == "disconnect"){
            timer->stop();
            if(host){
                this->rwSocket->disconnectFromHost();
                this->listenSocket->close();
                host = false;
            }
            else{
                this->rwSocket->disconnectFromHost();
            }
            Disconnect* dc = new Disconnect();
            dc->opp();
            dc->exec();
            default_(1);
        }
        else{
            msg.remove(0, 5);
            ps = msg.toInt();
            start_client(ps);
        }

    }
    else{
        ps = msg.toInt();
        piece_move_Opp(ps, station[ps]);
    }
}

void MainWindow::sendInput(QString msg)
{
    QByteArray *array =new QByteArray;
    array->clear();
    array->append(msg.toUtf8());
    this->rwSocket->write(array->data());
}

void MainWindow::disconnect_()
{
    Disconnect* dc = new Disconnect();
    dc->exec();

    if(dc->sure){
        dc->close();
        timer->stop();
        sendInput("disconnect");

        if (this->rwSocket->waitForDisconnected(3000)){
            if(host){
                this->rwSocket->disconnectFromHost();
                this->listenSocket->close();
                host = false;
            }
            else{
                this->rwSocket->disconnectFromHost();
            }
            Disconnect* dc1 = new Disconnect();
            dc1->opp();
            dc1->exec();
            default_(1);
        }

    }
}

void MainWindow::updatetimer()
{
    time_ = time_.addSecs(-1);
    ui->countdown->setText(time_.toString("ss"));

    if(time_ == QTime(0, 0, 0)){

        if(chosen != 0){
            station[board.bd[chosen - 1]->pos]->setStyleSheet("border: none");
            station[board.bd[chosen - 1]->pos]->repaint();
        }

        timer->stop();
        ui->selectimage->setPixmap(QPixmap());
        ui->select->setVisible(false);
        ui->error_2->setVisible(true);
        QTimer::singleShot(800, ui->error_2, &QLabel::hide);
        time_.setHMS(0,0,21);

        if(turn == side){
            life--;
            ui->count_2->setText(QString::number(life));
            ui->count_2->repaint();
        }
        else{
            opp_life--;
        }
        timer->start();
        ui->turn->setVisible(false);
        change_turn();
        total_move++;
        ui->count->setText(QString::number(total_move));
        ui->count->repaint();
        result();
        chosen = 0;        
    }
}

void MainWindow::start()
{
    started = true;

    timer = new QTimer();
    time_.setHMS(0,0,20);
    ui->timeremain->setVisible(true);
    ui->countdown->setVisible(true);
    ui->countdown->setStyleSheet("QLabel{color:white;}");
    ui->countdown->setText(time_.toString("ss"));
    connect(timer, SIGNAL(timeout()), this, SLOT(updatetimer()));
    timer->start(1000);

    ui->tt1->setVisible(false);
    ui->tt2->setVisible(false);
    ui->count->setStyleSheet("QLabel{color:white;}");
    ui->count->setVisible(true);
    ui->count->setText(QString::number(total_move));
    ui->count_2->setStyleSheet("QLabel{color:white;}");
    ui->count_2->setVisible(true);
    ui->count_2->setText(QString::number(life));
    ui->lives->setVisible(true);
    ui->move->setVisible(true);

    srand(time(NULL));

    int seed = rand();
    if((seed % 2) == 0){
        side = 0;
    }
    else{
        side = 1;
    }

    if(turn == side){
        ui->turn->setVisible(true);
    }

    if(connected){
        QString msg = "start";
        msg += QString::number(seed);
        sendInput(msg);
    }
    gen_piece(seed);

    disconnect(ui->actionStart, SIGNAL(triggered()), this, SLOT(start()));
}

void MainWindow::start_client(int seed)
{
    started = true;

    timer = new QTimer();
    time_.setHMS(0,0,20);
    ui->timeremain->setVisible(true);
    ui->countdown->setVisible(true);
    ui->countdown->setStyleSheet("QLabel{color:white;}");
    ui->countdown->setText(time_.toString("ss"));
    connect(timer, SIGNAL(timeout()), this, SLOT(updatetimer()));
    timer->start(1000);

    ui->tt1->setVisible(false);
    ui->tt2->setVisible(false);
    ui->count->setStyleSheet("QLabel{color:white;}");
    ui->count->setVisible(true);
    ui->count->setText(QString::number(total_move));
    ui->count_2->setStyleSheet("QLabel{color:white;}");
    ui->count_2->setVisible(true);
    ui->count_2->setText(QString::number(life));
    ui->lives->setVisible(true);
    ui->move->setVisible(true);

    if((seed % 2) == 0){
        side = 1;
    }
    else{
        side = 0;
    }

    if(turn == side){
        ui->turn->setVisible(true);
    }

    gen_piece(seed);
    disconnect(ui->actionStart, SIGNAL(triggered()), this, SLOT(start()));
}

void MainWindow::forfeit()
{
    if(total_move >= 20){
        Forfeit* f = new Forfeit();
        f->exec();

        if(f->sure){
            timer->stop();
            sendInput("forfeit");
            life = 0;
            result();
        }
    }
    else{
        ui->error->setVisible(true);
        QTimer::singleShot(500, ui->error, &QLabel::hide);
    }
}

void MainWindow::gen_piece(int seed)
{
    for(int i = 1; i <= 50; i++){
        station[i]->setPixmap(QPixmap(":/new/prefix1/hide.png"));
    }

    srand (seed);

    QVector<int> log;
    QVector<int>::iterator it;
    for (int i = 0; i < 50; i++) {
        log.push_back(i + 1);
    }

    for (int i = 0; i < 50; i++){
        int index = rand() % (50 - i);

        board.bd[i]->pos = log[index];

        it = log.begin() + (index);
        log.erase(it);
    }
}

void MainWindow::change_turn()
{
    if (turn){
        turn = 0;
    }
    else{
        turn = 1;
    }

    if(turn == side){
        ui->turn->setVisible(true);
    }
}

void MainWindow::decide_side(int now)
{
    if(*(ch_log.end() - 2) == board.bd[now]->colour){
        side = board.bd[now]->colour;

        if(board.bd[now]->colour){
            ui->red->setVisible(true);
        }
        else{
            ui->blue->setVisible(true);
        }
        turn = side;
        decide = true;
    }
    else{
        ch_log.push_back(board.bd[now]->colour);
    }
}

void MainWindow::decide_side_opp(int now)
{
    if(*(ch_log.end() - 2) == board.bd[now]->colour){

        if(board.bd[now]->colour){
            ui->blue->setVisible(true);
            side = 0;
            turn = 1;
        }
        else{
            ui->red->setVisible(true);
            side = 1;
            turn = 0;
        }
        decide = true;
    }
    else{
        ch_log.push_back(board.bd[now]->colour);
    }
}

bool MainWindow::trap(int ps)
{
    int curr = board.bd[ps]->pos;
    bool trap = true;
    QVector<int>::iterator it;

    for(it = board.adj[curr].begin(); it < board.adj[curr].end(); it++){
        bool empty = true;
        for (int i = 0; i < 50; i++){
            if(i == ps) continue;

            if(board.bd[i]->pos == *it){
                empty = false;
                if(board.bd[i]->colour != board.bd[ps]->colour){
                    if(board.bd[i]->safe == false){
                        if(board.bd[i]->rank == 11){
                            trap = false;
                            return trap;
                        }
                        else if(board.bd[i]->rank == 10 && board.bd[ps]->rank == 1){
                             trap = false;
                             return trap;
                        }
                        else if(board.bd[i]->rank <= board.bd[ps]->rank){
                            trap = false;
                            return trap;
                        }
                        break;
                    }

                }

            }
        }
        if (empty){
            trap = false;
            return trap;
        }
    }
    return trap;
}

void MainWindow::result()
{
    int win = 3;
    if (life == 0){
        Result* final = new Result();
        final->rslt(0);
        final->exec();
        timer->stop();
        if(final){
            default_(0);
        }
    }
    else if(opp_life == 0){
        Result* final = new Result();
        final->rslt(1);
        final->exec();
        timer->stop();
        if(final){
            default_(0);
        }
    }

    else{
        if(board.bd[0]->pos == 0){
            win = 1;
        }
        else if(board.bd[25]->pos == 0){
            win = 0;
        }
        else{
            int B_valid = 21;
            int R_valid = 21;

            for (int i = 1; i < 25; i++){
                if(board.bd[i]->rank == 10) continue;

                if(board.bd[i]->pos == 0){
                    B_valid--;
                }
                else{
                    if(trap(i)){
                        B_valid--;
                    }
                }

            }
            for (int i = 26; i < 50; i++){
                if(board.bd[i]->rank == 10) continue;

                if(board.bd[i]->pos == 0){
                    R_valid--;
                }
                else{
                    if(trap(i)){
                        R_valid--;
                    }
                }
            }
            if(B_valid == 0){
                win = 1;
            }
            else if(R_valid == 0){
                win = 0;
            }
        }
    }

    if(win != 3){
        if (win == side){
            timer->stop();
            Result* final = new Result();
            final->rslt(1);
            final->exec();
            if(final){
                default_(0);
            }
        }
        else if(win != side){
            timer->stop();
            Result* final = new Result();
            final->rslt(0);
            final->exec();
            if(final){
                default_(0);
            }
        }
    }
}

void MainWindow::default_(int ds)
{
    timer->stop();
    time_.setHMS(1, 0, 0);
    ui->timeremain->setVisible(false);
    ui->countdown->setVisible(false);
    ui->blue->setVisible(false);
    ui->red->setVisible(false);
    ui->error->setVisible(false);
    ui->error_2->setVisible(false);
    ui->select->setVisible(false);
    ui->turn->setVisible(false);
    ui->count->setVisible(false);
    ui->move->setVisible(false);
    ui->count_2->setVisible(false);
    ui->lives->setVisible(false);
    ui->tt1->setVisible(true);
    ui->tt2->setVisible(true);

    for(int i = 1; i <= 60; i++){
        station[i]->setPixmap(QPixmap());
    }
    for(int i = 0; i < 50; i++){
        board.bd[i]->show = false;
        board.bd[i]->safe = false;
        if(board.bd[i]->rank == 0){
            board.bd[i]->safe = true;
        }
    }
    ch_log.clear();
    ch_log.push_back(2);
    ch_log.push_back(2);

    side = 2;
    turn = 0;
    life = 3;
    opp_life = 3;
    mine = 3;
    opp_mine = 3;
    decide = false;
    started = false;
    chosen = 0;
    total_move = 0;

    connect(ui->actionStart, SIGNAL(triggered()), this, SLOT(start()));

    if(ds == 1){
       connected = false;
       disconnect(ui->actionDisconnect, SIGNAL(triggered()), this, SLOT(disconnect_()));
    }
}

bool MainWindow::in_rail(int pre, int next)
{
    bool init = false;
    for (int i = 0; i < 32; i++){
        if(board.rail[0][i] == pre){
            for (int j = 0; j < 32; j++){
                if(board.rail[0][j] == next){
                    init = true;
                    break;
                }
            }
            break;
        }
    }
    return init;
}

bool MainWindow::rail_move(int now, int pre, int next)
{
    int r = 0;
    int src = 0;
    int dst = 0;

    if(board.bd[now]->rank == 1){
        if(findpath(pre, next)){
            return true;
        }
        return false;
    }
    else{
        for(int i = 1; i < 8; i++){
            for(int j = 0; j < board.rail[i].size(); j++){
                if((board.rail[i][j] == pre) || (board.rail[i][j] == next)){
                    for(int k = j + 1; k < board.rail[i].size(); k++){
                        if((board.rail[i][k] == pre) || (board.rail[i][k] == next)){
                            r = i;
                            src = j;
                            dst = k;
                            break;
                        }
                    }
                }
            }
        }
        QVector<int>::iterator it;

        for (it = board.rail[r].begin() + src + 1; it < board.rail[r].begin() + dst; it++){
            if(station[*it]->occ){
                return false;
            }
        }
        return true;
    }
}

bool MainWindow::findpath(int pre, int next)
{
    Graph g(61);
    station[pre]->occ = false;
    station[next]->occ = false;

    if(!(station[6]->occ || station[7]->occ)){
        g.addEdge(6, 7);
    }
    if(!(station[7]->occ || station[8]->occ)){
        g.addEdge(7, 8);
    }
    if(!(station[8]->occ || station[9]->occ)){
        g.addEdge(8, 9);
    }
    if(!(station[9]->occ || station[10]->occ)){
        g.addEdge(9, 10);
    }
    if(!(station[10]->occ || station[13]->occ)){
        g.addEdge(10, 13);
    }
    if(!(station[13]->occ || station[17]->occ)){
        g.addEdge(13, 17);
    }
    if(!(station[17]->occ || station[20]->occ)){
        g.addEdge(17, 20);
    }
    if(!(station[20]->occ || station[25]->occ)){
        g.addEdge(20, 25);
    }
    if(!(station[25]->occ || station[50]->occ)){
        g.addEdge(25, 50);
    }
    if(!(station[50]->occ || station[45]->occ)){
        g.addEdge(50, 45);
    }
    if(!(station[45]->occ || station[42]->occ)){
        g.addEdge(45, 42);
    }
    if(!(station[42]->occ || station[38]->occ)){
        g.addEdge(42, 38);
    }
    if(!(station[38]->occ || station[35]->occ)){
        g.addEdge(38, 35);
    }
    if(!(station[35]->occ || station[34]->occ)){
        g.addEdge(35, 34);
    }
    if(!(station[34]->occ || station[33]->occ)){
        g.addEdge(34, 33);
    }
    if(!(station[33]->occ || station[32]->occ)){
        g.addEdge(33, 32);
    }
    if(!(station[32]->occ || station[31]->occ)){
        g.addEdge(32, 31);
    }
    if(!(station[31]->occ || station[36]->occ)){
        g.addEdge(31, 36);
    }
    if(!(station[36]->occ || station[39]->occ)){
        g.addEdge(36, 39);
    }
    if(!(station[39]->occ || station[43]->occ)){
        g.addEdge(39, 43);
    }
    if(!(station[43]->occ || station[46]->occ)){
        g.addEdge(43, 46);
    }
    if(!(station[46]->occ || station[21]->occ)){
        g.addEdge(46, 21);
    }
    if(!(station[21]->occ || station[18]->occ)){
        g.addEdge(21, 18);
    }
    if(!(station[18]->occ || station[14]->occ)){
        g.addEdge(18, 14);
    }
    if(!(station[14]->occ || station[11]->occ)){
        g.addEdge(14, 11);
    }
    if(!(station[11]->occ || station[6]->occ)){
        g.addEdge(11, 6);
    }
    if(!(station[21]->occ || station[22]->occ)){
        g.addEdge(21, 22);
    }
    if(!(station[22]->occ || station[23]->occ)){
        g.addEdge(22, 23);
    }
    if(!(station[23]->occ || station[24]->occ)){
        g.addEdge(23, 24);
    }
    if(!(station[24]->occ || station[25]->occ)){
        g.addEdge(24, 25);
    }
    if(!(station[46]->occ || station[47]->occ)){
        g.addEdge(46, 47);
    }
    if(!(station[47]->occ || station[48]->occ)){
        g.addEdge(47, 48);
    }
    if(!(station[48]->occ || station[49]->occ)){
        g.addEdge(48, 49);
    }
    if(!(station[49]->occ || station[50]->occ)){
        g.addEdge(49, 50);
    }
    if(!(station[23]->occ || station[48]->occ)){
        g.addEdge(23, 48);
    }

    station[pre]->occ = true;
    station[next]->occ = true;

    return(g.isReachable(pre, next));
}

void MainWindow::replace(int now, ClickableLabel* nextp)
{
    int lbl = 0;
    int next = 51;
    for ( int i = 1; i <= 60; i++){
        if (station[i] == nextp){
            for ( int j = 0; j < 50; j++){
                if (board.bd[j]->pos == i){
                    next = j;
                    break;
                }
            }
            lbl = i;
            break;
        }
    }
    if(next == 51){
        if(lbl > 50 && board.bd[now]->pos <= 50){
            board.bd[now]->safe = true;
            nextp->setPixmap(board.bd[now]->icon);
            nextp->occ = true;
            station[board.bd[now]->pos]->setPixmap(QPixmap());
            station[board.bd[now]->pos]->occ = false;
        }
        else if(lbl <= 50 && board.bd[now]->pos > 50){
            board.bd[now]->safe = false;
            nextp->setPixmap(board.bd[now]->icon);
            nextp->occ = true;
            station[board.bd[now]->pos]->setPixmap(QPixmap());
            station[board.bd[now]->pos]->occ = false;
        }
        else if(lbl > 50 && board.bd[now]->pos > 50){
            nextp->setPixmap(board.bd[now]->icon);
            nextp->occ = true;
            station[board.bd[now]->pos]->setPixmap(QPixmap());
            station[board.bd[now]->pos]->occ = false;
        }
        else{
            nextp->setPixmap(board.bd[now]->icon);
            nextp->occ = true;
            station[board.bd[now]->pos]->setPixmap(QPixmap());
            station[board.bd[now]->pos]->occ = false;
        }
        board.bd[now]->pos = lbl;

        timer->stop();
        time_.setHMS(0,0,21);
        timer->start();
        total_move++;
        ui->turn->setVisible(false);
        change_turn();
    }

    else{
        if (!board.bd[next]->show){
            ui->error->setVisible(true);
            QTimer::singleShot(500, ui->error, &QLabel::hide);
            return;
        }
        if (board.bd[now]->pos == board.bd[next]->pos){
            return;
        }
        if (board.bd[now]->colour == board.bd[next]->colour){
            ui->error->setVisible(true);
            QTimer::singleShot(500, ui->error, &QLabel::hide);
            return;
        }

        if(!board.bd[next]->safe){
            if (board.bd[now]->rank == 11 || board.bd[next]->rank == 11 || (board.bd[now]->rank == board.bd[next]->rank)){
                station[board.bd[next]->pos]->setPixmap(QPixmap());
                nextp->occ = false;
                station[board.bd[now]->pos]->setPixmap(QPixmap());
                station[board.bd[now]->pos]->occ = false;

                if(board.bd[next]->rank == 10){
                    if(board.bd[next]->colour == side){
                        mine--;
                    }
                    else{
                        opp_mine--;
                    }
                }

                if(mine == 0){
                    if(side == 0){
                        board.bd[0]->safe = false;
                    }
                    else if(side == 1){
                        board.bd[25]->safe = false;
                    }
                }
                if(opp_mine == 0){
                    if(side == 0){
                        board.bd[25]->safe = false;
                    }
                    else if(side == 1){
                        board.bd[0]->safe = false;
                    }
                }

                board.bd[now]->pos = 0;
                board.bd[next]->pos = 0;
                board.bd[now]->show = false;
                board.bd[next]->show = false;

                timer->stop();
                time_.setHMS(0,0,21);
                timer->start();
                total_move++;
                ui->count->setText(QString::number(total_move));
                ui->turn->setVisible(false);
                change_turn();
            }
            else if (board.bd[now]->rank == 1 && board.bd[next]->rank == 10){
                nextp->setPixmap(board.bd[now]->icon);
                station[board.bd[now]->pos]->setPixmap(QPixmap());
                station[board.bd[now]->pos]->occ = false;

                if(board.bd[now]->pos > 50){
                    board.bd[now]->safe = false;
                }

                if(board.bd[next]->colour == side){
                    mine--;
                }
                else{
                    opp_mine--;
                }
                if(mine == 0){
                    if(side == 0){
                        board.bd[0]->safe = false;
                    }
                    else if(side == 1){
                        board.bd[25]->safe = false;
                    }
                }
                if(opp_mine == 0){
                    if(side == 0){
                        board.bd[25]->safe = false;
                    }
                    else if(side == 1){
                        board.bd[0]->safe = false;
                    }
                }

                board.bd[now]->pos = board.bd[next]->pos;
                board.bd[next]->pos = 0;
                board.bd[next]->show = false;

                timer->stop();
                time_.setHMS(0,0,21);
                timer->start();
                total_move++;
                ui->turn->setVisible(false);
                change_turn();
            }
            else if(board.bd[now]->rank > board.bd[next]->rank) {
                nextp->setPixmap(board.bd[now]->icon);
                station[board.bd[now]->pos]->setPixmap(QPixmap());
                station[board.bd[now]->pos]->occ = false;

                if(board.bd[now]->pos > 50){
                    board.bd[now]->safe = false;
                }

                board.bd[now]->pos = board.bd[next]->pos;
                board.bd[next]->pos = 0;
                board.bd[next]->show = false;

                if(board.bd[next]->rank == 10){
                    if(board.bd[next]->colour == side){
                        mine--;
                        if(!mine){
                            if(board.bd[next]->colour == 0){
                                board.bd[0]->safe = false;
                            }
                            else {
                                board.bd[25]->safe = false;
                            }
                        }
                    }
                }

                timer->stop();
                time_.setHMS(0,0,21);
                timer->start();
                total_move++;
                ui->turn->setVisible(false);
                change_turn();
            }
            else{
                ui->error->setVisible(true);
                QTimer::singleShot(500, ui->error, &QLabel::hide);
                return;
            }
        }
        else{
            ui->error->setVisible(true);
            QTimer::singleShot(500, ui->error, &QLabel::hide);
            return;
        }
    }
}

void MainWindow::move(int now, ClickableLabel *nextp)
{
    int pre = board.bd[now]->pos;
    int next = 0;
    for ( int i = 1; i <= 60; i++){
        if (station[i] == nextp){
            next = i;
            break;
        }
    }
    int len = board.Adj[pre].size();
    if(board.bd[now]->rank == 1){
        if(in_rail(pre, next)){
            if(!rail_move(now, pre, next)){
                ui->error->setVisible(true);
                QTimer::singleShot(500, ui->error, &QLabel::hide);
                return;
            }
            replace(now, nextp);
            return;
        }
        else{
            for(int i = 0; i < len; i++){
                if(board.Adj[pre][i] == next){
                    replace(now, nextp);
                    return;
                }
            }
        }
    }
    else{
        for(int i = 0; i < len; i++){
            if(board.Adj[pre][i] == next){
                if(in_rail(pre, next)){
                    if(!rail_move(now, pre, next)){
                        ui->error->setVisible(true);
                        QTimer::singleShot(500, ui->error, &QLabel::hide);
                        return;
                    }
                }
                replace(now, nextp);
                return;
            }
        }
    }
    ui->error->setVisible(true);
    QTimer::singleShot(500, ui->error, &QLabel::hide);
    return;
}

void MainWindow::piece_move(int ps, ClickableLabel *lbl)
{
    if(!started) return;

    if(turn != side){
        ui->error->setVisible(true);
        QTimer::singleShot(500, ui->error, &QLabel::hide);
        return;
    }

    if(connected){
        QString msg = QString::number(ps);
        sendInput(msg);
    }

    int now = 61;
    for ( int i = 0; i < 50; i++){
        if (board.bd[i]->pos == ps){
            now = i;
            break;
        }
    }

    if(chosen != 0 && decide == true){
        station[board.bd[chosen - 1]->pos]->setStyleSheet("border: none");
        move(chosen - 1, lbl);
        chosen = 0;
    }

    else{
        if(now == 61){
            return;
        }
        if (!board.bd[now]->show){

            lbl->setPixmap(board.bd[now]->icon);
            board.bd[now]->show = true;

            if(!decide){
                decide_side(now);
            }

            total_move++;
            ui->turn->setVisible(false);
            change_turn();

            timer->stop();
            time_.setHMS(0,0,20);
            ui->countdown->setText(time_.toString("ss"));
            timer->start();
        }
        else if(board.bd[now]->show){
            if(board.bd[now]->colour != turn){
                ui->error->setVisible(true);
                QTimer::singleShot(500, ui->error, &QLabel::hide);
                return;
            }

            if (board.bd[now]->rank == 0 || board.bd[now]->rank == 10){
                ui->error->setVisible(true);
                QTimer::singleShot(500, ui->error, &QLabel::hide);
                return;
            }
            chosen = now + 1;
        }
    }

    if(chosen){
        lbl->setStyleSheet("border: 3px solid yellow");
        ui->selectimage->setPixmap(board.bd[chosen - 1]->icon);
        ui->select->setVisible(true);
    }
    else{
        ui->selectimage->setPixmap(QPixmap());
        ui->select->setVisible(false);
    }
    result();
    ui->count->setText(QString::number(total_move));
    ui->count->repaint();
}

void MainWindow::piece_move_Opp(int ps, ClickableLabel *lbl)
{
    if(!started) return;

    int now = 61;
    for ( int i = 0; i < 50; i++){
        if (board.bd[i]->pos == ps){
            now = i;
            break;
        }
    }

    if(chosen != 0 && decide == true){
        station[board.bd[chosen - 1]->pos]->setStyleSheet("border: none");
        move(chosen - 1, lbl);
        chosen = 0;
    }

    else{
        if(now == 61){
            return;
        }
        if (!board.bd[now]->show){

            lbl->setPixmap(board.bd[now]->icon);
            board.bd[now]->show = true;

            if(!decide){
                decide_side_opp(now);
            }

            total_move++;
            ui->turn->setVisible(false);
            change_turn(); 
            timer->stop();
            time_.setHMS(0,0,20);
            ui->countdown->setText(time_.toString("ss"));
            timer->start();
        }
        else if(board.bd[now]->show){
            if(board.bd[now]->colour != turn){
                ui->error->setVisible(true);
                QTimer::singleShot(500, ui->error, &QLabel::hide);
                return;
            }

            if (board.bd[now]->rank == 0 || board.bd[now]->rank == 10){
                ui->error->setVisible(true);
                QTimer::singleShot(500, ui->error, &QLabel::hide);
                return;
            }
            chosen = now + 1;
        }
    }

    if(chosen){
        lbl->setStyleSheet("border: 3px solid yellow");
        ui->selectimage->setPixmap(board.bd[chosen - 1]->icon);
        ui->select->setVisible(true);
    }
    else{
        ui->selectimage->setPixmap(QPixmap());
        ui->select->setVisible(false);
    }
    result();
    ui->count->setText(QString::number(total_move));
    ui->count->repaint();
}
