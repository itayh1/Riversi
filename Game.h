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
#include "GlobalDef.h"
#include "Board.h"
#include "Path.h"
#include "HumanPlayer.h"
#include "ComPlayer.h"
#include "Logic.h"
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
	Logic *logic;
	/**
	 * switch the current player to the opponent
	 * @param player current
	 * @return opponent
	 */
	Player* switchPlayer(Player *player);

	//vector<Path> availablePoints(vector<Path> paths, Player *player);
	//bool isValidPoint(int player, int x, int y);
	//void reverseCells(Path path, Player *player);
    void printWinner(Board b);
};



#endif /* Game_H_ */