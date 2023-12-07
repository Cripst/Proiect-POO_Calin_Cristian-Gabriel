//
// Created by crist on 12/7/2023.
//

#include "../headers/InvalideAtributeExceptions.h"



InvalidAttributeException::InvalidAttributeException(const std::string& attribute)
        : attributeName(attribute) {}

const char* InvalidAttributeException::what() const noexcept {
    return ("Invalid attribute exception: " + attributeName).c_str();
}