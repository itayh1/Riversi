/*
 * Nadav Gross 206844920
 * Itay Hassid 209127596
 *
 */
#include "../headers/HumanPlayer.h"

HumanPlayer::HumanPlayer(int playerSign) : Player(playerSign) {} //{sign = sign1;}

//HumanPlayer::~HumanPlayer() {}

int HumanPlayer::getSign() {
    return sign;
}

Point HumanPlayer::getPoint(vector<Path> paths, Board board) {
    Point p;
    int row, col;
    char playerMark = (sign == black) ? 'X' : 'O';
    cout << playerMark << ":It's your move" << endl << "Your possible moves: ";
    printOptions(paths);
    cout << endl << "Please enter your move row(space)col: ";
    cin >> row >> col;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        return p;
    }
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    p.SetX(row - 1);
    p.SetY(col - 1);
    return p;
}

void HumanPlayer::printOptions(vector<Path> paths) {
    vector<Path> ::iterator it, temp;
    for (it = paths.begin(); it != paths.end(); ++it)
    {
        temp = it;
        if (++temp != paths.end())
            if (it->getSource().GetX() == temp->getSource().GetX() &&
                it->getSource().GetY() == temp->getSource().GetY()) {
                continue;
            }
        printf("(%d, %d) ", it->getSource().GetX() + 1, it->getSource().GetY() + 1);
    }
}

void HumanPlayer::movePlayed(Point &p) {
    /*char ch = sign == black ? 'X' : 'O';
    cout << ch << " played ";
    p.PrintPoint();*/
}
