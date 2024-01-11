//
// Created by crist on 12/1/2023.
//
#include <iostream>
#ifndef OOP_PROPERTY_H
#define OOP_PROPERTY_H
class Property{


protected:
    std::string adress;
    std::string name;
    int max_pers;
    int price;
    int ID;


public:
    bool operator==(const Property &rhs) const;

    bool operator!=(const Property &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const Property &aProperty);

    static int ID_count;
    static void show_total();
    void DisplaySharedProperty();


     explicit Property(const std::string& ="",const std::string& ="",int=0, int=-1);
    ~Property() = default;
    void set_adresa();
    void set_nume();
    void set_nr_pers();
    void set_cost();
    void DefineSharedPreperty() ;
    virtual void define() = 0;
    virtual void DisplayInformation() = 0;

};

#endif //OOP_PROPERTY_H
