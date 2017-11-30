//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../headers/Game.h"

TEST(GameTest, DifferentPlayer) {
    HumanPlayer* p1 = new HumanPlayer(white);
    Game game;
    EXPECT_EQ((int)black, game.switchPlayer(p1)->getSign());
    delete p1;
}