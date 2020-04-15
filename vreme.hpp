#ifndef VREME_HPP_INCLUDED
#define VREME_HPP_INCLUDED
enum GD {prolece, leto, jesen, zima};
enum TipVremena {suncano, kisovito, vetrovito, oblacno, oluja};
class Vreme
{
private:
    GD doba;
    TipVremena tip;
};

#endif // VREME_HPP_INCLUDED
