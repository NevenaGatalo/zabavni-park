#include <iostream>
#include "karta.hpp"
#include "zabavni_park.hpp"
#include "profit.hpp"
#include "vreme.hpp"
#include "osoba.hpp"
#include "posetilac.hpp"
#include "zaposleni.hpp"
#include <fstream>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include "funkcije.hpp"
using namespace std;


/*void zaposljavanje()
{
    int id;
    bool boo;
    string a;
    string b;
    string ap;
    string jedan;
    string dva;
    string tri;
    int pl;
    vector<vector<string>> vektor;
    cout<<"Koga zelite da zaposlite?"<<endl;
    cout<<"Ispis osoba za zaposljavanje:"<<endl;
    cout<<endl;
    citajTxt("osobe_za_zaposljavanje.txt");
    cout<<endl;
    cout<<"Unesite ID osobe koju zelite da zaposlite: ";
    cin>>a;

    cout<<"Unesite posao vaseg zaposlenog:"<<endl;
    cout<<"     animator"<<endl;
    cout<<"     cuvar"<<endl;
    cout<<"     prodavac_karata"<<endl;
    cout<<"     pekar"<<endl;
    cin>>b;
    while(b != "animator" && b != "cuvar" && b != "prodavac_karata" && b != "pekar")
    {
        cout<<"Unos nije validan, molim vas unesite ponovo:"<<endl;
        cin>>b;
    }
    cout<<endl;
    cout<<"Unesite platu vaseg zaposlenog:"<<endl;
    cin>>pl;
    vektor = citajTxt_a("osobe_za_zaposljavanje.txt");
    for(auto i = vektor.begin(); i<vektor.end(); i++)
    {
        for(auto j = i->begin() ; j<i->end() ; j++)
        {
            if(a == (*j))
            {
                id = stoi(*j);
                boo = true;
            }
            else
                boo = false;
        }
        if(boo == true)
        {
        int godine = stoi((*i)[2]);
            if(b == "animator"){
                    Zaposleni novi ((*i)[0], (*i)[1], godine, id, pl, animator, 7, 7);
                    ap.append((*i)[0]);
                    ap.append(",");
                    ap.append((*i)[1]);
                    ap.append(",");
                    jedan = to_string(godine);
                    ap.append(jedan);
                    ap.append(",");
                    dva = to_string(id);
                    ap.append(dva);
                    ap.append(",");
                    tri = to_string(pl);
                    ap.append(tri);
                    ap.append(",animator,");
                    ap.append("7-7");
                    pisiTxt("ZAPOSLENI.txt", ap, 'a');
                    cout<<"Uspesno ste zaposlili: "<<endl;
                    cout<<novi<<endl;}
            if(b == "cuvar"){
                    Zaposleni novi ((*i)[0], (*i)[1], godine, id, 5000, cuvar, 7, 7);
                    ap.append((*i)[0]);
                    ap.append(",");
                    ap.append((*i)[1]);
                    ap.append(",");
                    jedan = to_string(godine);
                    ap.append(jedan);
                    ap.append(",");
                    dva = to_string(id);
                    ap.append(dva);
                    ap.append(",");
                    tri = to_string(pl);
                    ap.append(tri);
                    ap.append(",animator,");
                    ap.append("7-7");
                    pisiTxt("ZAPOSLENI.txt", ap, 'a');
                    cout<<"Uspesno ste zaposlili: "<<endl;
                    cout<<novi<<endl;}
            if(b == "prodavac_karata"){
                    Zaposleni novi ((*i)[0], (*i)[1], godine, id, 5000, prodavac_karata, 7, 7);
                    ap.append((*i)[0]);
                    ap.append(",");
                    ap.append((*i)[1]);
                    ap.append(",");
                    jedan = to_string(godine);
                    ap.append(jedan);
                    ap.append(",");
                    dva = to_string(id);
                    ap.append(dva);
                    ap.append(",");
                    tri = to_string(pl);
                    ap.append(tri);
                    ap.append(",animator,");
                    ap.append("7-7");
                    pisiTxt("ZAPOSLENI.txt", ap, 'a');
                    cout<<"Uspesno ste zaposlili: "<<endl;
                    cout<<novi<<endl;}
            if(b == "pekar"){
                    Zaposleni novi ((*i)[0], (*i)[1], godine, id, 5000, pekar, 7, 7);
                    ap.append((*i)[0]);
                    ap.append(",");
                    ap.append((*i)[1]);
                    ap.append(",");
                    jedan = to_string(godine);
                    ap.append(jedan);
                    ap.append(",");
                    dva = to_string(id);
                    ap.append(dva);
                    ap.append(",");
                    tri = to_string(pl);
                    ap.append(tri);
                    ap.append(",animator,");
                    ap.append("7-7");
                    pisiTxt("ZAPOSLENI.txt", ap, 'a');
                    cout<<"Uspesno ste zaposlili: "<<endl;
                    cout<<novi<<endl;}
        }

    }

}*/

