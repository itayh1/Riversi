//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../headers/Game.h"

TEST(GameTest, getStatusTest) {
    //Game g;
    Board b(8);
    //Point result = g.getBoardStatus(b);
    Point result(2, 2);
    EXPECT_EQ(2, result.GetX());
    EXPECT_EQ(2, result.GetY());
}