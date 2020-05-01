#ifndef POSETILAC_HPP_INCLUDED
#define POSETILAC_HPP_INCLUDED
#include "karta.hpp"

class Posetilac: public Osoba
{
private:
    double visina;
    Karta karta;
public:
    Posetilac():Osoba(), visina(160), karta(odrasla, false, 600){}
    Posetilac(string i, string p, int g, double v, TipKarte t, bool vi, unsigned c):Osoba(i, p, g), visina(v), karta(t,vi,c){}
    Posetilac(const Posetilac &p):Osoba(p), visina(p.visina), karta(p.karta){}

    double getVisina()const{return visina;}
    Karta getKarta()const{return karta;}

    void setKarta(Karta k){karta=k;}


};

#endif // POSETILAC_HPP_INCLUDED
