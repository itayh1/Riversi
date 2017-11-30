//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../headers/ComPlayer.h"

TEST(ComPlayerTest, GetSignWhite) {
    ComPlayer cPlayer(white);
    EXPECT_EQ((int) white, cPlayer.getSign());
}

TEST(ComPlayerTest, GetSignBlack) {
    ComPlayer cPlayer(black);
    EXPECT_EQ((int) black, cPlayer.getSign());
}