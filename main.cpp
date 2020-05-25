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
    zp.dodajOsobe();
    Sou_program s;
    cout<<"******************************************** DOBRODOSLI U ZABAVNI PARK ************************************************"<<endl;
    cout<<"--------------------------------------------                           -------------------------------------------------";
    cout<<"******************************************* NAPRAVITE SVOJ ZABAVNI PARK ************************************************"<<endl<<endl;
    zp.napravi_park();
    do{
    cout<<"||-----------------MENI-----------------||"<<endl<<endl;
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
        s.napravi_program();
        zp.setProgrami(s);
    }
    if(a==4)
    {
        s.menja_program();
    }

    }while(a!=10);
    cout<<zp<<endl<<endl;
    cout<<s;
    return 0;
}
