//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../headers/Point.h"

TEST(PointTest, Negative) {
    Point p(-1, -1);
    EXPECT_EQ(p.GetX(), -1);
    EXPECT_EQ(-1, p.GetY());
}

TEST(PointTest, Zero) {
    Point p(0, 0);
    EXPECT_EQ(p.GetX(), 0);
    EXPECT_EQ(0, p.GetY());
}


TEST(PointTest, isEqual) {
    Point p(5,10);
    EXPECT_TRUE(p.GetX() == 5);
    EXPECT_TRUE(10 == p.GetY());
}