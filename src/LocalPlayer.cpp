//
// Created by itay on 05/12/17.
//

#include "LocalPlayer.h"
#include <sstream>
using namespace std;

LocalPlayer::LocalPlayer(int sign) : Player(sign) {
    this->client = new Client("127.0.0.1", 9090);
    try {
        this->client->connectToServer();
    } catch (const char *msg) {
        cout << "Failed to connect to server. Reason: " << msg << endl;
        exit(-1);
    }
    char buffer[1024];
    int servSign = blank;
    this->client->readFromServer(buffer);
    try {
        servSign = atoi(buffer);
        string str(buffer);
        std::istringstream(str) >> servSign;
    } catch(const exception& e) {
        throw("couldn't get message");
    }
    if (servSign != black && servSign != white ) {
        throw("invalid message from client.");
    }
    this->sign = servSign;

}

int LocalPlayer::getSign() {
    return this->sign;
}

Point LocalPlayer::getPoint(vector<Path> paths, Board board) {
    return Point();
}

void LocalPlayer::printMovePlayed(Point &p) {
    char ch = sign == black ? 'X' : 'O';
    cout << ch << " played ";
    p.PrintPoint();
}

