//
// Created by crist on 12/7/2023.
//

#include "Cabin.h"


Cabin::Cabin(const std::string& l,const std::string& n ,int nr, int c, const std::string& garden){
    this->ID = contor_ID;
    contor_ID++;
    this->adresa = l;
    this->nume = n;
    this->nr_pers = nr;
    this->cost = c;
    this->garden = garden;
}
void Cabin::define(){
    def();
    std::cout<<"Is placed (woods, mountain, ect.): ";std::cin>>garden;
}
void Cabin::afis2(){
    afis();
    std::cout<<"It is situated: "<<garden<<std::endl;
};