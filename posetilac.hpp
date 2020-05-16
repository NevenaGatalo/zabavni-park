#ifndef POSETILAC_HPP_INCLUDED
#define POSETILAC_HPP_INCLUDED
#include <fstream>
#include "osoba.hpp"
#include "karta.hpp"

void citajTxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }



    else
        cout << "Neuspesno otvoren fajl";



}

class Posetilac: public Osoba
{
private:
    double visina;
    Karta karta;
    int id;
public:
    Posetilac():Osoba(), visina(160), karta(odrasla, false, 600), id(1){}
    Posetilac(string i, string p, int g, double v, TipKarte t, bool vi, unsigned c, int d):Osoba(i, p, g), visina(v), karta(t,vi,c), id(d){}
    Posetilac(const Posetilac &p):Osoba(p), visina(p.visina), karta(p.karta), id(p.id){}

    double getVisina()const{return visina;}
    Karta getKarta()const{return karta;}
    int getID()const{return id;}

    void citajFajl(string nazivFajla){
    cout<<"\tU fajlu pise: "<<endl;
    citajTxt(nazivFajla);
    cout<<endl<<endl;
    }
    void predstavljanje()
    {
        Osoba::predstavljanje();
        cout<<"Ja sam posetilac i moja visina je "<<visina<<" m"<<", a tip moje karte je ";
        karta.ispis_tipa_karte();
        cout<<endl<<endl;
    }

    friend ostream& operator<<(ostream& out, const Posetilac& p);
};

#endif // POSETILAC_HPP_INCLUDED
