//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include "../headers/LocalPlayer.h"

using namespace std;

LocalPlayer::LocalPlayer(Client *cl, int sign) : Player(sign) {
    this->client = cl;
}

LocalPlayer::~LocalPlayer() {
    delete this->client;
}

int LocalPlayer::getSign() {
    return this->sign;
}

Point LocalPlayer::getPoint(vector<Path> paths, Board board) {
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

void LocalPlayer::printOptions(vector<Path> paths) {
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

void LocalPlayer::movePlayed(Point &p) {
    if (p.GetX() != -1) {
        char ch = sign == black ? 'X' : 'O';
        cout << ch << " played ";
        p.PrintPoint();
        cout << endl;
        std::string str = p.toString();
        int length = str.length() + 1;
        char *buffer = new char[length];
        strncpy(buffer, str.c_str(), length);
        //printf("%s", buffer);
        //buffer[str.length()] = '\0';
        this->client->writeToServer(buffer, length);
    } else {
        this->client->writeToServer("NoMove",7);
    }
}

void LocalPlayer::gameEnded() {
    this->client->writeToServer("End", 3);
}
