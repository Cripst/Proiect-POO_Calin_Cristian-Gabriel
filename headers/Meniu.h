//
// Created by crist on 12/2/2023.
//
#include "memory"
#ifndef OOP_MENIU_H
#define OOP_MENIU_H
#include <iostream>
#include <ctime>
#include <fstream>
#include "Property.h"
#include "variables.h"
#include "Apartament.h"
#include "House.h"
#include "Cabin.h"
#include <vector>

class meniu{
private:
    std::ofstream file;
public:
    explicit meniu(const std::string& filename);
    ~meniu();
    void meniu1(std::vector<std::shared_ptr<Property>>);
    };

#endif //OOP_MENIU_H
