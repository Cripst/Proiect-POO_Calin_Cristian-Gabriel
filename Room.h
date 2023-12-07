//
// Created by crist on 12/7/2023.
//

#ifndef OOP_ROOM_H
#define OOP_ROOM_H
#include "Apartament.h"
#include <memory>

class Room :public Apartment {
public:
   Room* clone();
    std::shared_ptr<Apartment> a;


};


#endif //OOP_ROOM_H
