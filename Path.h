//
// Created by nadavgross on 26/11/17.
//

#ifndef REVERSIADVANCED_PATH_H
#define REVERSIADVANCED_PATH_H


#include "Point.h"

class Path {
private :
    Point source;
    Point destination;
public :
    Path(Point p1, Point p2);
    //~Path();
    void setSource(Point p);
    void setDestination(Point p);
    Point getSource();
    Point getDestination();

};


#endif //REVERSIADVANCED_PATH_H
