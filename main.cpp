#include <iostream>
//#include <string.h>
//#include <stdlib.h>
#include <vector>
#include <fstream>
#include <ctime>
using namespace std;

class Locatie{
//    static  void creare_locatie(vector<Locatie> l){
//        string adresa,nume;
//        int p, c;
//        cout<<"Numele locatiei:\n";cin>>nume;
//        cout<<"Adresa locatiei\n";cin>>adresa;
//        cout<<"nr max pers\n";cin>>p;
//        cout<<"cost:\n";cin>>c;
//        Locatie loc(adresa,nume,p,c);
//        l.push_back(loc);
//    }

private:
    string adresa;
    string nume;
    int nr_pers;
    int cost;
    int ID;


public:
    static int contor_ID;


    void afis();

    explicit Locatie(string l = "",string n = "",int nr = 0, int c = -1){
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
    // Constructor parametrizat
    Persoana(string nume = "", string parola = "", int varsta = 0){
        this->nume = nume;
        this->parola = parola;
        this->varsta = varsta;
    }
    //destructorul este definit in afara clasei
    ~Persoana();
    void show(){
        cout<<nume<<parola<<varsta;
    }

    //functii de setare a atributelor
    void set_nume();
    void set_parola();
    void set_varsta();


};
class meniu{
private:
    ofstream file;
    time_t ultima_inregistrare;
public:
    meniu(const std::string& filename) {
        file.open(filename);
        if (!file.is_open()) {
            std::cerr << "Failed to open file: " << filename << std::endl;
        }
        std::time_t currentTime = std::time(nullptr);
        std::tm* localTime = std::localtime(&currentTime);
        int hours = localTime->tm_hour;
        int minutes = localTime->tm_min;
        int seconds = localTime->tm_sec;
        if (file.is_open()) {
            file <<"ora log in: "<< hours << ":" << minutes << ":" << seconds << std::endl;


        }}

    ~meniu() {

        if (file.is_open()) {

            file.close();

        }
    }
    static Locatie create_locatie();
    void meniu1();

};
vector<Locatie> l;
int z = 2;
int main(){

    Locatie a("Bucuresti","novotel",3,200);
    Locatie b("Bacau","Intercontinental",3,1000);
    l.push_back(a);
    l.push_back(b);

    Persoana pers;
    pers.set_nume();
    pers.set_parola();
    pers.set_varsta();

    meniu log("logg.txt");
    log.meniu1();

    cin>>z;

    return 0;
}


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
void  Locatie::afis(){

    cout<<"\nID:"<<this->ID<<"\n";
    cout<<"Adresa:"<<this->adresa<<"\n";
    cout<<"Nume:"<<this->nume<<"\n";
    cout<<"Numar max persoane:"<<this->nr_pers<<"\n";
    cout<<"Cost per noapte:"<<this->cost<<"\n";

}
//destructor
Locatie::~Locatie(){

}



Persoana::~Persoana(){
    ofstream file;
    file.open("date.txt");
    file << nume;
    file << parola;
    file << varsta;
    file.close();
}

void Persoana::set_nume(){
    cout << "Introduceti numele:\n";
    cin >> nume ;

}
void Persoana::set_parola(){
    cout << "Introduceti parola\n";
    cin >> parola;
}
void Persoana::set_varsta(){
    cout << "Introduceti varsta\n";
    cin >> varsta;
}



void meniu::meniu1(){
    system("cls");
    int x,back;
    cout<<"1.Vezi locatii\n";
    cout<<"2.Adauga propria locatie\n";
    cin>>x;
    switch (x)
    {
        case 1:
            for (int i =0;i<z;i++)
                l[i].afis();
            cout<<"apasa orice pentru a te intoarce:\n";

            cin>> back;
            meniu1();

            break;
        case 2:
            l.push_back(this->create_locatie());
            z++;
            meniu1();


            break;
        default:
            exit(0);
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

 Locatie meniu::create_locatie(){
    string adresa,nume;
    int p, c;
    cout<<"Numele locatiei:\n";cin>>nume;
    cout<<"Adresa locatiei\n";cin>>adresa;
    cout<<"nr max pers\n";cin>>p;
    cout<<"cost:\n";cin>>c;
    Locatie loc(adresa,nume,p,c);
    return loc;
}
