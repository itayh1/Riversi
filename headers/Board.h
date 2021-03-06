/*
 * Nadav Gross 206844920
 * Itay Hassid 209127596
 *
 */
#ifndef BOARD_H_
#define BOARD_H_

#include "GlobalDef.h"
/**
 * class that represent the board of the game.
 */
class Board {
public:
	/**
	 * constructor
	 * @param size of the game board.
	 */
	Board(int size);
	~Board();
	/**
	 * print the board.
	 */
	void print();
	//get length of row of matrix
	int getSize();
	//Get the value of a given cell.
	int getCell(int row, int column);
	/**
	* set the symbol- 'x' or 'o' or blank in the board.
	* @param row in the board
	* @param column in the borad
	* @param m : symbol
	*/
	void setMark(int row, int column, int m);
	/**
	 * @return a copy of the current board.
	 */
	Board* getCopy();
	//count how many times "sign" is in the board.
	int countSign(int sign);
	/**
	 * free Board allocations
	 */
	void freeAllocations();
	
private:
	// size of the board.
	int size;
	// 2-dimentional array that represent the board.
	int** board;
	

};

#endif /* BOARD_H_ */
