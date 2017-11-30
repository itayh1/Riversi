//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../headers/HumanPlayer.h"

TEST(HumanPlayerTest, SignWhite) {
    mark sign = white;
    HumanPlayer player(sign);
    EXPECT_EQ((int)white, player.getSign());
}

TEST(HumanPlayerTest, SignBlack) {
    mark sign = black;
    HumanPlayer player(sign);
    EXPECT_EQ((int)black, player.getSign());
}

TEST(HumanPlayerTest, SignBlank) {
    mark sign = blank;
    HumanPlayer player(sign);
    EXPECT_EQ((int)blank, player.getSign());
}
