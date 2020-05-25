#include <iostream>
#include <fstream>
#include <vector>

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
    return 0;
}
