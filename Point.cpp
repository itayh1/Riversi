//
// Created by nadavgross on 26/11/17.
//

#include "Point.h"


#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

Point::Point(){
    this->x = -1;
    this->y = -1;
}

void Point::SetX(int x) {
    this->x = x;
}

void Point::SetY(int y) {
    this->y = y;
}

int Point::GetX() {
    return this->x;
}

int Point::GetY() {
    return this->y;
}

void Point::PrintPoint() {
    cout << "(" << this->x + 1 << "," << this->y + 1 << ")";
}

void Point::setPoint(Point o) {
    this->x = o.x;
    this->y = o.y;
}