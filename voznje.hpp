#ifndef VOZNJE_HPP_INCLUDED
#define VOZNJE_HPP_INCLUDED
#include "vreme.hpp"
enum TipVoznje {osmica, tvister, bumerang, katapult, leptir, pereca, tocak};

class Voznja
{
private:
    Vreme vreme;
    double visinaLjudi;
    unsigned ljudi;
    bool radi;
    unsigned visinaVoznje;
    double brzina;
public:
    Voznja
    (
     GD doba=leto,
     TipVremena tip=suncano,
     double visinaLjudi=1.5,
     unsigned ljudi=25,
     bool radi=1,
     unsigned visinaVoznje=70,
     double brzina=80
     ):vreme(doba, tip){}

    Voznja(const Voznja &v)
    {
        vreme=v.vreme;
        visinaLjudi=v.visinaLjudi;
        ljudi=v.ljudi;
        radi=v.radi;
        visinaVoznje=v.visinaVoznje;
        brzina=v.brzina;


    }
};

#endif // VOZNJE_HPP_INCLUDED
