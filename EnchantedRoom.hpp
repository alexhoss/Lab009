//
// Created by Xan on 2019-04-04.
#include <iostream>
#include "Room.hpp"

#ifndef LAB009_ENCHANTEDROOM_HPP
#define LAB009_ENCHANTEDROOM_HPP

#include <string>

using namespace std;

class EnchantedRoom : public Room {
public:
    static int staticIDInit();

    EnchantedRoom();

    void print() override;

};


#endif //LAB009_ENCHANTEDROOM_HPP
