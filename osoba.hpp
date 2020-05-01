#ifndef OSOBA_HPP_INCLUDED
#define OSOBA_HPP_INCLUDED
using namespace std;
class Osoba
{
private:
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
};

#endif // OSOBA_HPP_INCLUDED
