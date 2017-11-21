/*
 * GlobalDef.h
 * Itay Hassid
 *
 */
#ifndef GLOBALDEFENITION_H
#define GLOBALDEFENITION_H

//symbols that can be in the board.
enum mark { black, white, blank };

//Point in the board
struct Point { int x, y; };
//path between points
struct Path { Point src, dst; };

#endif //EX_GLOBALDEFENITION_H
