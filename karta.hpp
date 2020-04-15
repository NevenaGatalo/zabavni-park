#ifndef KARTA_HPP_INCLUDED
#define KARTA_HPP_INCLUDED
enum TipKarte {decija, odrasla, porodicna};

class Karta
{
private:
    TipKarte tip;
    bool vip;
    unsigned int cena;
};

#endif // KARTA_HPP_INCLUDED
