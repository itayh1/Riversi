/*
 * Board.cpp
 * Itay Hassid
 */

#include "Board.h"
#include <iostream>
using namespace std;

Board::Board(int size) {
	board = new int*[size];

	//array allocation
	for (int i = 0; i < size; i++) {
		board[i] = new int[size];
	}

	//array initialization
	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			board[x][y] = blank;
		}
	}

	this->size = size;

	setMark(size/2 - 1, size/2 - 1, white);
	setMark(size/2 - 1, size/2, black);
	setMark(size/2, size/2, white);
	setMark(size/2, size/2 - 1, black);
}

Board::~Board() {

}

void Board::print() {

	cout << endl << "current board:" << endl << " ";
	for (int i = 1; i <= size; i++) {
		cout << "| " << i << " ";
	}
	cout << "|" << endl;

	for (int x = 0; x < size; x++) {
		for (int y = 0; y < 34; y++) {
			cout << "-";
		}
		cout << endl << x + 1 << "|";

		for (int y = 0; y < size; y++) {
			switch(board[x][y]) {
			case black:
				cout << " x |";
				break;
			case white:
				cout << " o |";
				break;
			case blank:
				cout << "   |";
				break;
			}
		}
		cout << endl;
	}
	for (int i = 0; i < 34; i++) {
			cout << "-";
	}
	cout << endl;
}

Board* Board::getCopy() {
	Board *copy = new Board(size);

	//copy array
	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			copy->setMark(x, y, board[x][y]);
		}
	}
	return copy;
}

int Board::getCell(int row, int column) {
	return board[row][column];
}
int Board::getSize() {
	return size;
}
void Board::setMark(int row, int column, int m) {
	board[row][column] = m;
}

void Board::freeAllocations() {
	for (int i = 0; i < size; i++) {
		delete[] board[i];
	}
	delete[] board;
}

int Board::countBlack() {
	int count = 0;
	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			if (board[x][y] == black)
				++count;
		}
	}
	return count;
}

int Board::countWhite() {
	int count = 0;
	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			if (board[x][y] == white)
				++count;
		}
	}
	return count;
}

int Board::countSign(int sign) {
	int count = 0;
	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			if (board[x][y] == sign)
				++count;
		}
	}
	return count;
}
