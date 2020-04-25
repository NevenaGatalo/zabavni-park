#ifndef POSETILAC_HPP_INCLUDED
#define POSETILAC_HPP_INCLUDED

class Posetilac: public Osoba
{
private:
    double visina;
    Karta karta;
public:
    Posetilac():Osoba("Neki", "Posetilac", 16), visina(160){karta.setTip(odrasla); karta.setVip(false); karta.setCena(300);}
    Posetilac(string i, string p, int g, double v, TipKarte t, bool vi, unsigned c):Osoba(i, p, g), visina(v)
    {karta.setTip(t);
     karta.setVip(vi);
     karta.setCena(c);
    }
    Posetilac(const Posetilac &p):Osoba(p), visina(p.visina), karta(p.karta){}
};

#endif // POSETILAC_HPP_INCLUDED
