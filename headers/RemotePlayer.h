//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#ifndef REMOTEPLAYER_H
#define REMOTEPLAYER_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <sstream>
#include "GlobalDef.h"
#include "Player.h"
#include "Board.h"
#include "Client.h"

using namespace std;

class RemotePlayer : public Player{
public:
    RemotePlayer(Client *cl, int sign);
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

private:
    Client *client;
};


#endif //REMOTEPLAYER_H
