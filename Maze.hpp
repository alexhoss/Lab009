//
// Created by Xan on 2019-04-03.
//
#include <vector>
#include "Room.hpp"
#include "Wall.hpp"
#include "Door.hpp"

#ifndef LAB009_MAZE_HPP
#define LAB009_MAZE_HPP
using namespace std;


class Maze {
public:

    vector<Room *> rooms;
    vector<Wall *> walls;
    vector<Door *> doors;

    virtual void print();

    virtual void insertDoor(Door *d) = 0;

    virtual void insertWall(Wall *w) = 0;

    virtual void insertRoom(Room *r) = 0;


};


#endif //LAB009_MAZE_HPP
