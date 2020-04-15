#ifndef ZABAVNI_PARK_HPP_INCLUDED
#define ZABAVNI_PARK_HPP_INCLUDED
#include"voznje.hpp"
#include"hrana.hpp"
#include"sou_program.hpp"
typedef struct
{
    unsigned int pocetak;
    unsigned int kraj;
}RaadnoVreme;
class ZabavniPark
{
private:
    bool otvoren;
    Vreme vreme;
    RaadnoVreme radnoVreme;

};

#endif // ZABAVNI_PARK_HPP_INCLUDED
