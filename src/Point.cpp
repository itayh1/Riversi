//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include "../headers/Point.h"
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
    cout << "(" << (this->x + 1) << "," << (this->y + 1) << ")";
}

void Point::setPoint(Point o) {
    this->x = o.x;
    this->y = o.y;
}

std::string Point::toString() {
    stringstream num;
    num << x << "," << y;
    return num.str();
}

Point *Point::getCopy() {
    return new Point(this->x, this->y);
}

void Point::setPoint(Point *ptr) {
    this->x = ptr->GetX();
    this->y = ptr->GetY();
    delete ptr;
}
