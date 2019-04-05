//
// Created by Xan on 2019-04-03.
//
using namespace std;

#include <algorithm>
#include "Maze.hpp"

void Maze::print() {


    for (auto it = walls.begin(); it != walls.end(); ++it) {
        Wall *w = *it;
        w->print();

    }

    for (auto it = rooms.begin(); it != rooms.end(); ++it) {
        Room *r = *it;
        r->print();

    }

    for (auto it = doors.begin(); it != doors.end(); ++it) {
        Door *door = *it;
        door->print();

    }


}
