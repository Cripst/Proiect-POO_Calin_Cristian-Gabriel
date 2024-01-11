//
// Created by crist on 12/6/2023.
//

#ifndef OOP_APARTAMENT_H
#define OOP_APARTAMENT_H

#include <ostream>
#include "Property.h"

class Apartment: public Property {
public:
    explicit Apartment(const std::string& ="",const std::string& ="",int=0, int=-1,int = 0);
    void DisplayInformation ()override;
    void define()override;

    [[nodiscard]] virtual Apartment* clone() const {
        return new Apartment(*this);
    }

private:
    int floor;


};
#endif //OOP_APARTAMENT_H
