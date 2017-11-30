//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../headers/Board.h"

TEST(BoardTest, SizeConstant) {
    Board board(8);
    EXPECT_EQ(board.getSize(), 8);
}

TEST(BoardTest, SignInCellWhite) {
    Board board(8);
    board.setMark(2, 2, white);
    EXPECT_EQ(board.getCell(2, 2), white);
}

TEST(BoardTest, SignInCellBlack) {
    Board board(8);
    board.setMark(2, 2, black);
    EXPECT_EQ(board.getCell(2, 2), black);
}

TEST(BoardTest, SignInCellBlank) {
    Board board(8);
    EXPECT_EQ(board.getCell(2, 2), blank);
}

