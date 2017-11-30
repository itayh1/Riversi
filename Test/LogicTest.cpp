//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../headers/Logic.h"

TEST(LogicTest, reversePlayerWhite) {
    Logic logic(Board(8));
    EXPECT_EQ(logic.switchSign(white), black);
}

TEST(LogicTest, reversePlayerBlack) {
    Logic logic(Board(8));
    EXPECT_EQ(logic.switchSign(black), white);
}