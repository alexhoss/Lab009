//
// Created by Xan on 2019-04-04.
//
#include "Door.hpp"

#ifndef LAB009_DYSTOPIANDOOR_HPP
#define LAB009_DYSTOPIANDOOR_HPP


class DystopianDoor : public Door {

public:

    void print() override;

    DystopianDoor(Room *r1, Room *r2);


};


#endif //LAB009_DYSTOPIANDOOR_HPP
