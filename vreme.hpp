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

    friend ostream& operator<<(ostream &out, const Vreme &v)
    {
        out<<"godisnje doba: ";
        if(v.getGD()==prolece){out<<"prolece";}
        if(v.getGD()==leto){out<<"leto";}
        if(v.getGD()==jesen){out<<"jesen";}
        if(v.getGD()==zima){out<<"zima";}
        out<<" vreme: ";
        if(v.getTip()==suncano){out<<"suncano";}
        if(v.getTip()==kisovito){out<<"kisovito";}
        if(v.getTip()==vetrovito){out<<"vetrovito";}
        if(v.getTip()==oblacno){out<<"oblacno";}
        if(v.getTip()==oluja){out<<"olujno";}
        return out;
    }
};

#endif // VREME_HPP_INCLUDED
