//
// Created by Xan on 2019-04-03.
//
#include "MazeFactory.hpp"

#ifndef LAB009_DYSTOPIANMAZEFACTORY_HPP
#define LAB009_DYSTOPIANMAZEFACTORY_HPP


class DystopianMazeFactory : public MazeFactory {

    Maze *make_maze() override;

    Wall *make_wall() override;

    Room *make_room() override;

    Door *make_door(Room &r1, Room &r2) override;

};


#endif //LAB009_DYSTOPIANMAZEFACTORY_HPP
