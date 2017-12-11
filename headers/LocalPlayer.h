//
// Nadav Gross 296844920
// Itay Hassid 209127596
//

#ifndef LOCALPLAYER_H
#define LOCALPLAYER_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <limits>
#include <string>
#include "GlobalDef.h"
#include "Player.h"
#include "Board.h"
#include "Client.h"

using namespace std;

class LocalPlayer :  public Player {
public:
    LocalPlayer(Client *cl, int sign);
    /**
    * @param paths list of paths
    * @return the the user chose
    */
    ~LocalPlayer();
    Point getPoint(vector<Path> paths, Board board);
    /**
     * @return the the sign ofthe player
     */
    int getSign();
    //print the moved this player played.
    void movePlayed(Point &p);
    void gameEnded();

private:
    Client *client;
    void printOptions(vector<Path> paths);
};


#endif //LOCALPLAYER_H
