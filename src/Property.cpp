////
//// Created by crist on 12/1/2023.
////
#include <iostream>
#include "../headers/Property.h"

Property::Property(const std::string& l,const std::string& n ,int nr, int c){
        this->ID = ID_count;
        ID_count++;
        this->adress = l;
        this->name = n;
        this->max_pers = nr;
        this->price = c;

    }
void Property::def(){
    set_adresa();
    set_nume();
    set_cost();
    set_nr_pers();

}

void Property::set_adresa(){

    std::cout << "Adresa:\n";
    std::cin >> adress;
}

void Property::set_nume(){
    std::cout << "Nume:\n";
    std::cin >> name;
}

void Property::set_nr_pers(){
    int p;
    std::cout << "Max pers:\n";
    std::cin >> p;
    this->max_pers = p;
}

void Property::set_cost(){
    int c;
    std::cout << "Price/night:\n";
    std::cin >> c;
    this->price = c;
}
int Property::ID_count=1;


//functie de afisare
void  Property::afis(){

    std::cout<<"\nID:"<<this->ID<<"\n";
    std::cout << "Adresa:" << this->adress << "\n";
    std::cout << "Nume:" << this->name << "\n";
    std::cout << "Numar max persoane:" << this->max_pers << "\n";
    std::cout << "Cost per noapte:" << this->price << "\n";

}

std::ostream &operator<<(std::ostream &os, const Property &aProperty) {
    os << "adress: " << aProperty.adress << std::endl << " name: " << aProperty.name << std::endl << " max_pers: " << aProperty.max_pers << std::endl
       << " price: " << aProperty.price << std::endl << " ID: " << aProperty.ID << std::endl;
    return os;
}

bool Property::operator==(const Property &rhs) const {
    return adress == rhs.adress &&
           name == rhs.name &&
           max_pers == rhs.max_pers &&
           price == rhs.price &&
           ID == rhs.ID;
}

bool Property::operator!=(const Property &rhs) const {
    return !(rhs == *this);
}

void Property::show_total() {
    std::cout << "Number of Accomodations:" << ID_count;
}