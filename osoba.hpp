#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED
using namespace std;
class Osoba
{
protected:
    string ime;
    string prezime;
    int godine;
public:
    Osoba()
    {
        ime=" ";
        prezime=" ";
        godine=1;
    }
    Osoba(string i, string p, int g)
    {
        ime=i;
        prezime=p;
        godine=g;
    }
    Osoba(const Osoba &o1)
    {
        ime=o1.ime;
        prezime=o1.prezime;
        godine=o1.godine;
    }
    int getGodine()const{return godine;}
    string getIme()const{return ime;}
    string getPrezime()const{return prezime;}

    friend ostream& operator<<(ostream& i, const Osoba &o)
    {
        i<<"ime: "<<o.getIme()<<endl;
        i<<"prezime: "<<o.getPrezime()<<endl;
        i<<"godine: "<<o.getGodine()<<endl;
        return i;
    }
    virtual void predstavljanje()
    {
        cout<<"Ja sam "<<ime<<" "<<prezime<<endl;
    }
};

#endif // OSOBA_HPP_INCLUDED
