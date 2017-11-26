/*
* Player.h
* Itay Hassid
*
*/
#ifndef Player_H_
#define Player_H_

#include <vector>
#include "GlobalDef.h"
#include "Path.h"

using namespace std;

class Player {
public:
    //Player();
    Player(int playerSign) { sign = playerSign;};
    //virtual ~Player() {};
    virtual Point getPoint(vector<Path> paths) = 0;
    virtual int getSign() = 0;
//private:
   // virtual void printOptions(vector<Path> paths) const = 0;
protected:
    int sign;
};


#endif //Player_H_
