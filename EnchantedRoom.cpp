//
// Created by Xan on 2019-04-04.
//

#include <iostream>
#include "EnchantedRoom.hpp"


void EnchantedRoom::print() {
    std::cout << "Enchanted Room: " << name << std::endl;

}

EnchantedRoom::EnchantedRoom() {
    name = "E" + to_string(staticIDInit());
    std::cout << "Enchanted Room created: " << name << std::endl;
}

int EnchantedRoom::staticIDInit() {
    static int staticID = 0;
    return staticID++;
}
