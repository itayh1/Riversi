/*
 * Nadav Gross 206844920
 * Itay Hassid 209127596
 *
 */
#include "../headers/Game.h"

Game::Game() : b(8)
{
    player1 = new HumanPlayer(black);
    //player2 = new ComPlayer(white);
	logic = new Logic(b);
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
	chooseMenu();
	while (running) {
		pathVector = logic->availablePoints(pathVector, player->getSign());
		if (pathVector.size() == 0) {
			player = switchPlayer(player);
			if (logic->availablePoints(pathVector, player->getSign()).size() == 0) {
				running = false;
				b.print();
			}
			continue;
		}
		b.print();

		pnt.setPoint(player->getPoint(pathVector, this->b));
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
			player->printMovePlayed(pnt);
			player = switchPlayer(player);
			validInput = false;
		} else {
			cout << "Invalid input" << endl;
		}
		pathVector.clear();
	}
	pathVector.clear();
    printWinner(this->b);
    cout << "Game ended" << endl;
}

Player* Game::switchPlayer(Player *player) {
	if (player->getSign() == player1->getSign()) {
		return player2;
	}
	return player1;
}


void Game::printWinner(Board b) {
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
	cin >> option;
	while(option != 1 && option != 2) {
		cout << "invalid option. choose option 1 or 2..." << endl;
		cin >> option;
	}
	if (option == 1) {
		player2 = new HumanPlayer(white);
	} else {
		player2 = new ComPlayer(white);
	}
}