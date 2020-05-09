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

    bool dodeli_kartu(Posetilac &p, Karta &k)
    {
        if(p.getGodine()<16)
        {
            k.setTip(decija);
            k.setVip(false);
            k.setCena(300);
            return true;
        }
        else if(p.getGodine()>16)
        {
            k.setTip(odrasla);
            k.setVip(false);
            k.setCena(600);
            return true;
        }

        return false;
    }

    /*bool prodaj_hranu(Posetilac &p)
    {

    }*/
    Zaposleni(Osoba &o, TipZaposlenog tipz, unsigned p, unsigned k)
    {
        plata=5000;
        tip=tipz;
        rv.pocetak=p;
        rv.kraj=k;

    }
    TipZaposlenog getTip()const {return tip;}

    friend ostream& operator<<(ostream& i, const Zaposleni& z)
    {
        i<<"ISPIS ZAPOSLENOG"<<endl;
        i<<(Osoba)z;
        i<<"tip: ";
        if(z.getTip()==0){i<<"animator"<<endl;}
        if(z.getTip()==1){i<<"cuvar"<<endl;}
        if(z.getTip()==2){i<<"prodavac karata"<<endl;}
        if(z.getTip()==3){i<<"pekar"<<endl;}
        i<<"radno vreme: "<<z.rv.pocetak<<"-"<<z.rv.kraj<<endl<<endl;
        return i;
    }
};

#endif // ZAPOSLENI_HPP_INCLUDED
