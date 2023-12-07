//
// Created by crist on 12/6/2023.
//

#include "Apartament.h"
Apartment::Apartment(const std::string& l,const std::string& n ,int nr, int c, int floor){
    this->ID = contor_ID;
    contor_ID++;
    this->adresa = l;
    this->nume = n;
    this->nr_pers = nr;
    this->cost = c;
    this->floor = floor;
}
void Apartment::define(){
    def();
    std::cout<<"The floor:";std::cin>>floor;
}
void Apartment::afis2(){
    std::cout<<"Type: Apartment";
afis();
std::cout<<"Floor: "<<floor<<std::endl;
};