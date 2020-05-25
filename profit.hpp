#ifndef PROFIT_HPP_INCLUDED
#define PROFIT_HPP_INCLUDED

class Profit
{
private:
    Datum datum;
    double kolicina;
    static double ukupnaKol;
public:
    Profit ():kolicina(500){datum.dan=5;datum.mesec=6;datum.godina=2020;}
    static double getUkupnaKol(){return ukupnaKol;}

};
double Profit :: ukupnaKol=0;
#endif // PROFIT_HPP_INCLUDED
