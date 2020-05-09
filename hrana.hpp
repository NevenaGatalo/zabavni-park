#ifndef HRANA_HPP_INCLUDED
#define HRANA_HPP_INCLUDED
using namespace std;
enum TipHrane {pice, hrana};

class Hrana
{
private:
    string naziv;
    unsigned cena;
    TipHrane tip;
    bool slano;
public:
    Hrana(){naziv="djevrek"; cena=30; tip=hrana; slano=true;}
    Hrana(string n, unsigned c, TipHrane t, bool s){naziv=n; cena=c; tip=t; slano=s;}
    Hrana(const Hrana &h){naziv=h.naziv; cena=h.cena; tip=h.tip; slano=h.slano;}

    string getNaziv()const{return naziv;}
    unsigned getCena()const{return cena;}
    TipHrane getTip()const{return tip;}
    bool getSlano()const{return slano;}

    friend ostream& operator<<(ostream& out, const Hrana &h)
    {
        out<<"ISPIS HRANE"<<endl;
        out<<"naziv: "<<h.getNaziv()<<endl;
        out<<"tip: ";
        if(h.getTip()==0){out<<"pice"<<endl;}
        if(h.getTip()==1){out<<"hrana"<<endl;}
        out<<"cena: "<<h.getCena()<<" din"<<endl;
        if(h.getSlano()==true){out<<"tip: slano"<<endl;}
        else{out<<"tip: slatko"<<endl;}
        return out;
    }
};

#endif // HRANA_HPP_INCLUDED
