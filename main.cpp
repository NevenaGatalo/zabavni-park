#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <conio.h>

using namespace std;

#include "zabavni_park.hpp"
#include "profit.hpp"
#include "posetilac.hpp"
#include "zaposleni.hpp"

int main()
{
    ///glavna funkcionalnost je pravljenje i menjanje zabavnog parka
    ///sto ukljucuje i pravjenje i menjanje sou programa i zaposljavanje ljudi

    int a;
    ZabavniPark zp;
    Sou_program s;
    cout<<"-----------------ZABAVNI PARK-----------------"<<endl;
    //zp.napravi_park();
    do{
    cout<<"-----------------MENI-----------------"<<endl<<endl;
    cout<<"1. KREIRAJ NOVI ZABAVNI PARK"<<endl;
    cout<<"2. PROMENI ZABAVNI PARK"<<endl;
    cout<<"3. ZAPOSLI NEKOGA"<<endl;
    cout<<"4. NAPRAVI SOU PROGRAM"<<endl;
    cout<<"5. PROMENI SVOJ SOU PROGRAM"<<endl;
    cout<<"10. KRAJ"<<endl;
    cin>>a;
    if(a==10){break;}

    if(a==1)
    {
        zp.napravi_park();
    }
    if(a==2)
    {
        zp.menja_zp();
    }
    if(a==3)
    {
        zp.zaposljavanje();
    }
    if(a==4)
    {
        s.napravi_program();
        zp.setProgrami(s);
    }
    if(a==5)
    {
        s.menja_program();
    }

    }while(a!=10);
    cout<<zp<<endl<<endl;
    cout<<s;
    return 0;
}
