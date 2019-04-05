//
// Created by Xan on 2019-04-04.
//

#include "EnchantedMaze.hpp"

void EnchantedMaze::insertDoor(Door *d) {
    doors.push_back(d);
}

void EnchantedMaze::insertWall(Wall *w) {
    walls.push_back(w);

}

void EnchantedMaze::insertRoom(Room *r) {
    rooms.push_back(r);

}

void EnchantedMaze::print() {
    cout << "\nEnchanted Maze Contents\n=================\n" << endl;
    Maze::print();
}

EnchantedMaze::EnchantedMaze() {
    cout << "Enchanted Maze Created" << endl;

}
