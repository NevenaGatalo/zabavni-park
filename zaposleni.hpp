#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED
#include "posetilac.hpp"
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
    Zaposleni():Osoba("Neko", "Zaposlen", 20, 1), plata(5000), tip(pekar){rv.pocetak=7; rv.kraj=8;}
    Zaposleni(string i, string pr, int g, int ide, int p, TipZaposlenog t, unsigned po, unsigned k ):Osoba(i, pr, g, ide), plata(p), tip(t){rv.pocetak=po, rv.kraj=k;}
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
    /*Zaposleni(Osoba &o, TipZaposlenog tipz, unsigned p, unsigned k)
    {
        plata=5000;
        tip=tipz;
        rv.pocetak=p;
        rv.kraj=k;

    }*/
    TipZaposlenog getTip()const {return tip;}

    friend ostream& operator<<(ostream& i, const Zaposleni& z)
    {
        i<<"ISPIS ZAPOSLENOG"<<endl;
        i<<(Osoba)z;
        i<<"        tip: ";
        if(z.getTip()==0){i<<"animator"<<endl;}
        if(z.getTip()==1){i<<"cuvar"<<endl;}
        if(z.getTip()==2){i<<"prodavac karata"<<endl;}
        if(z.getTip()==3){i<<"pekar"<<endl;}
        i<<"        radno vreme: "<<z.rv.pocetak<<"-"<<z.rv.kraj<<endl<<endl;
        return i;
    }
    void predstavljanje()
    {
        Osoba::predstavljanje();
        if(tip==0)
            cout<<"I ja sam zaposlen kao animator"<<endl;
        if(tip==1)
            cout<<"I ja sam zaposlen kao cuvar"<<endl;
        if(tip==2)
            cout<<"I ja sam zaposlen kao prodavac karata"<<endl;
        if(tip==3)
            cout<<"I ja sam zaposlen kao pekar"<<endl;
        cout<<endl;
    }
};

#endif // ZAPOSLENI_HPP_INCLUDED
