////
//// Created by crist on 12/1/2023.
////
#include <iostream>
#include "Property.h"

Property::Property(std::string l,std::string n ,int nr, int c){
        this->ID = contor_ID;
        contor_ID++;
        this->adresa = l;
        this->nume = n;
        this->nr_pers = nr;
        this->cost = c;
    }

void Property::set_adresa(){
    std::string adresa;
    std::cout << "Adresa:\n";
    std::cin >> adresa;
    this->adresa = adresa;
}

void Property::set_nume(){
    std::string nume;
    std::cout << "Nume:\n";
    std::cin >> nume;
    this->nume = nume;
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