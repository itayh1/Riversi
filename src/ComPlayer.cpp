//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include "../headers/ComPlayer.h"

ComPlayer::ComPlayer(int playerSign)  : Player(playerSign) {}

int ComPlayer::getSign() {
    return sign;
}

Point ComPlayer::getPoint(vector<Path> paths, Board board) {
    vector<Path> ::iterator it, innerIt;
    Point bestPoint, opponentBestPoint;
    int boardPanels = board.getSize() * board.getSize();
    //bestScore is the best score that cannot be reached
    int bestScore = boardPanels, opponentScore, tempScore;
    int opponentSign = this->sign == black ? white : black;
    Logic *logic, *opponetLogic;
    for (it = paths.begin(); it != paths.end(); ++it) {
        vector<Path> newMoves;
        opponentScore = -1 * boardPanels;
        //copy of the board
        logic = new Logic(board.getCopy());
        //make move
        logic->reverseCells(*it, this->sign);
        //logic->getBoard().print();
        //options of the opponent
        newMoves = logic->availablePoints(newMoves, opponentSign);
        if (newMoves.empty()) {
            delete logic;
            return it->getSource();
        }
        for (innerIt = newMoves.begin(); innerIt != newMoves.end(); ++innerIt) {
            opponetLogic = new Logic(logic->getBoard()->getCopy());
            opponetLogic->reverseCells(*innerIt, opponetLogic->switchSign(this->sign));
            Board tempBoard = *opponetLogic->getBoard();
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

void ComPlayer::movePlayed(Point &p) {
    if (p.GetX() > 0 && p.GetY() > 0)
        return;
    char ch = sign == black ? 'X' : 'O';
    cout << ch << " played ";
    p.PrintPoint();
}

void ComPlayer::gameEnded() {

}