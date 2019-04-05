//
// Created by Xan on 2019-04-04.
//
#include "Room.hpp"

#ifndef LAB009_DYSTOPIANROOM_HPP
#define LAB009_DYSTOPIANROOM_HPP


class DystopianRoom : public Room {
public:
    static int staticIDInit();


    DystopianRoom();

    void print() override;

};


#endif //LAB009_DYSTOPIANROOM_HPP
