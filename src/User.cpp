//
// Created by crist on 12/2/2023.
//
#include <iostream>
#include "../headers/User.h"
#include <fstream>

    // Constructor parametrizat
    Persoana::Persoana(const std::string& name, std::string password, int age){
        this->name = name;
        this->password = password;
        this->age = age;
    }
    //destructorul este definit in afara clasei
    Persoana::~Persoana(){
        std::ofstream file;
        file.open("date.txt");
        file << name;
        file << password;
        file << age;
        file.close();
    }
//    void Persoana::show(){
//        std::cout<<name<<password<<age;
//    }

    //functii de setare a atributelor

void Persoana::set_name(){
    std::cout << "Your name:\n";
    std::cin >> name ;

}
void Persoana::set_password(){
    std::cout << "Password:\n";
    std::cin >> password;
}
void Persoana::set_age(){
    std::cout << "Your age\n";
    std::cin >> age;
}

