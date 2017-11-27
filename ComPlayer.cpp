//
// Created by Itay Hassid.
//

#include "ComPlayer.h"

ComPlayer::ComPlayer(int playerSign)  : Player(playerSign) {}

int ComPlayer::getSign() {
    return sign;
}

Point ComPlayer::getPoint(vector<Path> paths, Board board) {
    vector<Path> ::iterator it, innerIt;
    Point bestPoint, opponentBestPoint;
    //bestScore is the best score that cannot be reached
    int bestScore = board.getSize() * board.getSize(), opponentScore = 0, tempScore;
    int opponentSign = this->sign == black ? white : black;
    Logic *logic, *opponetLogic;
    for (it = paths.begin(); it != paths.end(); ++it) {
        vector<Path> newMoves;
        //copy of the board
        logic = new Logic(*(board.getCopy()));
        //make move
        logic->reverseCells(*it, this->sign);
        //logic->getBoard().print();
        //options of the opponent
        newMoves = logic->availablePoints(newMoves, opponentSign);
        if (newMoves.size() == 0) {
            return it->getSource();
        }
        for (innerIt = newMoves.begin(); innerIt != newMoves.end(); ++innerIt) {
            opponentScore = 0;
            opponetLogic = new Logic(*(logic->getBoard().getCopy()));
            opponetLogic->reverseCells(*innerIt, opponetLogic->switchSign(this->sign));
            Board tempBoard = opponetLogic->getBoard();
            tempScore = tempBoard.countSign(opponentSign) - tempBoard.countSign(sign);
            if (tempScore > opponentScore) {
                opponentScore = tempScore;
                opponentBestPoint = it->getSource();
            }
            delete opponetLogic;

        }
        if (opponentScore < bestScore) {
            bestScore = opponentScore;
            bestPoint = opponentBestPoint;
        }
        newMoves.clear();
        delete logic;
    }
    return bestPoint;
}