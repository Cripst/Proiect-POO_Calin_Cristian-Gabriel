//
// Created by crist on 12/7/2023.
//

#ifndef OOP_INVALIDEATRIBUTEEXCEPTIONS_H
#define OOP_INVALIDEATRIBUTEEXCEPTIONS_H


//#include "AccommodationException.h"
#include <string>
#include "Property.h"

// Derived class for invalid attribute exception
class InvalidAttributeException : public Property {
private:
    std::string attributeName;

public:
    InvalidAttributeException(const std::string& attribute);
    const char* what() const noexcept;
};
#endif //OOP_INVALIDEATRIBUTEEXCEPTIONS_H
