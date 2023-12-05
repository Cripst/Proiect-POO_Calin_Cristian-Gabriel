//
// Created by crist on 12/2/2023.
//

#ifndef OOP_MENIU_H
#define OOP_MENIU_H
#include <iostream>
#include <ctime>
#include <fstream>
#include "Property.h"
#include "variables.h"
#include <vector>

class meniu{
private:
    std::ofstream file;
//    time_t ultima_inregistrare;
public:
    explicit meniu(const std::string& filename);

    ~meniu();
    static Property create_Property();
    void meniu1(std::vector<Property>,int);
    };

///sadfasdf


#endif //OOP_MENIU_H
