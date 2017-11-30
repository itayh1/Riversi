//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../headers/Game.h"

TEST(GameTest, getPlayer1Test) {
    Game g;
    EXPECT_EQ((int) black, g.getPlayer1()->getSign());
}

TEST(GameTest, getPlayer2Test) {
    Game g;
    EXPECT_EQ((int) white, g.getPlayer2()->getSign());
}