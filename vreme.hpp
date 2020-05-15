#ifndef VREME_HPP_INCLUDED
#define VREME_HPP_INCLUDED
enum GD {prolece, leto, jesen, zima};
enum TipVremena {suncano, kisovito, vetrovito, oblacno, oluja};
class Vreme
{
protected:
    GD doba;
    TipVremena tip;
public:
    Vreme()
    {
        doba=leto;
        tip=suncano;
    }
    Vreme(GD d, TipVremena t){doba=d; tip=t;}
    void setDoba(GD a){doba=a;}
    void setTip(TipVremena b){tip=b;}

    GD getGD()const{return doba;}
    TipVremena getTip()const{return tip;}
};

#endif // VREME_HPP_INCLUDED
