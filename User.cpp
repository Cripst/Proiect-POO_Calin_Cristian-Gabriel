//
// Created by crist on 12/2/2023.
//
#include <iostream>
#include "User.h"
#include <fstream>

    // Constructor parametrizat
    Persoana::Persoana(const std::string& nume, std::string parola, int varsta){
        this->nume = nume;
        this->parola = parola;
        this->varsta = varsta;
    }
    //destructorul este definit in afara clasei
    Persoana::~Persoana(){
        std::ofstream file;
        file.open("date.txt");
        file << nume;
        file << parola;
        file << varsta;
        file.close();
    }
//    void Persoana::show(){
//        std::cout<<nume<<parola<<varsta;
//    }

    //functii de setare a atributelor

void Persoana::set_nume(){
    std::cout << "Introduceti numele:\n";
    std::cin >> nume ;

}
void Persoana::set_parola(){
    std::cout << "Introduceti parola\n";
    std::cin >> parola;
}
void Persoana::set_varsta(){
    std::cout << "Introduceti varsta\n";
    std::cin >> varsta;
}

