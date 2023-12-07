//
// Created by crist on 12/7/2023.
//

#include "../headers/Cabin.h"


Cabin::Cabin(const std::string& l,const std::string& n ,int nr, int c, const std::string& garden){
    this->ID = ID_count;
    ID_count++;
    this->adress = l;
    this->name = n;
    this->max_pers = nr;
    this->price = c;
    this->garden = garden;
}
void Cabin::define(){
    def();
    std::cout<<"Is placed (woods, mountain, ect.): ";std::cin>>garden;
}
void Cabin::afis2(){
    std::cout<<"Type: Cabin";
    afis();
    std::cout<<"It is situated: "<<garden<<std::endl;
}