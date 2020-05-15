#ifndef ZABAVNI_PARK_HPP_INCLUDED
#define ZABAVNI_PARK_HPP_INCLUDED
#include"voznje.hpp"
#include"hrana.hpp"
#include"sou_program.hpp"
#include "vreme.hpp"
#include <vector>
#include <iostream>
using namespace std;
enum Drzava{Amerika, Srbija, Kanada, Engleska, Kina, Spanija, Japan, Francuska, Nemacka, Danska, Svedska, Italija, Brazil, Meksiko};

class ZabavniPark
{
private:
    string ime;
    bool otvoren;
    Vreme vreme;
    Drzava drzava;
    vector<Voznja> voznje;

public:
    ZabavniPark():vreme(leto, suncano), ime("zp"), otvoren(true), drzava(Srbija){}

    void napravi_park()
    {
        int a;
        int b;
        int o;
        int drz;

        cout<<"Unestie ime zabavnog parka:"<<endl;
        cin>>ime;

        do {
        cout<<"Unesite godisnje doba:   0=prolece"<<endl;
        cout<<"                         1=leto"<<endl;
        cout<<"                         2=jesen"<<endl;
        cout<<"                         3=zima"<<endl;
        cin>>a;
        }while(a<0 || a>3);

        do{
        cout<<"Unesite tip vremena: 0=suncano"<<endl;
        cout<<"                     1=kisovito"<<endl;
        cout<<"                     2=vetrovito"<<endl;
        cout<<"                     3=oblacno"<<endl;
        cout<<"                     4=olujno"<<endl;
        cin>>b;
        }while(b<0 || b>4);

        if(a==0){vreme.setDoba(prolece);}
        if(a==1){vreme.setDoba(leto);}
        if(a==2){vreme.setDoba(jesen);}
        if(a==3){vreme.setDoba(zima);}
        if(b==0){vreme.setTip(suncano);}
        if(b==1){vreme.setTip(kisovito);}
        if(b==2){vreme.setTip(vetrovito);}
        if(b==3){vreme.setTip(oblacno);}
        if(b==4){vreme.setTip(oluja);}

        do{
        cout<<"Drzava vaseg zabavnog parka: 0=Amerika"<<endl;
        cout<<"                             1=Srbija"<<endl;
        cout<<"                             2=Kanada"<<endl;
        cout<<"                             3=Engleska"<<endl;
        cout<<"                             4=Kina"<<endl;
        cout<<"                             5=Spanija"<<endl;
        cout<<"                             6=Japan"<<endl;
        cout<<"                             7=Francuska"<<endl;
        cout<<"                             8=Nemacka"<<endl;
        cout<<"                             9=Danska"<<endl;
        cout<<"                             10=Svedska"<<endl;
        cout<<"                             11=Italija"<<endl;
        cout<<"                             12=Brazil"<<endl;
        cout<<"                             13=Meksiko"<<endl;
        cin>>drz;
        }while(drz<0 || drz>13);
        switch(drz)
        {
            case 0: drzava=Amerika;
            break;
            case 1: drzava=Srbija;
            break;
            case 2: drzava=Kanada;
            break;
            case 3: drzava=Engleska;
            break;
            case 4: drzava=Kina;
            break;
            case 5: drzava=Spanija;
            break;
            case 6: drzava=Japan;
            break;
            case 7: drzava=Francuska;
            break;
            case 8: drzava=Nemacka;
            break;
            case 9: drzava=Danska;
            break;
            case 10: drzava=Svedska;
            break;
            case 11: drzava=Italija;
            break;
            case 12: drzava=Brazil;
            break;
            case 13: drzava=Meksiko;
            break;
        }

        int vz;
        do{

        cout<<"Unesite voznje koje zelite da vas zabavni park ima:"<<endl;
        cout<<"0=osmica"<<endl;
        cout<<"1=tvister"<<endl;
        cout<<"2=bumerang"<<endl;
        cout<<"3=katapult"<<endl;
        cout<<"4=leptir"<<endl;
        cout<<"5=pereca"<<endl;
        cout<<"6=tocak"<<endl;
        cout<<"7=supermen"<<endl;
        cout<<"8=betmen"<<endl;
        cout<<"9=vrisak"<<endl;
        cout<<"10=kraj"<<endl;

        cin>>vz;

        switch(vz)
        {
            case 0: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, osmica);voznje.push_back(v);}
            break;
            case 1: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, tvister);voznje.push_back(v);}
            break;
            case 2: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, osmica);voznje.push_back(v);}
            break;
            case 3: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, osmica);voznje.push_back(v);}
            break;
            case 4: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, osmica);voznje.push_back(v);}
            break;
            case 5: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, osmica);voznje.push_back(v);}
            break;
            case 6: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, osmica);voznje.push_back(v);}
            break;
            case 7: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, osmica);voznje.push_back(v);}
            break;
            case 8: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, osmica);voznje.push_back(v);};
            break;
            case 9: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, osmica);voznje.push_back(v);};
            break;
        }

        }while(vz>=0 && vz<10);

        cout<<"Da li zelite da promenite voznje?"<<endl;
        cout<<"0=da"<<endl;
        cout<<"1=ne"<<endl;
        int d;
        cin>>d;
        if(d==0)
        {
            cout<<"Ispis voznji u zabavnom parku"<<endl;
        for(auto it=voznje.begin(); it<voznje.end(); it++)
        {
            //cout<<voznje.size()<<endl;
            cout<<*it<<endl;
        }
            cout<<"Koju voznju zelite da izbrisete?"<<endl;
            int e;
            cin>>e;
        }

        cout<<"Da li je vas zabavni park otvoren ili zatvoren"<<endl;
        cout<<"1=otvoren"<<endl;
        cout<<"2=zatvoren"<<endl;
        cin>>o;
        if(o==1)
            otvoren=true;
        else
            otvoren=false;
    }
};

#endif // ZABAVNI_PARK_HPP_INCLUDED
