#ifndef ZABAVNI_PARK_HPP_INCLUDED
#define ZABAVNI_PARK_HPP_INCLUDED
#include"voznje.hpp"
#include"hrana.hpp"
#include"sou_program.hpp"
enum Drzava{Amerika, Srbija, Kanada, Engleska, Kina, Spanija, Japan, Francuska, Nemacka, Danska, Svedska, Italija, Brazil, Meksiko};

typedef struct
{
    unsigned pocetak;
    unsigned kraj;
}RaadnoVreme;
class ZabavniPark
{
private:
    bool otvoren;
    Vreme vreme;
    RaadnoVreme radnoVreme;
    Drzava drzava;
    TipVoznje vrste[5];

public:
};

#endif // ZABAVNI_PARK_HPP_INCLUDED
