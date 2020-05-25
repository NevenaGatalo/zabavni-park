#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

#include "hrana.hpp"
#include "zabavni_park.hpp"
#include "profit.hpp"
#include "posetilac.hpp"
#include "zaposleni.hpp"

int main()
{
    int a;
    ZabavniPark zp;
    Sou_program sou;
    zp.dodajOsobe();
    cout<<"******************************************** DOBRODOSLI U ZABAVNI PARK ************************************************"<<endl;
    cout<<"--------------------------------------------                           -------------------------------------------------";
    cout<<"******************************************* NAPRAVITE SVOJ ZABAVNI PARK ************************************************"<<endl<<endl;
    zp.napravi_park();
    do{
    cout<<endl<<endl;
    cout<<"******************************************"<<endl;
    cout<<"||-----------------MENI-----------------||"<<endl;
    cout<<"******************************************"<<endl<<endl;
    cout<<"1. PROMENI ZABAVNI PARK"<<endl;
    cout<<"2. ZAPOSLI NEKOGA"<<endl;
    cout<<"3. NAPRAVI SOU PROGRAM"<<endl;
    cout<<"4. PROMENI SVOJ SOU PROGRAM"<<endl;
    cout<<"5. KRAJ"<<endl;
    cin>>a;
    if(a==5){break;}
    if(a==1)
    {
        zp.menja_zp();
    }
    if(a==2)
    {
        zp.zaposljavanje();
    }
    if(a==3)
    {
        Sou_program s;
        s.napravi_program();
        zp.setProgrami(s);
    }
    if(a==4)
    {
        if(zp.getProgrami().size()==0)
        {
            cout<<"Morate prvo napraviti sou program"<<endl;
            Sou_program s;
            s.napravi_program();
            zp.setProgrami(s);
        }
        else{
                string c;
                zp.ispis_programa();
                cout<<endl<<endl;
                cout<<"Unesite naziv onog sou programa kojeg zelite da promenite"<<endl;
                cin>>c;
                Sou_program y=zp.poredi_programe(c);
                y.menja_program();


        }
    }

    }while(a!=10);
    cout<<zp<<endl<<endl;
    string otvoren;
    string vreme1;
    string vreme2;
    string drzava1;
    if(zp.getOtvoren()==true)
    {
        otvoren="otvoren";
    }
    if(zp.getOtvoren()==false)
    {
        otvoren="zatvoren";
    }
    if(zp.getVreme().getGD()==prolece)
    {
        vreme1="prolece";
    }
    if(zp.getVreme().getGD()==leto)
    {
        vreme1="leto";
    }
    if(zp.getVreme().getGD()==jesen)
    {
        vreme1="jesen";
    }
    if(zp.getVreme().getGD()==zima)
    {
        vreme1="zima";
    }

    if(zp.getVreme().getTip()==suncano){vreme2="suncano";}
    if(zp.getVreme().getTip()==kisovito){vreme2="kisovito";}
    if(zp.getVreme().getTip()==vetrovito){vreme2="vetrovito";}
    if(zp.getVreme().getTip()==oblacno){vreme2="oblacno";}
    if(zp.getVreme().getTip()==oluja){vreme2="olujno";}

    if(zp.getDrzava()==Amerika){drzava1="Amerika";}
    if(zp.getDrzava()==Srbija){drzava1="Srbija";}
    if(zp.getDrzava()==Kanada){drzava1="Kanada";}
    if(zp.getDrzava()==Engleska){drzava1="Engleska";}
    if(zp.getDrzava()==Kina){drzava1="Kina";}
    if(zp.getDrzava()==Spanija){drzava1="Spanija";}
    if(zp.getDrzava()==Japan){drzava1="Japan";}
    if(zp.getDrzava()==Francuska){drzava1="Francuska";}
    if(zp.getDrzava()==Nemacka){drzava1="Nemacka";}
    if(zp.getDrzava()==Danska){drzava1="Danska";}
    if(zp.getDrzava()==Svedska){drzava1="Svedskaa";}
    if(zp.getDrzava()==Italija){drzava1="Italija";}
    if(zp.getDrzava()==Brazil){drzava1="Brazil";}
    if(zp.getDrzava()==Meksiko){drzava1="Meksiko";}

    string zabavni;
    zabavni=zp.getIme()+","+otvoren+","+vreme1+"-"+vreme2+","+drzava1+","+to_string(zp.getProgrami().size());
    pisiTxt("zabavni.txt", zabavni);

    return 0;
}
