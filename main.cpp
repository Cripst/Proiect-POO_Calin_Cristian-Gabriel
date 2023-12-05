#include "Property.h"
#include "User.h"
#include "Meniu.h"
#include "variables.h"
//a
std::vector<Property> l;
int z = 2;
int main(){

    Property a("Bucuresti","novotel",3,200);
    Property b("Bacau","Intercontinental",3,1000);
    l.push_back(a);
    l.push_back(b);

    Persoana pers;
    pers.set_nume();
    pers.set_parola();
    pers.set_varsta();

    meniu log("logg.txt");
    log.meniu1(l,z);

    std::cin>>z;

    return 0;
}




//destructor


