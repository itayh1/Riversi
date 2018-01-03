/*
 * Nadav Gross 206844920
 * Itay Hassid 209127596
 *
 */
#ifndef HumanPlayer_H_
#define HumanPlayer_H_

#include <iostream>
#include <stdio.h>
#include <limits>
#include "GlobalDef.h"
#include "Player.h"
#include "Board.h"

using namespace std;

class HumanPlayer : public Player {
public:
    HumanPlayer(int sign);
   /**
    * @param paths list of paths
    * @return the the user chose
    */
   Point * getPoint(vector<Path> paths, Board board);
    /**
     * @return the the sign ofthe player
     */
    int getSign();
    //print the moved this player played.
    void movePlayed(Point &p);
    void gameEnded();

private:
    /**
     * print the moves the user can make
     * @param paths
     */
    void printOptions(vector<Path> paths);
};
#endif //Player_H_
