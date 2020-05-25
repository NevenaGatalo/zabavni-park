#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED
#include <fstream>

class Osoba
{
protected:
    string ime;
    string prezime;
    int godine;
    int id;
public:
    Osoba()
    {
        ime=" ";
        prezime=" ";
        godine=1;
        id=1;
    }
    Osoba(string i, string p, int g, int ide)
    {
        ime=i;
        prezime=p;
        godine=g;
        id=ide;
    }
    Osoba(const Osoba &o1)
    {
        ime=o1.ime;
        prezime=o1.prezime;
        godine=o1.godine;
        id=o1.id;
    }
    int getGodine()const{return godine;}
    string getIme()const{return ime;}
    string getPrezime()const{return prezime;}
    int getID()const{return id;}

    friend ostream& operator<<(ostream& i, const Osoba &o)
    {
        i<<"        id: "<<o.getID()<<endl;
        i<<"        ime: "<<o.getIme()<<endl;
        i<<"        prezime: "<<o.getPrezime()<<endl;
        i<<"        godine: "<<o.getGodine()<<endl;
        return i;
    }
    virtual void predstavljanje()
    {
        cout<<"Ja sam "<<ime<<" "<<prezime<<endl;
    }

};

#endif // OSOBA_HPP_INCLUDED
