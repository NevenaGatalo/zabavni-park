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
    bool zdravo;
    bool slano;
};

#endif // HRANA_HPP_INCLUDED
