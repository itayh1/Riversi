cmake_minimum_required(VERSION 3.8)
project(ReversiAdvanced)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Board.h Board.cpp Game.cpp Game.h GlobalDef.h Player.cpp Player.h HumanPlayer.cpp
        HumanPlayer.h Point.cpp Point.h Path.cpp Path.h)
add_executable(ReversiAdvanced ${SOURCE_FILES})