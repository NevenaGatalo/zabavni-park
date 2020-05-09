#include <iostream>
#include "karta.hpp"
#include "zabavni_park.hpp"
#include "profit.hpp"
#include "vreme.hpp"
#include "osoba.hpp"
#include "posetilac.hpp"
#include "zaposleni.hpp"
using namespace std;
ostream& operator<<(ostream& out, const Karta& k)
    {
        out<<"tip: ";
        if(k.getTip()==0){out<<"decija"<<endl;}
        if(k.getTip()==1){out<<"odrasla"<<endl;}
        if(k.getTip()==2){out<<"porodicna"<<endl;}
        out<<"vip: ";
        if(k.getVip()==true){out<<"jeste"<<endl;}
        if(k.getVip()==false){out<<"nije"<<endl;}
        out<<"cena: "<<k.getCena();
        return out;
    }
ostream& operator<<(ostream& out, const Posetilac& p)
    {
        out<<"ISPIS POSETIOCA"<<endl;
        out<<(Osoba)p;
        out<<p.getKarta()<<endl;
        out<<"ID: "<<p.getID()<<endl<<endl;
        return out;
    }

int main()
{
    Zaposleni o1;
    cout<<o1<<endl;
    Hrana h1;
    cout<<h1<<endl;
    Posetilac p1;
    cout<<p1<<endl;

    cout<<"ukupan profit: "<<Profit::getUkupnaKol()<<endl;

    //p1.citajFajl("posetioci.txt");
    //mislila sam da se kod izvrsava iz perspektive admina i da taj admin tj. korisnik koji predstavlja admina moze da napravi svoj zabavni park i svoj sou program i voznje i da moze da prodaje hranu i karte posetiocima
    return 0;
}
