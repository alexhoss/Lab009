//
// Created by Xan on 2019-04-04.
//

#include "EnchantedDoor.hpp"

void EnchantedDoor::print() {
    std::cout << "Enchanted Door Connects " << r1->name << " and " << r2->name << std::endl;

}

EnchantedDoor::EnchantedDoor(Room *r1, Room *r2) : Door(r1, r2) {
    std::cout << "Enchanted Door Created" << std::endl;
}