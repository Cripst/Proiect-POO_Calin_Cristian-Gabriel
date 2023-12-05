//
// Created by crist on 12/1/2023.
//
#include <iostream>
#ifndef OOP_PROPERTY_H
#define OOP_PROPERTY_H


#include "Property.h"
class Property{


private:
    std::string adresa;
    std::string nume;
    int nr_pers;
    int cost;
    int ID;


public:
    static int contor_ID;
    void afis();


     Property(std::string="",std::string="",int=0, int=-1);
    ~Property() = default;
    // Property(Property &c);
    void set_adresa();
    void set_nume();
    void set_nr_pers();
    void set_cost();

};

#endif //OOP_PROPERTY_H
