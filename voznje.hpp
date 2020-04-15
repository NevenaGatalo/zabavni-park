#ifndef VOZNJE_HPP_INCLUDED
#define VOZNJE_HPP_INCLUDED
#include "vreme.hpp"
enum TipVoznje {osmica, tvister, bumerang, katapult, leptir, pereca, tocak};

class Voznja
{
private:
    unsigned int visinaLjudi;
    unsigned int ljudi;
    bool radi;
    unsigned int visinaVoznje;
    double brzina;
    Vreme vreme;
};

#endif // VOZNJE_HPP_INCLUDED
