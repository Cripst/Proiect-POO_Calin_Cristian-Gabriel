//
// Created by crist on 12/7/2023.
//

#ifndef OOP_CABIN_H
#define OOP_CABIN_H

#include <ostream>
#include "Property.h"

class Cabin: public Property {
public:
    explicit Cabin(const std::string& ="",const std::string& ="",int=0, int=-1,const std::string& = "");
    void DisplayInformation()override;
    void define();

private:
    std::string garden;


};



#endif //OOP_CABIN_H
