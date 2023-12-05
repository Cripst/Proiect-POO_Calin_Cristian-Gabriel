//
// Created by crist on 12/2/2023.
//

#ifndef OOP_USER_H
#define OOP_USER_H


class Persoana{
private:
    std::string nume;
    std::string parola;
    int varsta;

public:
    // Constructor parametrizat
    Persoana(const std::string&  = "", std::string = "", int = 0);
    //destructorul este definit in afara clasei
    ~Persoana();
    //void show();

    //functii de setare a atributelor
    void set_nume();
    void set_parola();
    void set_varsta();


};

#endif //OOP_USER_H
