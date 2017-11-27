//
// Created by Itay Hassid.
//

#include "Logic.h"

Logic::Logic(Board b) : board(b) {}

Logic::~Logic() {
    this->board.freeAllocations();
    //delete this->board;
}

vector<Path> Logic::availablePoints(vector<Path> pathVector, int player) {
    int row, column;
    int opponent = player == black ? white : black; //switchPlayer(player)->getSign();
    int size = board.getSize();
    for (int x = 0; x < size; x++) {
        for (int y = 0; y < size; y++) {
            if (board.getCell(x, y) != blank) continue;
            for (int xDelta = -1; xDelta <= 1; xDelta++) {
                for (int yDelta = -1; yDelta <= 1; yDelta++) {
                    /* Don't check outside the array, or the current square */
                    if (x + xDelta < 0 || x + xDelta >= size || y + yDelta < 0 ||
                        y + yDelta >= size || (xDelta == 0 && yDelta == 0))
                        continue;
                    if (board.getCell(x + xDelta, y + yDelta) == opponent) {
                        row = x + xDelta;
                        column = y + yDelta;

                        for (;;) {
                            row += xDelta;
                            column += yDelta;
                            if (row < 0 || row >= size || column < 0 || column >= size)
                                break;
                            if (board.getCell(row, column) == blank)
                                break;
                            if (board.getCell(row, column) == player) {
                                Point src(x, y);
                                Point dst(row, column);
                                Path path(src, dst);
                                pathVector.insert(pathVector.begin(), path);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    return pathVector;
}

void Logic::reverseCells(Path path, int player) {
    int xDelta = path.getDestination().GetX() - path.getSource().GetX();
    int yDelta = path.getDestination().GetY() - path.getSource().GetY();
    xDelta = xDelta == 0 ? 0 : xDelta / abs((double)xDelta);
    yDelta = yDelta == 0 ? 0 : yDelta / abs((double)yDelta);
    int row = path.getSource().GetX(), col = path.getSource().GetY();
    do {
        board.setMark(row, col, player);
        row += xDelta;
        col += yDelta;
    } while (board.getCell(row, col) != player);
}

Board Logic::getBoard() {
    return this->board;
}

int Logic::switchSign(int sign) {
    if (sign == black)
        return white;
    return black;
}

