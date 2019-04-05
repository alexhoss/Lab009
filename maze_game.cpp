//
// Created by Xan on 2019-04-03.
//

#include "maze_game.hpp"

Maze *maze_game::create_maze(MazeFactory &factory) {

    Maze *maze = factory.make_maze();
    Room *room = factory.make_room();
    Room *room2 = factory.make_room();
    Wall *wall = factory.make_wall();
    // How to create a door if abstract?
    Door *door = factory.make_door(*room, *room2);
    maze->insertRoom(room);
    maze->insertRoom(room2);
    maze->insertWall(wall);
    maze->insertDoor(door);


    return maze;

}
