////
//// Created by crist on 12/1/2023.
////
#include <iostream>
#include "Property.h"

Property::Property(const std::string& l,const std::string& n ,int nr, int c){
        this->ID = contor_ID;
        contor_ID++;
        this->adresa = l;
        this->nume = n;
        this->nr_pers = nr;
        this->cost = c;

    }
void Property::def(){
    set_adresa();
    set_nume();
    set_cost();
    set_nr_pers();

}
//void Property::define(){std::cout<<"nu bun"<<std::endl;}
//void Property::afis2() {std::cout<<"nu bun2"<<std::endl;}

void Property::set_adresa(){

    std::cout << "Adresa:\n";
    std::cin >> adresa;
}

void Property::set_nume(){
    std::cout << "Nume:\n";
    std::cin >> nume;
}

void Property::set_nr_pers(){
    int p;
    std::cout << "Numar maxim de persoane:\n";
    std::cin >> p;
    this->nr_pers = p;
}

void Property::set_cost(){
    int c;
    std::cout << "Pretul pe noapte:\n";
    std::cin >> c;
    this->cost = c;
}
int Property::contor_ID=1;


//functie de afisare
void  Property::afis(){

    std::cout<<"\nID:"<<this->ID<<"\n";
    std::cout<<"Adresa:"<<this->adresa<<"\n";
    std::cout<<"Nume:"<<this->nume<<"\n";
    std::cout<<"Numar max persoane:"<<this->nr_pers<<"\n";
    std::cout<<"Cost per noapte:"<<this->cost<<"\n";

}

std::ostream &operator<<(std::ostream &os, const Property &aProperty) {
    os << "adresa: " << aProperty.adresa <<std::endl<< " nume: " << aProperty.nume <<std::endl<< " nr_pers: " << aProperty.nr_pers <<std::endl
       << " cost: " << aProperty.cost <<std::endl<< " ID: " << aProperty.ID<<std::endl;
    return os;
}

bool Property::operator==(const Property &rhs) const {
    return adresa == rhs.adresa &&
           nume == rhs.nume &&
           nr_pers == rhs.nr_pers &&
           cost == rhs.cost &&
           ID == rhs.ID;
}

bool Property::operator!=(const Property &rhs) const {
    return !(rhs == *this);
}

void Property::show_total() {
    std::cout<<"Number of Accomodations:"<<contor_ID;
}