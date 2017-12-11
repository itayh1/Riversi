//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#ifndef REVERSIADVANCED_COMPLAYER_H
#define REVERSIADVANCED_COMPLAYER_H

#include <iostream>
#include <stdio.h>
#include "GlobalDef.h"
#include "Player.h"
#include "Logic.h"

using namespace std;

class ComPlayer : public Player {
public:
    //Constructor.
    ComPlayer(int sign);
    /**
    * @param paths list of paths
    * @return the the user chose
    */
    Point getPoint(vector<Path> paths, Board board);
    /**
     * @return the the sign ofthe player
     */
    int getSign();
    //print the moved this player played.
    void movePlayed(Point &p);
    void gameEnded();
private:
    //int min(int num1, int )
};


#endif //REVERSIADVANCED_COMPLAYER_H
