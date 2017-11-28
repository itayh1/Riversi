//
// Created by Itay Hassid.
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
    void printMovePlayed(Point &p);
private:
    //int min(int num1, int )
};


#endif //REVERSIADVANCED_COMPLAYER_H
