#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>

using namespace std;

class Locatie{
    static  void creare_locatie(vector<Locatie> l){
        string adresa,nume;
        int p, c;
        cout<<"Numele locatiei:\n";cin>>nume;
        cout<<"Adresa locatiei\n";cin>>adresa;
        cout<<"nr max pers\n";cin>>p;
        cout<<"cost:\n";cin>>c;
        Locatie loc(adresa,nume,p,c);
        l.push_back(loc);
    }

private:
    string adresa;
    string nume;
    int nr_pers;
    int cost;
    int ID;


public:
    static int contor_ID;
    static Locatie* locatie_noua();


    void const afis();
    //Locatie(){adresa = ""; nume = "" ;nr_pers= 1; cost = 7; ID = 0; }
    // Locatie(string,string,int, int);
    Locatie(string l = "",string n = "",int nr = 0, int c = -1){
        this->ID = contor_ID;
        contor_ID++;
        this->adresa = l;
        this->nume = n;
        this->nr_pers = nr;
        this->cost = c;
    }
    ~Locatie();
    // Locatie(Locatie &c);

    void set_adresa();
    void set_nume();
    void set_nr_pers();
    void set_cost();

};

class Persoana{
private:
    string nume;
    string parola;
    int varsta;

public:
    Persoana(string nume, string parola, int varsta);
    void show(){
        cout<<nume<<parola<<varsta;
    }
    void set_nume(string);
    void set_parola(string);
    void set_varsta(int);


};
class meniu{
private:

public:
    //void creare_locatie();
    meniu();

};
vector<Locatie> l;

int main(){
    string nume,parola;
    int varsta;
    cout<<"Introduceti numele:\n";
    cin>>nume;
    cout<<"Introduceti parola:\n";
    cin>>parola;
    cout<<"Introduceti varsta:\n";
    cin>>varsta;
    Persoana pers(nume,parola,varsta);


    //pers.show();

    Locatie a("Bucuresti","novotel",3,200);
    Locatie b("Bacau","Intercontinental",3,1000);
    Locatie* c = new Locatie("asd","asd",3,100);
    c->set_adresa();
    // a.locatie_noua();
    l.push_back(a);
    l.push_back(b);
    l.push_back(*c);


    //  Locatie c;
    meniu log;

    cin>>varsta;
    //a.afis();
    //b.afis();




    // Locatie a("bucuresti","novotel",4,200);
    // a.afis();
    // Locatie b(a);
    // b.afis();

    return 0;
}

//Constructor prametrizat
// Locatie::Locatie(string l = "",string n = "",int nr = 0, int c = -1){
//     this->ID = contor_ID;
//     contor_ID++;
//     this->adresa = l;
//     this->nume = n;
//     this->nr_pers = nr;
//     this->cost = c;
// }

//Constructor de copiere
int Locatie::contor_ID=1;
//     Locatie::Locatie(Locatie &c){
//     ID = contor_ID;
//     contor_ID++;
//     adresa = c.adresa;
//     nume = c.nume;
//     nr_pers = c.nr_pers;
//     cost = c.cost;

//     }


//functie de afisare
void const Locatie::afis(){

    cout<<"\nID:"<<this->ID<<"\n";
    cout<<"Adresa:"<<this->adresa<<"\n";
    cout<<"Nume:"<<this->nume<<"\n";
    cout<<"Numar max persoane:"<<this->nr_pers<<"\n";
    cout<<"Cost per noapte:"<<this->cost<<"\n";

}
//destructor
Locatie::~Locatie(){

}

// Constructor persoana
Persoana::Persoana(string nume = "", string parola = "", int varsta = 0){
    this->nume = nume;
    this->parola = parola;
    this->varsta = varsta;
}


void Persoana::set_nume(string nume){
    this->nume = nume;
}
void Persoana::set_parola(string parola){
    this->parola = parola;
}
void Persoana::set_varsta(int varsta){
    this->varsta = varsta;
}



meniu::meniu(){
    system("cls");
    int x;
    cout<<"1.Vezi locatii\n";
    cout<<"2.Adauga propria locatie\n";

    cin>>x;
    switch (x)
    {
        case 1:

            for (int i =0;i<2;i++)
                l[i].afis();

            break;
        case 2:
            Locatie* d;
            d= new Locatie("asd","asd",3,200);

            l.push_back(*d);

            main();
            break;
        default:
            main();
            return;
            break;
    }
}

void Locatie::set_adresa(){
    string adresa;
    cout<<"Adresa:\n";cin>>adresa;
    this->adresa = adresa;
}
void Locatie::set_nume(){
    string nume;
    cout<<"Nume:\n";cin>>nume;
    this->nume = nume;
}
void Locatie::set_nr_pers(){
    int p;
    cout<<"Numar maxim de persoane:\n";cin>>p;
    this->nr_pers = p;
}
void Locatie::set_cost(){
    int c;
    cout<<"Pretul pe noapte:\n";cin>>c;
    this->cost = c;
}
Locatie* Locatie::locatie_noua(){
    Locatie* nou = new Locatie;
    nou->set_adresa();
    nou->set_nume();
    nou->set_nr_pers();
    nou->set_cost();
    return nou;
}

// void meniu::creare_locatie(){
//     string adresa,nume;
//     int p, c;
//     cout<<"Numele locatiei:\n";cin>>nume;
//     cout<<"Adresa locatiei\n";cin>>adresa;
//     cout<<"nr max pers\n";cin>>p;
//     cout<<"cost:\n";cin>>c;
//     Locatie loc(adresa,nume,p,c);
//     l.push_back(loc);
// }