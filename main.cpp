#include "Property.h"
#include "User.h"
#include "Meniu.h"
#include "variables.h"
#include "Apartament.h"
#include "House.h"
#include "Cabin.h"
#include <memory>
std::vector<std::shared_ptr<Property>> m;
std::shared_ptr<Apartment> a = std::make_shared<Apartment>("Bucuresti","Ceva",3,200,4);
std::shared_ptr<House> b = std::make_shared<House>("a","a",2,1,"yes");
std::shared_ptr<Cabin> c = std::make_shared<Cabin>("c","c",2,100,"in the woods");

int main(){
    try {

        std::unique_ptr<Apartment> apartment = std::make_unique<Apartment>("Modern","Apartment", 150.0, 3);
//        apartment->afis();
    }
     catch (const std::exception& e) {
        std::cerr << "Other Exception: " << e.what() << std::endl;
    }

    meniu log("logg.txt");
    m.push_back(a);
    m.push_back(b);
    m.push_back(c);

    Persoana pers;
    pers.set_nume();
    pers.set_parola();
    pers.set_varsta();

    log.meniu1(m);

    return 0;
}




//destructor


