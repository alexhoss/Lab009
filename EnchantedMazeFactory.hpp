//
// Created by Xan on 2019-04-03.
//
#include "MazeFactory.hpp"
#include "EnchantedWall.hpp"
#include "EnchantedMaze.hpp"

#ifndef LAB009_ENCHANTEDMAZEFACTORY_HPP
#define LAB009_ENCHANTEDMAZEFACTORY_HPP


class EnchantedMazeFactory : public MazeFactory {

public:

    Maze *make_maze() override;

    Wall *make_wall() override;

    Room *make_room() override;

    Door *make_door(Room &r1, Room &r2) override;

};


#endif //LAB009_ENCHANTEDMAZEFACTORY_HPP
