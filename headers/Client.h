//
// Created by itay on 05/12/17.
//

#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <string.h>
#include <unistd.h>

using namespace std;

class Client {
public:
    Client(const char* serverIP, int serverPort);
    void connectToServer();
    void readFromServer(char *buffer);
    void writeToServer(char *buffer, int size);
private:
    const char *serverIP;
    int serverPort;
    int clientSocket;
};


#endif //CLIENT_H
