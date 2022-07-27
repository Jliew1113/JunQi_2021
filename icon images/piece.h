#ifndef PIECE_H
#define PIECE_H

#include <QObject>
#include <QWidget>
#include "clickablelabel.h"

class Piece: public ClickableLabel
{
    Q_OBJECT
public:
    Piece(const int& clr, const int& rk);

    int pos;
    int rank;
    int colour;
    bool show;
    bool safe;
    QPixmap icon;

    void setpos(const QPoint &pnt);
};

#endif // PIECE_H
