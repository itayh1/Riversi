//
// Created by itay on 05/12/17.
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
    this->client->readFromServer(buffer);
    string str(buffer);
    istringstream(str.substr(0,1)) >> x;
    istringstream(str.substr(2,1)) >> y;
    return Point(x,y);
}


void RemotePlayer::movePlayed(Point &p) {
    char ch = sign == black ? 'X' : 'O';
    cout << ch << " played ";
    p.PrintPoint();
}

