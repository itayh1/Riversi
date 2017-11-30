//
// Nadav Gross 206844920
// Itay Hassid 209127596
//

#include "../headers/Path.h"

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

