//
// Nadav Gross 206844920
// Itay Hassid 209127596
//
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../headers/Path.h"

TEST(PathTest, isSrcEqual) {
    Point p1(1, 2);
    Point p2(2, 1);
    Path path(p1, p2);
    EXPECT_TRUE(path.getSource().GetX() == 1);
    EXPECT_TRUE(path.getSource().GetY() == 2);
}

TEST(PathTest, isDstEqual) {
    Point p1(1, 2);
    Point p2(2, 1);
    Path path(p1, p2);
    EXPECT_TRUE(path.getDestination().GetX() == 2);
    EXPECT_TRUE(path.getDestination().GetY() == 1);
}

TEST(PathTest, isSrcEqualZero) {
    Point p1(0, 0);
    Point p2(0, 0);
    Path path(p1, p2);
    EXPECT_TRUE(path.getSource().GetX() == 0);
    EXPECT_TRUE(path.getSource().GetY() == 0);
}

TEST(PathTest, isDstEqualZero) {
    Point p1(0, 0);
    Point p2(0, 0);
    Path path(p1, p2);
    EXPECT_TRUE(path.getDestination().GetX() == 0);
    EXPECT_TRUE(path.getDestination().GetY() == 0);
}

TEST(PathTest, isSrcEqualNegative) {
    Point p1(-1, -2);
    Point p2(-2, -1);
    Path path(p1, p2);
    EXPECT_TRUE(path.getSource().GetX() == -1);
    EXPECT_TRUE(path.getSource().GetY() == -2);
}

TEST(PathTest, isDstEqualNegative) {
    Point p1(-1, -2);
    Point p2(-2, -1);
    Path path(p1, p2);
    EXPECT_TRUE(path.getDestination().GetX() == -2);
    EXPECT_TRUE(path.getDestination().GetY() == -1);
}