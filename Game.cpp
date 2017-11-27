/*
 * Game.cpp
 * Itay Hassid
 *
 */
#include "Game.h"
#include "Path.h"

Game::Game() : b(4)
{
    player1 = new HumanPlayer(black);
    player2 = new HumanPlayer(white);
	logic = new Logic(b);
}

Game::~Game()
{
    delete player1;
    delete player2;
    delete logic;
	b.freeAllocations();
}

void Game::play() {
	//int player = black;
    Player *player = player1;
	//char playerMark;
	//int row, col;
	bool running = true, validInput = false;
	vector<Path> pathVector;
	vector<Path> ::iterator it, temp;
    Point p1(0, 0), p2(0, 0);
	Path path(p1, p2);
    Point pnt(0, 0);
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
			if (it->getSource().GetX() + 1 == pnt.GetX() && it->getSource().GetY() + 1 == pnt.GetY()) {
				validInput = true;
				Path tempPath = *it;
				path.setSource(tempPath.getSource());
				path.setDestination(tempPath.getDestination());
				logic->reverseCells(path, player);
			}
		}
		if (validInput) {
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

/*
vector<Path> Game::availablePoints(vector<Path> pathVector, Player *player) {
	int row, column;
	int opponent = switchPlayer(player)->getSign();
	int size = b.getSize();
	for (int x = 0; x < size; x++) {
		for (int y = 0; y < size; y++) {
			if (b.getCell(x, y) != blank) continue;
			for (int xDelta = -1; xDelta <= 1; xDelta++) {
				for (int yDelta = -1; yDelta <= 1; yDelta++) {
					// Don't check outside the array, or the current square
					if (x + xDelta < 0 || x + xDelta >= size || y + yDelta < 0 ||
						y + yDelta >= size || (xDelta == 0 && yDelta == 0))
						continue;
					if (b.getCell(x + xDelta, y + yDelta) == opponent) {
						row = x + xDelta;
						column = y + yDelta;

						for (;;) {
							row += xDelta;
							column += yDelta;
							if (row < 0 || row >= size || column < 0 || column >= size)
								break;
							if (b.getCell(row, column) == blank)
								break;
							if (b.getCell(row, column) == player->getSign()) {
								Point src(x, y);
                                Point dst(row, column);
								Path path(src, dst);
								pathVector.insert(pathVector.begin(), path);
								break;
							}
						}
					}
				}
			}
		}
	}
	return pathVector;
}

void Game::reverseCells(Path path, Player *player) {
	int xDelta = path.getDestination().GetX() - path.getSource().GetX();
	int yDelta = path.getDestination().GetY() - path.getSource().GetY();
	xDelta = xDelta == 0 ? 0 : xDelta / abs((double)xDelta);
	yDelta = yDelta == 0 ? 0 : yDelta / abs((double)yDelta);
	int row = path.getSource().GetX(), col = path.getSource().GetY();
	do {
		b.setMark(row, col, player->getSign());
		row += xDelta;
		col += yDelta;		
	} while (b.getCell(row, col) != player->getSign());
}
*/

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
