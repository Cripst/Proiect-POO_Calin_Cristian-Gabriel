//
// Created by crist on 12/2/2023.
//

#include "../headers/Meniu.h"
#include "../headers/Apartament.h"

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

void meniu::meniu1(std::vector<std::shared_ptr<Property>> l){
    int x,back;
    std::cout<<"1.Se accomodations\n";
    std::cout<<"2.Add your own accomodation\n";
    std::cin>>x;
    switch (x)
    {
        case 1: {
            for (auto i: l) {
                std::cout<<"\n";
                i->DisplayInformation();
//
            }
            std::cout << "\n\npress anything to return:\n";

            std::cin >> back;

            meniu1(l);
            break;
        }
        case 2: {
        std::cout<<"Type:"<<"\n"<<"1.Apartment"<<"\n"<<"2.House"<<"\n"<<"3.Cabin\n";
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
        if(x==4){

        }
        else meniu1(l);

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
//    std::string adress,name;
//    int p, c;
//    std::cout<<"Numele Propertyi:\n";std::cin>>name;
//    std::cout<<"Adresa Propertyi\n";std::cin>>adress;
//    std::cout<<"nr max pers\n";std::cin>>p;
//    std::cout<<"price:\n";std::cin>>c;
//    Property loc(adress,name,p,c);
//    return loc;
//}

//Property meniu::create_Property(){
//    Property prop;
//
//    return prop;
//}
//aa
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
