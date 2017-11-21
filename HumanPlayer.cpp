/*
 * HumanPlayer.cpp
 * Itay Hassid
 *
 */
#include "HumanPlayer.h"
//using namespace std;

HumanPlayer::HumanPlayer(int playerSign) : Player(playerSign) {} //{sign = sign1;}

//HumanPlayer::~HumanPlayer() {}

int HumanPlayer::getSign() {
    return sign;
}

Point HumanPlayer::getPoint(vector<Path> paths) {
    Point p;
    int row, col;
    char playerMark = (sign == black) ? 'X' : 'O';
    cout << playerMark << ":It's your move" << endl << "Your possible moves: ";
    printOptions(paths);
    cout << endl << "Please enter your move row(space)col: ";
    //scanf("%d,%d", &row, &col);
    cin >> row >> col;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        p.x = -1;
        p.y = -1;
        return p;
    }
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    p.x = row;
    p.y = col;
    return p;
}

void HumanPlayer::printOptions(vector<Path> paths) {
    vector<Path> ::iterator it, temp;
    for (it = paths.begin(); it != paths.end(); ++it)
    {
        temp = it;
        if (++temp != paths.end())
            if (it->src.x == temp->src.x &&
                it->src.y == temp->src.y) {
                continue;
            }
        printf("(%d,%d) ", it->src.x + 1, it->src.y + 1);
    }
}
