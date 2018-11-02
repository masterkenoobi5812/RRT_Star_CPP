//
// Created by adlarkin on 10/30/18.
//

#include "Location.h"

Location::Location(const Coordinate &x_coord, const Coordinate &y_coord) :
        x_coord(x_coord), y_coord(y_coord) {}

bool Location::operator==(const Location &rhs) const {
    return x_coord == rhs.x_coord &&
           y_coord == rhs.y_coord;
}

bool Location::operator!=(const Location &rhs) const {
    return !(rhs == *this);
}

float Location::xPosition() const {
    return x_coord.getPos();
}

float Location::yPosition() const {
    return y_coord.getPos();
}

int Location::xID() const {
    return x_coord.getId();
}

int Location::yID() const {
    return y_coord.getId();
}