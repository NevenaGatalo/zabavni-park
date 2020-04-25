#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED
typedef struct
{
    unsigned pocetak;
    unsigned kraj;
}RadnoVreme;
enum TipZaposlenog {animator, cuvar, prodavac_karata, pekar};

class Zaposleni: public Osoba
{
private:
    int plata;
    TipZaposlenog tip;
    RadnoVreme rv;
public:
    Zaposleni():Osoba("Neko", "Zaposlen", 20), plata(5000), tip(pekar){rv.pocetak=7; rv.kraj=8;}
    Zaposleni(string i, string pr, int g, int p, TipZaposlenog t, RadnoVreme r):Osoba(i, pr,g), plata(p), tip(t){rv=r;}
    Zaposleni(const Zaposleni &z):Osoba(z), plata(z.plata), tip(z.tip), rv(z.rv){}
};

#endif // ZAPOSLENI_HPP_INCLUDED
