#ifndef VREME_HPP_INCLUDED
#define VREME_HPP_INCLUDED
enum GD {prolece, leto, jesen, zima};
enum TipVremena {suncano, kisovito, vetrovito, oblacno, oluja};
class Vreme
{
private:
    GD doba;
    TipVremena tip;
public:
    void setDoba(GD a){doba=a;}
    void setTip(TipVremena b){tip=b;}
};

#endif // VREME_HPP_INCLUDED
