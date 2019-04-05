//
// Created by Xan on 2019-04-03.
//
#include <iostream>
#include "Room.hpp"

#ifndef LAB009_DOOR_HPP
#define LAB009_DOOR_HPP


class Door {

public:
    virtual void print() = 0;

    Room *r1;
    Room *r2;

    Door(Room *room1, Room *room2);

};


#endif //LAB009_DOOR_HPP
