#ifndef ZABAVNI_PARK_HPP_INCLUDED
#define ZABAVNI_PARK_HPP_INCLUDED
#include"voznje.hpp"
#include"hrana.hpp"
#include"sou_program.hpp"
#include "vreme.hpp"
enum Drzava{Amerika, Srbija, Kanada, Engleska, Kina, Spanija, Japan, Francuska, Nemacka, Danska, Svedska, Italija, Brazil, Meksiko};

class ZabavniPark
{
private:
    string ime;
    bool otvoren;
    Vreme vreme;
    Drzava drzava;
    TipVoznje vrste[5];

public:
    /*void napravi_park()
    {
        Vreme v;
        cout<<"Unestie ime zabavnog parka:"<<endl;
        cin>>ime;
        cout<<"Da li je vas zabavni park otvoren ili zatvoren"<<endl;
        cin>>otvoren;

        cout<<"Unesite godisnje doba:   0=prolece"<<endl;
        cout<<"                         1=leto"<<endl;
        cout<<"                         2=jesen"<<endl;
        cout<<"                         3=zima"<<endl;
        int a;
        cin>>a;
        switch(a)
        {
        case 0:
            v.setDoba(prolece);
            break;
        case 1:
            v.setDoba(leto);
            break;
        case 2:
            v.setDoba(jesen);
            break;
        case 3:
            v.setDoba(zima);
            break;
        }
        //cout<<"Drzava vaseg zabavnog parka:"<<end;
        //cin>>drzava;

    }*/
};

#endif // ZABAVNI_PARK_HPP_INCLUDED
