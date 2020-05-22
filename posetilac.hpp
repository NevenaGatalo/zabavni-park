#ifndef POSETILAC_HPP_INCLUDED
#define POSETILAC_HPP_INCLUDED
#include <fstream>
#include "osoba.hpp"
#include "karta.hpp"

class Posetilac: public Osoba
{
private:
    double visina;
    Karta karta;
public:
    Posetilac():Osoba(), visina(160), karta(odrasla, false, 600){}
    Posetilac(string i, string p, int g, int ide, double v, TipKarte t, bool vi, unsigned c):Osoba(i, p, g, ide), visina(v), karta(t,vi,c){}
    Posetilac(const Posetilac &p):Osoba(p), visina(p.visina), karta(p.karta){}

    double getVisina()const{return visina;}
    Karta getKarta()const{return karta;}

    void predstavljanje()
    {
        Osoba::predstavljanje();
        cout<<"Ja sam posetilac i moja visina je "<<visina<<" m"<<", a tip moje karte je ";
        karta.ispis_tipa_karte();
        cout<<endl<<endl;
    }

    friend ostream& operator<<(ostream& out, const Posetilac& p)
    {
        out<<"ISPIS POSETIOCA"<<endl;
        out<<(Osoba)p;
        out<<p.getKarta()<<endl;
        out<<"ID: "<<p.getID()<<endl<<endl;
        return out;
    }


};

#endif // POSETILAC_HPP_INCLUDED