int main()
{
    ///glavna funkcionalnost je pravljenje i menjanje zabavnog parka
    ///sto ukljucuje i pravjenje i menjanje sou programa i zaposljavanje ljudi
    //Sou_program s("Miki i Mini sou", 50, 5, predstava, 2, 00, 01, 01, 2020);
    //cout<<s;
    //Sou_program s;
    //s.napravi_program();
    //zaposljavanje();

    ZabavniPark zp;
    zp.napravi_park(); ///pravi zabavni park po vasem unosu
    cout<<endl<<endl<<endl<<endl<<endl;
    zp.menja_zp(); ///menja odredjenu stavku u zabavnom parku
    cout<<endl<<endl<<endl<<endl<<endl;
    zp.zaposljavanje(); ///zaposljava onu osobu koju vi zelite
    cout<<endl<<endl<<endl<<endl<<endl;
    Sou_program s;
    s.napravi_program(); ///pravi sou program po vasem unosu i stavlja ga u vektor u zabavnom parku
    cout<<endl<<endl<<endl<<endl<<endl;
    s.menja_program(); ///menja odredjenu stavku ili stavke u vasem sou programu
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<zp;
    /*do{
    cout<<"----------MENI----------"<<endl<<endl;
    cout<<"1. KREIRAJ ZABAVNI PARK"<<endl;
    cout<<"2. PROMENI VOZNJE U ZABAVNOM PARKU"<<endl;
    cout<<"3. ZAPOSLI NEKOGA"<<endl;
    cout<<"4. ISPIS ZAPOSLENIH"<<endl;
    cout<<"5. NAPRAVI SOU PROGRAM"<<endl;
    cout<<"10. KRAJ"<<endl;
    cin>>a;
    //if(a==10){break;}

    if(a==1)
    {
        zp.napravi_park();
    }
    if(a==2)
    {
        zp.menja_voznje();
    }
    if(a==3)
    {
        zp.zaposljavanje();
    }
    if(a==4)
    {
        citajTxt("ZAPOSLENI.txt");
    }
    if(a==5)
    {

    }

    }while(a!=10);*/

    /*ZabavniPark zp;
    zp.napravi_park();
    zp.brise_voznje();
    Osoba o1("N", "N", 25, 1);
    Zaposleni z("agent", "007", 25, 2, 5000, pekar, 7, 7);
    Posetilac p("Garfild", "Dzon", 32, 3, 0.15, odrasla, false, 600);

    o1.predstavljanje();
    z.predstavljanje();
    p.predstavljanje();*/
   /* Zaposleni o1;
    cout<<o1<<endl;
    Hrana h1;
    cout<<h1<<endl;
    Posetilac p1;
    cout<<p1<<endl;

    cout<<"ukupan profit: "<<Profit::getUkupnaKol()<<endl;*/

   // p1.citajFajl("posetioci.txt");
    //mislila sam da se kod izvrsava iz perspektive admina i da taj admin tj. korisnik koji predstavlja admina moze da napravi svoj zabavni park i svoj sou program i voznje i da moze da prodaje hranu i karte posetiocima
    return 0;
}
