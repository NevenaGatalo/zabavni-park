#ifndef VOZNJE_HPP_INCLUDED
#define VOZNJE_HPP_INCLUDED
#include "vreme.hpp"
enum TipVoznje{osmica, tvister, bumerang, katapult, leptir, pereca, tocak, supermen, betmen, vrisak};
class Voznja
{
private:
    Vreme vreme;
    double visinaLjudi;
    unsigned ljudi;
    bool radi;
    unsigned visinaVoznje;
    double brzina;
    TipVoznje tipv;
public:
    Voznja
    (
     GD doba=leto,
     TipVremena tip=suncano,
     double visinaLjudi=1.5,
     unsigned ljudi=25,
     bool radi=1,
     unsigned visinaVoznje=70,
     double brzina=80,
     TipVoznje tipv=osmica
     ):vreme(doba, tip){}

    Voznja(const Voznja &v)
    {
        vreme=v.vreme;
        visinaLjudi=v.visinaLjudi;
        ljudi=v.ljudi;
        radi=v.radi;
        visinaVoznje=v.visinaVoznje;
        brzina=v.brzina;
        tipv=v.tipv;
    }
    TipVoznje getTip()const{return tipv;}

    friend ostream & operator<<(ostream& out, const Voznja &v)
    {
        if(v.getTip()==osmica)
            {out<<"osmica"<<endl;}
        if(v.getTip()==tvister)
            {out<<"tvister"<<endl;}
        if(v.getTip()==bumerang)
            {out<<"bumerang"<<endl;}
        if(v.getTip()==katapult)
            {out<<"katapult"<<endl;}
        if(v.getTip()==leptir)
            {out<<"leptir"<<endl;}
        if(v.getTip()==pereca)
            {out<<"pereca"<<endl;}
        if(v.getTip()==tocak)
            {out<<"tocak"<<endl;}
        if(v.getTip()==supermen)
            {out<<"supermen"<<endl;}
        if(v.getTip()==betmen)
            {out<<"betmen"<<endl;}
        if(v.getTip()==vrisak)
            {out<<"vrisak"<<endl;}
        return out;
    }
};

#endif // VOZNJE_HPP_INCLUDED
