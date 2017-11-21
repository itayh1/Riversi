/*
 * HumanPlayer.h
 * Itay Hassid
 *
 */
#ifndef HumanPlayer_H_
#define HumanPlayer_H_

#include <iostream>
#include <stdio.h>
#include <limits>
#include "GlobalDef.h"
#include "Player.h"

using namespace std;

class HumanPlayer : public Player {
public:
    HumanPlayer(int sign);
   /**
    * @param paths list of paths
    * @return the the user chose
    */
    Point getPoint(vector<Path> paths);
    /**
     * @return the the sign ofthe player
     */
    int getSign();

private:
    /**
     * print the moves the user can make
     * @param paths
     */
    void printOptions(vector<Path> paths);
};
#endif //Player_H_
