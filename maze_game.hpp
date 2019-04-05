//
// Created by Xan on 2019-04-03.
//
#include <iostream>
#include "MazeFactory.hpp"

using namespace std;

#ifndef LAB009_MAZE_GAME_HPP
#define LAB009_MAZE_GAME_HPP


class maze_game {
public:
    Maze *create_maze(MazeFactory &factory);

};


#endif //LAB009_MAZE_GAME_HPP
