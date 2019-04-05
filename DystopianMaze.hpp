//
// Created by Xan on 2019-04-04.
//
#include "Maze.hpp"

#ifndef LAB009_DYSTOPIANMAZE_HPP
#define LAB009_DYSTOPIANMAZE_HPP


class DystopianMaze : public Maze {
public:
    void print() override;

    void insertDoor(Door *d) override;

    void insertWall(Wall *w) override;

    void insertRoom(Room *r) override;

    DystopianMaze();

};


#endif //LAB009_DYSTOPIANMAZE_HPP
