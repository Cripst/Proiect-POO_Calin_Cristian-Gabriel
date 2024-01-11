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
    DefineSharedPreperty();
    std::cout<<"The floor:";std::cin>>floor;
}
void Apartment::DisplayInformation(){
    std::cout<<"Type: Apartment";
    DisplaySharedProperty();
std::cout<<"Floor: "<<floor<<std::endl;
}