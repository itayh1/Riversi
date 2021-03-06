/*
* Nadav Gross 206844920
* Itay Hassid 209127596
*
*/
#ifndef Player_H_
#define Player_H_

#include <iostream>
#include <vector>
#include "GlobalDef.h"
#include "Path.h"
#include "Board.h"

using namespace std;

class Player {
public:
    //Player();
    Player(int playerSign) { sign = playerSign;};
    //virtual ~Player() {};
    virtual Point * getPoint(vector<Path> paths, Board board) = 0;
    virtual int getSign() = 0;
    virtual void movePlayed(Point &p) = 0;
    virtual void gameEnded() = 0;
protected:
    int sign;
};


#endif //Player_H_
