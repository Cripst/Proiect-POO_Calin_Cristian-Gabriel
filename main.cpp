#include "Property.h"
#include "User.h"
#include "Meniu.h"
#include "variables.h"
#include "Apartament.h"
#include "House.h"
#include "Cabin.h"
#include <memory>
std::shared_ptr<Apartment> e = std::make_shared<Apartment>("Bucuresti","Ceva",3,200,4);
std::vector<std::shared_ptr<Property>> m;
std::vector<Property> l;

#define CLASS_NAME(class_name) \
    []() { \
        std::string fullClassName = #class_name; \
        size_t colonsPos = fullClassName.find_last_of("::"); \
        return colonsPos != std::string::npos ? fullClassName.substr(colonsPos + 1) : fullClassName; \
    }()


int z = 3;
int main(){
    meniu log("logg.txt");
//    Property a("Bucuresti","novotel",3,200);
//    Property b("Bacau","Intercontinental",3,1000);
//    l.push_back(a);
//    l.push_back(b);
//    std::shared_ptr<Property> a = std::make_shared<Property>("asdf","asd",3,2);
//    m.push_back(a);
    m.push_back(e);
    std::shared_ptr<House> f = std::make_shared<House>("a","a",2,1);
    m.push_back(f);
//    m.push_back(e);
//    m[0]->afis2();
    Persoana pers;
    pers.set_nume();
    pers.set_parola();
    pers.set_varsta();

//    Apartment d;
//    d.define();
//    l.push_back(d);

    log.meniu1(m,z);

    std::cin>>z;

    return 0;
}




//destructor


