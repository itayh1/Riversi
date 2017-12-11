//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include "../headers/RemotePlayer.h"

RemotePlayer::RemotePlayer(Client *cl, int sign) : Player(sign) {
    this->client = cl;
}

int RemotePlayer::getSign() {
    return this->sign;
}

Point RemotePlayer::getPoint(vector<Path> paths, Board board) {
    char buffer[512];
    int x, y;
    cout << "waiting to opponent move" << endl;
    this->client->readFromServer(buffer);
    string str(buffer);
    //cout << str << endl;
    if (str.compare("NoMove") == 0) {
        return Point(-1, -1);
    } else {
        istringstream(str.substr(0, 1)) >> x;
        istringstream(str.substr(2, 1)) >> y;
        return Point(x, y);
    }
}


void RemotePlayer::movePlayed(Point &p) {
    char ch = sign == black ? 'X' : 'O';
    cout << ch << " played ";
    p.PrintPoint();
}

