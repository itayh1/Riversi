//
// Created by itay on 05/12/17.
//

#include "../headers/RemotePlayer.h"

RemotePlayer::RemotePlayer(int sign) : Player(sign) {
    this->client = new Client("127.0.0.1", 9090);
    try {
        this->client->connectToServer();
    } catch (const char *msg) {
        cout << "Failed to connect to server. Reason: " << msg << endl;
        exit(-1);
    }

}

int RemotePlayer::getSign() {
    return this->sign;
}

Point RemotePlayer::getPoint(vector<Path> paths, Board board) {
    return Point();
}

void RemotePlayer::printMovePlayed(Point &p) {
    char ch = sign == black ? 'X' : 'O';
    cout << ch << " played ";
    p.PrintPoint();
}

