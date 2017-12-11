//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include "../headers/Client.h"

Client::Client(const char *serverIP, int serverPort) {
    this->serverIP = serverIP;
    this->serverPort = serverPort;
    clientSocket = 0;
}

void Client::connectToServer() {
    // Create a socket point
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == -1) {
        throw "Error opening socket";
    }
    // Convert the ip string to a network address
    struct in_addr address;
    if (!inet_aton(serverIP, &address)) {
        throw "Can't parse IP address";
    }
    // Get a hostent structure for the given host address
    struct hostent *server;
    server = gethostbyaddr((const void *)&address, sizeof
            address, AF_INET);
    if (server == NULL) {
        throw "Host is unreachable";
    }
    // Create a structure for the server address
    struct sockaddr_in serverAddress;
    bzero((char *)&address, sizeof(address));
    serverAddress.sin_family = AF_INET;
    memcpy((char *)&serverAddress.sin_addr.s_addr, (char
    *)server->h_addr, server->h_length);
    // htons converts values between host and network byte orders
    serverAddress.sin_port = htons(serverPort);
    // Establish a connection with the TCP server
    if (connect(clientSocket, (struct sockaddr
    *)&serverAddress, sizeof(serverAddress)) == -1) {
        throw "Error connecting to server";
    }
    cout << "Connected to server" << endl;
}

void Client::readFromServer(char *buffer) {
    int n;
    bzero(buffer,256);
    n = read(clientSocket, buffer, sizeof(buffer));
    if (n == -1) {
        throw "Error reading result from socket";
    }
}

void Client::writeToServer(char *buffer, int size) {
    int n;
    n = write(this->clientSocket, buffer, size);
    if (n < 0) {
        cout << "Error writing to socket" << endl;
    }
}
