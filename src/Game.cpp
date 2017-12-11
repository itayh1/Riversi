/*
 * Nadav Gross 206844920
 * Itay Hassid 209127596
 *
 */
#include "../headers/Game.h"
#include <sstream>
#include <fstream>

#define BOARD_SIZE 3

Game::Game()
{
    //player1 = new HumanPlayer(black);
    //player2 = new ComPlayer(white);
	this->b = new Board(BOARD_SIZE);
	logic = new Logic(b);
	chooseMenu();
}

Game::~Game()
{
    delete player1;
    delete player2;
    delete logic;
	//b.freeAllocations();
}

void Game::play() {
    Player *player = player1;
	bool running = true, validInput = false;
	vector<Path> pathVector;
	vector<Path> ::iterator it;
    Point p1(0, 0), p2(0, 0);
	Path path(p1, p2);
    Point pnt(0, 0);
	//chooseMenu();
    Point noMoves(-1, -1);
	while (running) {
		pathVector = logic->availablePoints(pathVector, player->getSign());
		if (pathVector.empty()) {
            //pnt.setPoint(player->getPoint(pathVector, *this->b));
            player->movePlayed(noMoves);
			player = switchPlayer(player);
			if (logic->availablePoints(pathVector, player->getSign()).empty()) {
                player->gameEnded();
				running = false;
				b->print();
			}
			continue;
		}
		b->print();

		pnt.setPoint(player->getPoint(pathVector, *this->b));
        if (pnt.GetX() == -1) {
            player = switchPlayer(player);
            continue;
        }
		for (it = pathVector.begin(); it != pathVector.end(); ++it) {
			if (it->getSource().GetX() == pnt.GetX() && it->getSource().GetY() == pnt.GetY()) {
				validInput = true;
				Path tempPath = *it;
				path.setSource(tempPath.getSource());
				path.setDestination(tempPath.getDestination());
				logic->reverseCells(path, player->getSign());
			}
		}
		if (validInput) {
			player->movePlayed(pnt);
			player = switchPlayer(player);
			validInput = false;
		} else {
			cout << "Invalid input" << endl;
		}
		pathVector.clear();
	}
	pathVector.clear();
    printWinner(getBoardStatus(*this->b));
    cout << "Game ended" << endl;
}

Player* Game::switchPlayer(Player *player) {
	if (player->getSign() == player1->getSign()) {
		return player2;
	}
	return player1;
}
Point Game::getBoardStatus(Board b) {
    int i,j, temp;
    int size = b.getSize(), blackCounter = 0, whiteCounter = 0;
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            temp = b.getCell(i, j);
            if (temp == black) {
                blackCounter++;
            } else if (temp == white) {
                whiteCounter++;
            }
        }
    }
    return Point(blackCounter, whiteCounter);
}

void Game::printWinner(Point result) {
    int blackCounter = result.GetX();
    int whiteCounter = result.GetY();
    cout << endl;
    if (blackCounter > whiteCounter) {
        cout << "X is the winner!";
    } else if (whiteCounter > blackCounter) {
        cout << "O is the winner!";
    } else {
        cout << "It's a tie !";
    }
    cout << endl;
}

void Game::chooseMenu() {
	int option;
	cout << "Choose between the 2 next options:" << endl;
	cout << "1. VS. human player." << endl;
	cout << "2. VS. AI player." << endl;
	cout << "3. a remote player." << endl;
	cin >> option;
	//option = 3;
	while(option != 1 && option != 2 && option != 3) {
		cout << "invalid option. choose option 1 or 2 or 3..." << endl;
		cin >> option;
	}
	if (option == 1) {
		player1 = new HumanPlayer(black);
		player2 = new HumanPlayer(white);
	} else if (option == 2){
		player1 = new HumanPlayer(black);
		player2 = new ComPlayer(white);
	} else {
		char buffer[1024];
		int serverSign;
        ifstream inFile;
        inFile.open("clientSetting");
        string ip;
        int port;
        inFile >> ip;
        inFile >> port;
        cout << port << endl;
        const char *ip_c = ip.c_str();
		Client *cl = new Client(ip_c, port);
		try {
			cl->connectToServer();
		} catch (const char *msg) {
			cout << "Failed to connect to server. Reason: " << msg << endl;
			exit(-1);
		}
		cl->readFromServer(buffer);
		try {
			//serverSign = atoi(buffer);
			string str(buffer);
			std::istringstream(str) >> serverSign;
		} catch(const exception& e) {
			throw("couldn't get message");
		}
		if (serverSign == 1) {
			player1 = new LocalPlayer(cl, black);
			player2 = new RemotePlayer(cl, white);
		} else if (serverSign == 2) {
			player1 = new RemotePlayer(cl, black);
			player2 = new LocalPlayer(cl, white);
		} else {
			printf("Invalid message from the server");
		}
	}
}