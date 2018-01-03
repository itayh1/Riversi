//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#ifndef REVERSIADVANCED_POINT_H
#define REVERSIADVANCED_POINT_H


//#include <list>
#include <string>
#include <sstream>
#include "Point.h"

using namespace std;

class Point {
private:
    /**
     * the x place.
     */
    int x;
    /**
     * the y place.
     */
    int y;
public:
    /**
     * constructor.
     * @param x int.
     * @param y int.
     */
    Point(int x, int y);
    Point();
    /**
     * A setter to x.
     * @param x int.
     */
    void SetX(int x);
    /**
     * A setter to y.
     * @param y int.
     */
    void SetY(int y);
    /**
     * A getter to x.
     * @return int.
     */
    int GetX();
    /**
     * A getter to y.
     * @return int.
     */
    int GetY();
    /**
     * prints the point.
     */
    std::string toString();
    void PrintPoint();
    void setPoint(Point o);
    void setPoint(Point* ptr);
    Point* getCopy();

};

#endif //REVERSIADVANCED_POINT_H
