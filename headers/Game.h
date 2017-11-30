/*
 * Nadav Gross 206844920
 * Itay Hassid 209127596
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
	//Constructor.
	Game();
	virtual ~Game();
	/**
	 * run the game.
	 */
	void play();
    //runs the menu.
	void chooseMenu();
    /**
    * switch the current player to the opponent
    * @param player current
    * @return opponent
    */
    Player* switchPlayer(Player *player);

private:
	//board of the game
	Board b;
	//players of the game
    Player *player1, *player2;
	Logic *logic;
	//vector<Path> availablePoints(vector<Path> paths, Player *player);
	//bool isValidPoint(int player, int x, int y);
	//void reverseCells(Path path, Player *player);
    void printWinner(Board b);
};



#endif /* Game_H_ */