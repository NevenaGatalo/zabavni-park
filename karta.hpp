#ifndef KARTA_HPP_INCLUDED
#define KARTA_HPP_INCLUDED
#include <iostream>
using namespace std;
enum TipKarte {decija, odrasla, porodicna};

class Karta
{
private:
    TipKarte tip;
    bool vip;
    unsigned cena;
public:
    Karta (){tip=odrasla; vip=false; cena=600;}
    Karta (TipKarte t, bool v, unsigned c){tip=t; vip=v; cena=c;}
    Karta (const Karta &k){tip=k.tip; vip=k.vip; cena=k.cena;}

    void setTip(TipKarte t){tip=t;}
    void setVip(bool v){vip=v;}
    void setCena(unsigned c){cena=c;}

    TipKarte getTip()const{return tip;}
    bool getVip()const{return vip;}
    unsigned getCena()const{return cena;}

    void ispis_tipa_karte()
    {
        if(tip==decija)
            cout<<"decija"<<endl;
       else if(tip==odrasla)
            cout<<"odrasla"<<endl;
       else if(tip==porodicna)
            cout<<"porodicna"<<endl;
    }

    friend ostream& operator<<(ostream& out, const Karta& k)
    {
        out<<"tip: ";
        if(k.getTip()==0){out<<"decija"<<endl;}
        if(k.getTip()==1){out<<"odrasla"<<endl;}
        if(k.getTip()==2){out<<"porodicna"<<endl;}
        out<<"vip: ";
        if(k.getVip()==true){out<<"jeste"<<endl;}
        if(k.getVip()==false){out<<"nije"<<endl;}
        out<<"cena: "<<k.getCena();
        return out;
    }
};

#endif // KARTA_HPP_INCLUDED
