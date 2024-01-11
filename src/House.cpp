//
// Created by crist on 12/7/2023.
//

#include "../headers/House.h"

House::House(const std::string& l,const std::string& n ,int nr, int c, const std::string& garden){
    this->ID = ID_count;
    ID_count++;
    this->adress = l;
    this->name = n;
    this->max_pers = nr;
    this->price = c;
    this->garden = garden;
}
void House::define(){
    DefineSharedPreperty();
    std::cout<<"Has garden(yes/no): ";std::cin>>garden;
}
void House::DisplayInformation(){
    std::cout<<"Type: House";
    DisplaySharedProperty();
    std::cout<<"Has garden:"<<garden<<std::endl;
};