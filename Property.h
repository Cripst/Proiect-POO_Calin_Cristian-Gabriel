//
// Created by crist on 12/1/2023.
//
#include <iostream>
#ifndef OOP_PROPERTY_H
#define OOP_PROPERTY_H


#include "Property.h"
class Property{


protected:
    std::string adresa;
    std::string nume;
    int nr_pers;
    int cost;
    int ID;


public:
    friend std::ostream &operator<<(std::ostream &os, const Property &aProperty);

    static int contor_ID;
    void afis();


     explicit Property(const std::string& ="",const std::string& ="",int=0, int=-1);
    ~Property() = default;
    // Property(Property &c);
    void set_adresa();
    void set_nume();
    void set_nr_pers();
    void set_cost();
    void def();
    virtual void def2();
    virtual void afis2() = 0;

};

#endif //OOP_PROPERTY_H
