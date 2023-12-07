//
// Created by crist on 12/7/2023.
//

#ifndef OOP_HOUSE_H
#define OOP_HOUSE_H

#include <ostream>
#include "Property.h"

class House: public Property {
public:
    explicit House(const std::string& ="",const std::string& ="",int=0, int=-1,const std::string& = "no");
    void afis2()override;
    void define();

private:
    std::string garden;


};

#endif //OOP_HOUSE_H
