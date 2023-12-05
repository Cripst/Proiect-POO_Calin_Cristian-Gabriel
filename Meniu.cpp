//
// Created by crist on 12/2/2023.
//

#include "Meniu.h"

    meniu::meniu(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            std::cerr << "Failed to open file: " << filename << std::endl;
        }
        std::time_t currentTime = std::time(nullptr);
        std::tm* localTime = std::localtime(&currentTime);
        int hours = localTime->tm_hour;
        int minutes = localTime->tm_min;
        int seconds = localTime->tm_sec;
        if (file.is_open()) {
            file <<"ora log in: "<< hours << ":" << minutes << ":" << seconds << std::endl;


        }}

    meniu::~meniu() {

        if (file.is_open()) {

            file.close();

        }
    }

///sadfasdf
;


void meniu::meniu1(std::vector<Property> l, int z){
//    system("cls");
    int x,back;
    std::cout<<"1.Vezi locatii\n";
    std::cout<<"2.Adauga propria Property\n";
    std::cin>>x;
    switch (x)
    {
        case 1:
            for (int i =0;i<z;i++)
                l[i].afis();
            std::cout<<"apasa orice pentru a te intoarce:\n";

            std::cin>> back;
            meniu1(l,z);

            break;
        case 2:
            l.push_back(this->create_Property());
            z++;
            meniu1(l,z);


            break;
        default:
            exit(0);
//            return;
//            break;
    }
}



Property meniu::create_Property(){
    std::string adresa,nume;
    int p, c;
    std::cout<<"Numele Propertyi:\n";std::cin>>nume;
    std::cout<<"Adresa Propertyi\n";std::cin>>adresa;
    std::cout<<"nr max pers\n";std::cin>>p;
    std::cout<<"cost:\n";std::cin>>c;
    Property loc(adresa,nume,p,c);
    return loc;
}
