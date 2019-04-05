//
// Created by Xan on 2019-04-03.
//
#include "Wall.hpp"
#include "Room.hpp"
#include "Door.hpp"
#include "Maze.hpp"
#include "EnchantedRoom.hpp"
#include <iostream>

#ifndef LAB009_MAZEFACTORY_HPP
#define LAB009_MAZEFACTORY_HPP


class MazeFactory {
public:

    MazeFactory();

    virtual ~MazeFactory();

    virtual Maze *make_maze() = 0;

    virtual Wall *make_wall() = 0;

    virtual Room *make_room() = 0;

    virtual Door *make_door(Room &r1, Room &r2) = 0;

};


#endif //LAB009_MAZEFACTORY_HPP
