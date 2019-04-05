//
// Created by Xan on 2019-04-03.
//
#include "EnchantedWall.hpp"
#include "EnchantedRoom.hpp"
#include "EnchantedDoor.hpp"

using namespace std;

#include "EnchantedMazeFactory.hpp"

Maze *EnchantedMazeFactory::make_maze() {
    return new EnchantedMaze;
}

Wall *EnchantedMazeFactory::make_wall() {
    return new EnchantedWall;
}

Room *EnchantedMazeFactory::make_room() {
    return new EnchantedRoom;
}

Door *EnchantedMazeFactory::make_door(Room &r1, Room &r2) {
    return new EnchantedDoor(&r1, &r2);
}
