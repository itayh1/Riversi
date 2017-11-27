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
    Point bestPoint;// = paths[0].getSource();
    int bestScore = 0;
    Logic *logic, *opponetLogic;
    for (it = paths.begin(); it != paths.end(); ++it) {
        vector<Path> newMoves;
        logic = new Logic(*(board.getCopy()));
        logic->reverseCells(*it,this);
        logic->availablePoints(newMoves, logic->switchSign(this->sign));
        for (innerIt = paths.begin(); innerIt != paths.end(); ++innerIt) {

        }
        delete logic;
    }
    return bestPoint;
}