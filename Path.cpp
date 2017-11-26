//
// Created by nadavgross on 26/11/17.
//

#include "Path.h"

Path::Path(Point p1, Point p2) {
    this->source.setPoint(p1);
    this->destination.setPoint(p2);

}

/**Path::~Path() {
    delete this->source;
    delete this->destination;
}**/

Point Path::getDestination() {
    return this->destination;
}

Point Path::getSource() {
    return this->source;
}

void Path::setSource(Point p){
    this->source.setPoint(p);
}

void Path::setDestination(Point p) {
    this->destination.setPoint(p);
}

