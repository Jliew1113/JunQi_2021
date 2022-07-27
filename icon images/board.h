#ifndef BOARD_H
#define BOARD_H

#include "piece.h"
#include <QVector>

class Board
{
public:
    QVector <Piece*> bd;

    Board();

    QVector<QVector<int>> Adj;
    QVector<QVector<int>> rail;
    QVector<QVector<int>> adj;
};

#endif // BOARD_H
