#ifndef KARTA_HPP_INCLUDED
#define KARTA_HPP_INCLUDED
#include "posetilac.hpp"
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


private:

};

#endif // KARTA_HPP_INCLUDED
