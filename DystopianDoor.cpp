//
// Created by Xan on 2019-04-04.
//

#include "DystopianDoor.hpp"

void DystopianDoor::print() {
    std::cout << "Dystopian Door Connects " << r1->name << " and " << r2->name << std::endl;
}

DystopianDoor::DystopianDoor(Room *r1, Room *r2) : Door(r1, r2) {
    std::cout << "Dystopian Door Created" << std::endl;


}
