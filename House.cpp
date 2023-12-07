//
// Created by crist on 12/7/2023.
//

#include "House.h"

House::House(const std::string& l,const std::string& n ,int nr, int c, const std::string& garden){
    this->ID = contor_ID;
    contor_ID++;
    this->adresa = l;
    this->nume = n;
    this->nr_pers = nr;
    this->cost = c;
    this->garden = garden;
}
void House::define(){
    def();
    std::cout<<"Has garden(yes/no): ";std::cin>>garden;
}
void House::afis2(){
    afis();
    std::cout<<"Has garden:"<<garden<<std::endl;
};