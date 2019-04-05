//
// Created by Xan on 2019-04-04.
//

#include <iostream>
#include "DystopianRoom.hpp"

using namespace std;

void DystopianRoom::print() {
    std::cout << "Dystopian Room" << name << std::endl;

}

DystopianRoom::DystopianRoom() {
    name = "D" + to_string(staticIDInit());
    std::cout << "Dystopian Room created: " << name << std::endl;
}

int DystopianRoom::staticIDInit() {
    static int staticID = 0;
    return staticID++;
}
