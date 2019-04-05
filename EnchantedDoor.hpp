//
// Created by Xan on 2019-04-04.
//
#include "Door.hpp"

#ifndef LAB009_ENCHANTEDDOOR_HPP
#define LAB009_ENCHANTEDDOOR_HPP

using namespace std;

class EnchantedDoor : public Door {

public:

    void print() override;

    EnchantedDoor(Room *r1, Room *r2);


};


#endif //LAB009_ENCHANTEDDOOR_HPP
