#include "board.h"

Board::Board()
{
    for (int i = 0; i < 2; i++){

        bd.push_back(new Piece(i, 0));

        for (int j = 1; j < 4; j++){
            bd.push_back(new Piece(i, j));
            bd.push_back(new Piece(i, j));
            bd.push_back(new Piece(i, j));
        }

        for (int j = 4; j < 8; j++){
            bd.push_back(new Piece(i, j));
            bd.push_back(new Piece(i, j));
        }

        for (int j = 8; j < 10; j++){
            bd.push_back(new Piece(i,j));
        }

        for (int k = 0; k < 3; k++){
            bd.push_back(new Piece(i,10));
        }

        for (int k = 0; k < 2; k++){
            bd.push_back(new Piece(i,11));
        }
    }

    Adj.push_back({0});

    Adj.push_back({2, 6});
    Adj.push_back({1, 3, 7});
    Adj.push_back({2, 4, 8});
    Adj.push_back({3, 5, 9});
    Adj.push_back({4, 10});

    Adj.push_back({1, 7, 8, 9, 10, 11, 14, 18, 21, 31, 36, 39, 43, 46, 51});
    Adj.push_back({2, 6, 8, 9, 10, 51});
    Adj.push_back({3, 6, 7, 9, 10, 12, 51, 52});
    Adj.push_back({4, 6, 7, 8, 10, 52});
    Adj.push_back({5, 6, 7, 8, 9, 13, 17, 20, 25, 35, 38, 42, 45, 50, 52});

    Adj.push_back({6, 14, 18, 21, 31, 36, 39, 43, 46, 51});
    Adj.push_back({8, 51, 52, 53});
    Adj.push_back({10, 17, 20, 25, 35, 38, 42, 45, 50, 52});

    Adj.push_back({6, 11, 15, 18, 21, 31, 36, 39, 43, 46, 51, 54});
    Adj.push_back({14, 51, 53, 54});
    Adj.push_back({17, 52, 53, 55});
    Adj.push_back({10, 13, 16, 20, 25, 35, 38, 42, 45, 50, 52, 55});

    Adj.push_back({6, 11, 14, 21, 31, 36, 39, 43, 46, 54});
    Adj.push_back({23, 53, 54, 55});
    Adj.push_back({10, 13, 17, 25, 35, 38, 42, 45, 50, 55});

    Adj.push_back({6, 11, 14, 18, 22, 23, 24, 25, 31, 36, 39, 43, 46, 54});
    Adj.push_back({21, 23, 24, 25, 54});
    Adj.push_back({19, 21, 22, 24, 25, 48, 54, 55});
    Adj.push_back({21, 22, 23, 25, 55});
    Adj.push_back({10, 13, 17, 20, 21, 22, 23, 24, 35, 38, 42, 45, 50, 55});
    //////////////////////////////////////////////////////////////////////////
    Adj.push_back({27, 31});
    Adj.push_back({26, 28, 32});
    Adj.push_back({27, 29, 33});
    Adj.push_back({28, 30, 34});
    Adj.push_back({29, 35});

    Adj.push_back({6, 11, 14, 18, 21, 26, 32, 33, 34, 35, 36, 39, 43, 46, 56});
    Adj.push_back({27, 31, 33, 34, 35, 56});
    Adj.push_back({28, 31, 32, 34, 35, 37, 56, 57});
    Adj.push_back({29, 31, 32, 33, 35, 57});
    Adj.push_back({10, 13, 17, 20, 25, 30, 31, 32, 33, 34, 38, 42, 45, 50, 57});

    Adj.push_back({6, 11, 14, 18, 21, 31, 39, 43, 46, 56});
    Adj.push_back({33, 56, 57, 58});
    Adj.push_back({10, 13, 17, 20, 25, 35, 42, 45, 50, 57});

    Adj.push_back({6, 11, 14, 18, 21, 31, 36, 40, 43, 46, 56, 59});
    Adj.push_back({39, 56, 58, 59});
    Adj.push_back({42, 57, 58, 60});
    Adj.push_back({10, 13, 17, 20, 25, 35, 38, 41, 45, 50, 57, 60});

    Adj.push_back({6, 11, 14, 18, 21, 31, 36, 39, 46, 59});
    Adj.push_back({48, 58, 59, 60});
    Adj.push_back({10, 13, 17, 20, 25, 35, 38, 42, 50, 60});

    Adj.push_back({6, 11, 14, 18, 21, 31, 36, 39, 43, 47, 48, 49, 50, 59});
    Adj.push_back({46, 48, 49, 50, 59});
    Adj.push_back({23, 44, 46, 47, 49, 50, 59, 60});
    Adj.push_back({46, 47, 48, 50, 60});
    Adj.push_back({10, 13, 17, 20, 25, 35, 38, 42, 45, 46, 47, 48, 49, 60});
    //////////////////////////////////////////////////////////////////////////
    Adj.push_back({6, 7, 8, 11, 12, 14, 15, 53});
    Adj.push_back({8, 9, 10, 12, 13, 16, 17, 53});
    Adj.push_back({12, 15, 16, 19, 51, 52, 54, 55});
    Adj.push_back({14, 15, 18, 19, 21, 22, 23, 53});
    Adj.push_back({16, 17, 19, 20, 23, 24, 25, 53});

    Adj.push_back({31, 32, 33, 36, 37, 39, 40, 58});
    Adj.push_back({33, 34, 35, 37, 38, 41, 42, 58});
    Adj.push_back({37, 40, 41, 44, 56, 57, 59, 60});
    Adj.push_back({39, 40, 43, 44, 46, 47, 48, 58});
    Adj.push_back({41, 42, 44, 45, 48, 49, 50, 58});
    //////////////////////////////////////////////////////////////

    rail.push_back({6, 7, 8, 9, 10, 11, 13, 14, 17, 18, 20, 21, 22, 23, 24, 25, 31,
                    32, 33, 34 ,35, 36, 38, 39, 42, 43, 45, 46, 47, 48, 49, 50});

    rail.push_back({6, 7, 8, 9, 10});
    rail.push_back({21, 22, 23, 24, 25});
    rail.push_back({31, 32, 33, 34, 35});
    rail.push_back({46, 47, 48, 49, 50});
    rail.push_back({6, 11, 14, 18, 21, 46, 43, 39, 36, 31});
    rail.push_back({10, 13, 17, 20, 25, 50, 45, 42, 38, 35});
    rail.push_back({23, 48});

    /////////////////////////////////////////////////////////////////

    adj.push_back({0});

    adj.push_back({2, 6});
    adj.push_back({1, 3, 7});
    adj.push_back({2, 4, 8});
    adj.push_back({3, 5, 9});
    adj.push_back({4, 10});

    adj.push_back({1, 7, 11, 51});
    adj.push_back({2, 6, 8, 51});
    adj.push_back({3, 7, 9, 12, 51, 52});
    adj.push_back({4, 8, 10, 52});
    adj.push_back({5, 9, 13, 52});

    adj.push_back({6, 14, 51});
    adj.push_back({8, 51, 52, 53});
    adj.push_back({10, 17, 52});

    adj.push_back({11, 15, 18, 51, 54});
    adj.push_back({14, 51, 53, 54});
    adj.push_back({17, 52, 53, 55});
    adj.push_back({13, 16, 20, 52, 55});

    adj.push_back({14, 21, 54});
    adj.push_back({23, 53, 54, 55});
    adj.push_back({17, 25, 55});

    adj.push_back({18, 22, 46, 54});
    adj.push_back({21, 23, 54});
    adj.push_back({19, 22, 24, 48, 54, 55});
    adj.push_back({23, 25, 55});
    adj.push_back({20, 24, 50, 55});
    //////////////////////////////////////////////////////////////////////////
    adj.push_back({27, 31});
    adj.push_back({26, 28, 32});
    adj.push_back({27, 29, 33});
    adj.push_back({28, 30, 34});
    adj.push_back({29, 35});

    adj.push_back({26, 32, 36, 56});
    adj.push_back({27, 31, 33, 56});
    adj.push_back({28, 32, 34, 37, 56, 57});
    adj.push_back({29, 33, 35, 57});
    adj.push_back({30, 34, 38, 57});

    adj.push_back({31, 39, 56});
    adj.push_back({33, 56, 57, 58});
    adj.push_back({35, 42, 57});

    adj.push_back({36, 40, 43, 56, 59});
    adj.push_back({39, 56, 58, 59});
    adj.push_back({42, 57, 58, 60});
    adj.push_back({38, 41, 45, 57, 60});

    adj.push_back({39, 46, 59});
    adj.push_back({48, 58, 59, 60});
    adj.push_back({42, 50, 60});

    adj.push_back({21, 43, 47, 59});
    adj.push_back({46, 48, 59});
    adj.push_back({23, 44, 47, 49, 59, 60});
    adj.push_back({48, 50, 60});
    adj.push_back({25, 45, 49, 60});
    //////////////////////////////////////////////////////////////////////////
    adj.push_back({6, 7, 8, 11, 12, 14, 15, 53});
    adj.push_back({8, 9, 10, 12, 13, 16, 17, 53});
    adj.push_back({12, 15, 16, 19, 51, 52, 54, 55});
    adj.push_back({14, 15, 18, 19, 21, 22, 23, 53});
    adj.push_back({16, 17, 19, 20, 23, 24, 25, 53});

    adj.push_back({31, 32, 33, 36, 37, 39, 40, 58});
    adj.push_back({33, 34, 35, 37, 38, 41, 42, 58});
    adj.push_back({37, 40, 41, 44, 56, 57, 59, 60});
    adj.push_back({39, 40, 43, 44, 46, 47, 48, 58});
    adj.push_back({41, 42, 44, 45, 48, 49, 50, 58});
}


