//
// Created by Xan on 2019-04-03.
//
#include "DystopianDoor.hpp"
#include "DystopianRoom.hpp"
#include "DystopianMaze.hpp"
#include "DystopianWall.hpp"

using namespace std;

#include "DystopianMazeFactory.hpp"

Maze *DystopianMazeFactory::make_maze() {
    return new DystopianMaze;
}

Wall *DystopianMazeFactory::make_wall() {
    return new DystopianWall;
}

Room *DystopianMazeFactory::make_room() {
    return new DystopianRoom;
}

Door *DystopianMazeFactory::make_door(Room &r1, Room &r2) {
    return new DystopianDoor(&r1, &r2);
}
