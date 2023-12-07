//
// Created by crist on 12/2/2023.
//

#include "Meniu.h"
#include "Apartament.h"

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



void meniu::meniu1(std::vector<std::shared_ptr<Property>> l){
//    system("cls");
    int x,back;
    std::cout<<"1.Vezi locatii\n";
    std::cout<<"2.Adauga propria Property\n";
    std::cin>>x;
    switch (x)
    {
        case 1: {
            for (auto i: l) {
                std::cout<<"\n";
                i->afis2();
//
            }
            std::cout << "\n\napasa orice pentru a te intoarce:\n";

            std::cin >> back;
            meniu1(l);

            break;
        }
        case 2: {
        std::cout<<"Type:"<<"\n"<<"1.Apartment"<<"\n"<<"2.House"<<"/n"<<"3.Cabin\n";
        int x; std::cin>>x;
        if(x==1) {
                std::shared_ptr<Apartment> a = std::make_shared<Apartment>();
                a->define();
                l.push_back(a);
        }
        if(x==2){
            std::shared_ptr<House> a = std::make_shared<House>();
            a->define();
            l.push_back(a);
        }
        if(x==3){
            std::shared_ptr<Cabin> a = std::make_shared<Cabin>();
            a->define();
            l.push_back(a);
        }
        else meniu1(l);
//            meniu2(l);
//            std::shared_ptr<Apartment> a = std::make_shared<Apartment>();
//            a->define();
//            l.push_back(a);

            meniu1(l);


            break;
        }
        default: {
            exit(0);
//            return;
//            break;
        }
    }
}


//void meniu::create_property() {}
//Property meniu::create_Property(){
//    std::string adresa,nume;
//    int p, c;
//    std::cout<<"Numele Propertyi:\n";std::cin>>nume;
//    std::cout<<"Adresa Propertyi\n";std::cin>>adresa;
//    std::cout<<"nr max pers\n";std::cin>>p;
//    std::cout<<"cost:\n";std::cin>>c;
//    Property loc(adresa,nume,p,c);
//    return loc;
//}

//Property meniu::create_Property(){
//    Property prop;
//
//    return prop;
//}

//void meniu::meniu2(std::vector<Property> l ){
//    std::cout<<"Property type:";
//    std::cout<<"1.Apartament"<<std::endl;
//    std::cout<<"2.House"<<std::endl;
//    std::cout<<"3.Cabin"<<std::endl;
//    int x;
//    std::cin>>x;
//    if(x==1){
//
//    }
//
//
//}
