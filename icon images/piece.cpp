#include "piece.h"

Piece::Piece(const int& clr, const int& rk)
{
    colour = clr;
    rank = rk;
    pos = 0;
    show = false;
    safe = false;

    if(colour == 0){
        switch (rank)
        {
        case 0:
            icon = QPixmap(":/new/prefix1/Bflag.png");
            safe = true;
            break;
        case 1:
            icon = QPixmap(":/new/prefix1/Bgongbing.png");
            break;
        case 2:
            icon = QPixmap(":/new/prefix1/Bpaizhang.png");
            break;
        case 3:
            icon = QPixmap(":/new/prefix1/Blianzhang.png");
            break;
        case 4:
            icon = QPixmap(":/new/prefix1/Byingzhang.png");
            break;
        case 5:
            icon = QPixmap(":/new/prefix1/Btuanzhang.png");
            break;
        case 6:
            icon = QPixmap(":/new/prefix1/Blvzhang.png");
            break;
        case 7:
            icon = QPixmap(":/new/prefix1/Bshizhang.png");
            break;
        case 8:
            icon = QPixmap(":/new/prefix1/Bjunzhang.png");
            break;
        case 9:
            icon = QPixmap(":/new/prefix1/Bsiling.png");
            break;
        case 10:
            icon = QPixmap(":/new/prefix1/Bmine.png");
            break;
        case 11:
            icon = QPixmap(":/new/prefix1/Bzhadan.png");
            break;
        }
    }
    else if (colour == 1){
        switch (rank)
        {
        case 0:
            icon = QPixmap(":/new/prefix1/Rflag.png");
            safe = true;
            break;
        case 1:
            icon = QPixmap(":/new/prefix1/Rgongbing.png");
            break;
        case 2:
            icon = QPixmap(":/new/prefix1/Rpaizhang.png");
            break;
        case 3:
            icon = QPixmap(":/new/prefix1/Rlianzhang.png");
            break;
        case 4:
            icon = QPixmap(":/new/prefix1/Ryingzhang.png");
            break;
        case 5:
            icon = QPixmap(":/new/prefix1/Rtuanzhang.png");
            break;
        case 6:
            icon = QPixmap(":/new/prefix1/Rlvzhang.png");
            break;
        case 7:
            icon = QPixmap(":/new/prefix1/Rshizhang.png");
            break;
        case 8:
            icon = QPixmap(":/new/prefix1/Rjunzhang.png");
            break;
        case 9:
            icon = QPixmap(":/new/prefix1/Rsiling.png");
            break;
        case 10:
            icon = QPixmap(":/new/prefix1/Rmine.png");
            break;
        case 11:
            icon = QPixmap(":/new/prefix1/Rzhadan.png");
            break;
        }
    }
}
