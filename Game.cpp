/*
 * Game.cpp
 * Itay Hassid
 *
 */
#include "Game.h"

Game::Game() : b(8)
{
    player1 = new HumanPlayer(black);
    player2 = new HumanPlayer(white);
}

Game::~Game()
{
    delete player1;
    delete player2;
	b.freeAllocations();
}

void Game::play() {
	//int player = black;
    Player *player = player1;
	//char playerMark;
	//int row, col;
	bool running = true, validInput = false;
	vector<Path> paths;
	vector<Path> ::iterator it, temp;
	Path path;
    Point pnt;
	while (running)
	{
		paths = avaliblePoints(paths, player);
		if (paths.size() == 0) {
			player = switchPlayer(player);
			if (avaliblePoints(paths, player).size() == 0) {
                running = false;
                b.print();
            }
			continue;
		}
        b.print();

        pnt = player->getPoint(paths);
		for (it = paths.begin(); it != paths.end(); ++it)
		{
			if (it->src.x + 1 == pnt.x && it->src.y + 1 == pnt.y) {
				validInput = true;
				path = *it;
				reverseCells(path, player);
			}
		}
		if (validInput) {
			player = switchPlayer(player);
			validInput = false;
		} else {
			cout << "Invalid input" << endl;
		}
		paths.clear();
	}
	paths.clear();
    printWinner(this->b);
    cout << "Game ended" << endl;
}

Player* Game::switchPlayer(Player *player) {
	if (player->getSign() == player1->getSign()) {
		return player2;
	}
	return player1;
}

vector<Path> Game::avaliblePoints(vector<Path> paths, Player *player) {
	Path p;
	int row, column;
	int opponet = switchPlayer(player)->getSign();
	int size = b.getSize();
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
		{
			if (b.getCell(x, y) != blank) continue;
			for (int xDelta = -1; xDelta <= 1; xDelta++)
			{
				for (int yDelta = -1; yDelta <= 1; yDelta++)
				{
					/* Don't check outside the array, or the current square */
					if (x + xDelta < 0 || x + xDelta >= size || y + yDelta < 0 ||
						y + yDelta >= size || (xDelta == 0 && yDelta == 0))
						continue;
					if (b.getCell(x + xDelta, y + yDelta) == opponet)
					{
						row = x + xDelta;
						column = y + yDelta;

						for (;;)
						{
							row += xDelta;
							column += yDelta;
							if (row < 0 || row >= size || column < 0 || column >= size)
								break;
							if (b.getCell(row, column) == blank)
								break;
							if (b.getCell(row, column) == player->getSign()) {
								p.src.x = x;
                                p.src.y = y;
								p.dst.x = row;
                                p.dst.y = column;
								paths.insert(paths.begin(), p);
								//yDelta = xDelta = 1;
								break;
							}
						}
					}
				}
			}
		}
	}
	return paths;
}

void Game::reverseCells(Path path, Player *player) {
	int xDelta = path.dst.x - path.src.x;
	int yDelta = path.dst.y - path.src.y;
	xDelta = xDelta == 0 ? 0 : xDelta / abs((double)xDelta);
	yDelta = yDelta == 0 ? 0 : yDelta / abs((double)yDelta);
	int row = path.src.x, col = path.src.y;
	do {
		b.setMark(row, col, player->getSign());
		row += xDelta;
		col += yDelta;		
	} while (b.getCell(row, col) != player->getSign());
}

/*bool Game::isValidPoint(int opponet, int x, int y) {
	return true;
}*/

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
