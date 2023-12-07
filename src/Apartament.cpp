//
// Created by crist on 12/6/2023.
//

#include "../headers/Apartament.h"
Apartment::Apartment(const std::string& l,const std::string& n ,int nr, int c, int floor){
    this->ID = ID_count;
    ID_count++;
    this->adress = l;
    this->name = n;
    this->max_pers = nr;
    this->price = c;
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
}