//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#ifndef LOGIC_H
#define LOGIC_H

#include <vector>
#include <cmath>
#include "Path.h"
#include "Player.h"
#include "Board.h"

class Logic {
public:
    Logic(Board *b);
    ~Logic();
    /**
	 * @param paths list of paths
	 * @param player current player
	 * @return avalible point to make a move
	 */
    vector<Path> availablePoints(vector<Path> pathVector,
                                 int player);
    void reverseCells(Path path, int player);
    Board* getBoard();
    int switchSign(int sign);

private:
    Board *board;


};


#endif //REVERSIADVANCED_LOGIC_H
