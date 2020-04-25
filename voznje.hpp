#ifndef VOZNJE_HPP_INCLUDED
#define VOZNJE_HPP_INCLUDED
#include "vreme.hpp"
enum TipVoznje {osmica, tvister, bumerang, katapult, leptir, pereca, tocak};

class Voznja
{
private:
    double visinaLjudi;
    unsigned ljudi;
    bool radi;
    unsigned visinaVoznje;
    double brzina;
    Vreme vreme;
public:
    Voznja()
    {
        visinaLjudi=1.5;
        ljudi=25;
        radi=true;
        visinaVoznje=70;
        brzina=80;
        vreme.setDoba(leto);
        vreme.setTip(suncano);
    }
    Voznja(double v, unsigned lj, bool r, unsigned vv, double b, GD d, TipVremena t)
    {
        visinaLjudi=v;
        ljudi=lj;
        radi=r;
        visinaVoznje=vv;
        brzina=b;
        vreme.setDoba(d);
        vreme.setTip(t);
    }
};

#endif // VOZNJE_HPP_INCLUDED
