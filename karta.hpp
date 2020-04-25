#ifndef KARTA_HPP_INCLUDED
#define KARTA_HPP_INCLUDED
enum TipKarte {decija, odrasla, porodicna};

class Karta
{
private:
    TipKarte tip;
    bool vip;
    unsigned cena;
public:
    void setTip(TipKarte t){tip=t;}
    void setVip(bool v){vip=v;}
    void setCena(unsigned c){cena=c;}
};

#endif // KARTA_HPP_INCLUDED
