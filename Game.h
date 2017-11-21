/*
 * Game.h
 * Itay Hassid
 *
 */
#ifndef Game_H_
#define Game_H_

#include <iostream>
#include <stdio.h>
#include <vector>
#include <cmath>
#include "GlobalDef.h"
#include "Board.h"
//#include "Player.h"
#include "HumanPlayer.h"
using namespace std;

class Game
{
public:
	Game();
	virtual ~Game();
	/**
	 * run the game.
	 */
	void play();

private:
	//board of the game
	Board b;
	//players of the game
    Player *player1, *player2;
	/**
	 * switch the current player to the opponent
	 * @param player current
	 * @return opponent
	 */
	Player* switchPlayer(Player *player);
	/**
	 * @param paths list of paths
	 * @param player current player
	 * @return avalible point to make a move
	 */
	vector<Path> avaliblePoints(vector<Path> paths, Player *player);
	//bool isValidPoint(int player, int x, int y);
	void reverseCells(Path path, Player *player);
    void printWinner(Board b);
};



#endif /* Game_H_ */