//
// Created by Xan on 2019-04-04.
//

#include "DystopianMaze.hpp"

void DystopianMaze::print() {
    cout << "\nDystopian Maze Contents\n=============\n" << endl;
    Maze::print();
}

void DystopianMaze::insertDoor(Door *d) {
    doors.push_back(d);

}

void DystopianMaze::insertWall(Wall *w) {
    walls.push_back(w);

}

void DystopianMaze::insertRoom(Room *r) {
    rooms.push_back(r);

}

DystopianMaze::DystopianMaze() {
    cout << "Dystopian Maze Created" << endl;


}
