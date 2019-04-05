//
// Created by Xan on 2019-04-04.
//
#include "Maze.hpp"
#include "EnchantedWall.hpp"
#include "EnchantedRoom.hpp"
#include "EnchantedDoor.hpp"

#ifndef LAB009_ENCHANTEDMAZE_HPP
#define LAB009_ENCHANTEDMAZE_HPP


class EnchantedMaze : public Maze {
public:

    void print() override;

    void insertDoor(Door *d) override;

    void insertWall(Wall *w) override;

    void insertRoom(Room *r) override;

    EnchantedMaze();

};


#endif //LAB009_ENCHANTEDMAZE_HPP
