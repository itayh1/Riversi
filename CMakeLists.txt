cmake_minimum_required(VERSION 3.8)
project(ReversiAdvanced)

set(CMAKE_CXX_STANDARD 98)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)


set(SOURCE_FILES
        # Board
        headers/Board.h src/Board.cpp
        # Game
      src/Game.cpp headers/Game.h
        # Global Definitions
        headers/GlobalDef.h
        # Player
        src/Player.cpp headers/Player.h
        # Human Player
        src/HumanPlayer.cpp headers/HumanPlayer.h
        # Point
        src/Point.cpp headers/Point.h
        # Path
        src/Path.cpp headers/Path.h
        # Com Player
        src/ComPlayer.cpp headers/ComPlayer.h
        # Logic
        src/Logic.cpp headers/Logic.h)

set(TEST_FILES
        # Point Test
        Test/PointTest.cpp
        # Path Test
        Test/PathTest.cpp
        # Human Player Test
        Test/HumanPlayerTest.cpp
        # Board Test
        Test/BoardTest.cpp
        # Game Test
        Test/GameTest.cpp
        # Logic Test
        Test/LogicTest.cpp
        # ComPlayerTest
        Test/ComPlayerTest.cpp)


add_executable(run_main ${SOURCE_FILES} src/main.cpp)
add_executable(run_tests Test/Gtest_main.cpp ${SOURCE_FILES} ${TEST_FILES} )

target_link_libraries(run_tests gtest gtest_main)