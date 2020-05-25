#ifndef ZABAVNI_PARK_HPP_INCLUDED
#define ZABAVNI_PARK_HPP_INCLUDED
#include"voznje.hpp"
#include"sou_program.hpp"
#include <vector>
#include <windows.h>

enum Drzava{Amerika, Srbija, Kanada, Engleska, Kina, Spanija, Japan, Francuska, Nemacka, Danska, Svedska, Italija, Brazil, Meksiko};

class ZabavniPark
{
private:
    string ime;
    bool otvoren;
    Vreme vreme;
    Drzava drzava;
    vector<Voznja> voznje;
    vector<Zaposleni> zaposleni;
    vector<Sou_program> programi;
    vector<Osoba> osobe;

public:
    ZabavniPark():vreme(leto, suncano), ime("zp"), otvoren(true), drzava(Srbija){}

    string getIme()const{return ime;}
    bool getOtvoren()const{return otvoren;}
    Vreme getVreme()const{return vreme;}
    Drzava getDrzava()const{return drzava;}
    vector<Sou_program> getProgrami()const{return programi;}

    void setProgrami(const Sou_program& s)
  {
    programi.push_back(s);
  }

    void napravi_park()
    {
        int o;

        cout<<"Unesite ime zabavnog parka:"<<endl;
        cin>>ime;
        cout<<endl;
        menja_i_postavlja_vreme();


        cout<<"Drzava vaseg zabavnog parka:"<<endl;
        menja_i_postavlja_drzavu();

        unos_voznji();

        cout<<"Da li je vas zabavni park otvoren ili zatvoren"<<endl;
        cout<<"     1=otvoren"<<endl;
        cout<<"     2=zatvoren"<<endl;
        cin>>o;
        if(o==1)
            otvoren=true;
        else if(o==2)
            otvoren=false;
        else{
            do{
            cout<<"Unesite validan broj"<<endl;
            cin>>o;
            }while(o!=1 && o!=2);
        }
    }
    void brise_voznje(){
        int b=false; ///da se zna da li se while izvrsio kako bi znao da li da nastavi sa brisanjem
            while(voznje.size()==0)
            {
                cout<<"Vas zabavni park nema voznje, molim vas dodajte voznje."<<endl;
                b=true;
                unos_voznji();
            }
            if(b==false)
            {
            string e;
            cout<<"Koju voznju/voznje zelite da izbrisete?"<<endl;
            cout<<"Kada zelite da prestanete sa brisanjem ispisite: kraj"<<endl<<endl;

            do{
                cin>>e;
                if(e=="osmica")
                {
                    Voznja v3(leto, suncano, 1.5, 25, 1, 70, 80, osmica);
                    if(trazenje_i_brisanje(e, v3)==false)
                    {
                        cout<<"Ta voznja ne postoji, unesite postojecu voznju:"<<endl;
                    }
                }
               else if(e=="tvister")
                {
                    Voznja v3(leto, suncano, 1.5, 25, 1, 70, 80, tvister);
                    if(trazenje_i_brisanje(e, v3)==false)
                    {
                        cout<<"Ta voznja ne postoji, unesite postojecu voznju:"<<endl;
                    }
                }
               else if(e=="bumerang")
                {
                    Voznja v3(leto, suncano, 1.5, 25, 1, 70, 80, bumerang);
                    if(trazenje_i_brisanje(e, v3)==false)
                    {
                        cout<<"Ta voznja ne postoji, unesite postojecu voznju:"<<endl;
                    }
                }
               else if(e=="katapult")
                {
                    Voznja v3(leto, suncano, 1.5, 25, 1, 70, 80, katapult);
                    if(trazenje_i_brisanje(e, v3)==false)
                    {
                        cout<<"Ta voznja ne postoji, unesite postojecu voznju:"<<endl;
                    }
                }
               else if(e=="leptir")
                {
                    Voznja v3(leto, suncano, 1.5, 25, 1, 70, 80, leptir);
                    if(trazenje_i_brisanje(e, v3)==false)
                    {
                        cout<<"Ta voznja ne postoji, unesite postojecu voznju:"<<endl;
                    }
                }
               else if(e=="pereca")
                {
                    Voznja v3(leto, suncano, 1.5, 25, 1, 70, 80, pereca);
                    if(trazenje_i_brisanje(e, v3)==false)
                    {
                        cout<<"Ta voznja ne postoji, unesite postojecu voznju:"<<endl;
                    }
                }
               else if(e=="tocak")
                {
                    Voznja v3(leto, suncano, 1.5, 25, 1, 70, 80, tocak);
                    if(trazenje_i_brisanje(e, v3)==false)
                    {
                        cout<<"Ta voznja ne postoji, unesite postojecu voznju:"<<endl;
                    }
                }
               else if(e=="supermen")
                {
                    Voznja v3(leto, suncano, 1.5, 25, 1, 70, 80, supermen);
                    trazenje_i_brisanje(e, v3);
                }
               else if(e=="betmen")
                {
                    Voznja v3(leto, suncano, 1.5, 25, 1, 70, 80, betmen);
                    if(trazenje_i_brisanje(e, v3)==false)
                    {
                        cout<<"Ta voznja ne postoji, unesite postojecu voznju:"<<endl;
                    }
                }
               else if(e=="vrisak")
                {
                    Voznja v3(leto, suncano, 1.5, 25, 1, 70, 80, vrisak);
                    if(trazenje_i_brisanje(e, v3)==false)
                    {
                        cout<<"Ta voznja ne postoji, unesite postojecu voznju:"<<endl;
                    }

                }
                else if(e!="kraj" && e!="osmica" && e!="tvister"  && e!="bumerang" && e!="katapult" && e!="leptir" && e!="pereca" && e!="tocak" && e!="supermen" && e!="betmen" && e!="vrisak"){
                    cout<<"Ta voznja ne postoji, unesite postojecu voznju:"<<endl;
                }
            }while(e!="kraj");
        cout<<endl;
        }
    }
    void ispis_voznji()
    {
        cout<<"ISPIS VOZNJI U ZABAVNOM PARKU"<<endl<<endl;
        for(auto it=voznje.begin(); it<voznje.end(); it++)
        {
            cout<<"     "<<*it;
        }
        cout<<endl;
    }
    bool trazenje_i_brisanje (string e, const Voznja &v3)
    {
        for(auto it=voznje.begin(); it<voznje.end(); it++){
                    if(v3.getTip()==it->getTip())
                    {
                        voznje.erase(it);
                        cout<<"Uspesno je izbrisana voznja "<<e<<endl;
                        return true;
                    }
                    }
        return false;
    }
    void unos_voznji()
    {
        cout<<"Unesite voznje koje zelite da vas zabavni park ima:"<<endl;
        cout<<"     0=osmica"<<endl;
        cout<<"     1=tvister"<<endl;
        cout<<"     2=bumerang"<<endl;
        cout<<"     3=katapult"<<endl;
        cout<<"     4=leptir"<<endl;
        cout<<"     5=pereca"<<endl;
        cout<<"     6=tocak"<<endl;
        cout<<"     7=supermen"<<endl;
        cout<<"     8=betmen"<<endl;
        cout<<"     9=vrisak"<<endl;
        cout<<"     10=kraj"<<endl;
        int vz;
        do{
        cin>>vz;
        if(vz>10 || vz<0)
            cout<<"Unesite validan broj"<<endl;
        else if(vz>=0 && vz<10){
        switch(vz)
        {
            case 0: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, osmica);voznje.push_back(v);}
            break;
            case 1: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, tvister);voznje.push_back(v);}
            break;
            case 2: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, bumerang);voznje.push_back(v);}
            break;
            case 3: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, katapult);voznje.push_back(v);}
            break;
            case 4: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, leptir);voznje.push_back(v);}
            break;
            case 5: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, pereca);voznje.push_back(v);}
            break;
            case 6: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, tocak);voznje.push_back(v);}
            break;
            case 7: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, supermen);voznje.push_back(v);}
            break;
            case 8: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, betmen);voznje.push_back(v);};
            break;
            case 9: {Voznja v(leto, suncano, 1.5, 25, 1, 70, 80, vrisak);voznje.push_back(v);};
            break;
        }
        }
        }while(vz>=0 && vz<10 || vz>10 || vz<0);
    }
    void menja_voznje()
    {
        int k;
        cout<<endl;
        cout<<"Da li zelite da izbrisete ili unesete voznje u zabavni park?"<<endl<<endl;
        if(voznje.size()!=0)
        {
            ispis_voznji();
        }
        cout<<"     0 = unos voznji"<<endl;
        cout<<"     1 = brisanje voznji"<<endl;
        cin>>k;
        while(k!=0 && k!=1)
        {
            cout<<"Unesite validan broj:";
            cin>>k;
        }
        if(k==0)
        {
            unos_voznji();
        }
        else
            brise_voznje();
        ispis_voznji();
    }

void ucitajOsobe(string n)
    {
        string osobef=n;
        string linija;
        vector<string> result;
        ifstream fajl (osobef);
        if (fajl.is_open())
        {
            while ( getline (fajl,linija) )
            {
                if (linija!="")
                {
                    result = splitSen(linija);
                    Osoba o(result[0], result[1], stoi(result[2]), stoi(result[3]));
                    osobe.push_back(o);
                }
            }
            fajl.close();
        }
        else
            cout << "Neuspesno otvoren fajl";
    }
    void dodajOsobe()
    {
        string fajl="osobe_za_zaposljavanje.txt";
        ucitajOsobe(fajl);
    }
void zaposljavanje()
{

    int id;
    bool boo;
    int a;
    string b;
    int pl;
    cout<<"Koga zelite da zaposlite?"<<endl;
    cout<<"Ispis osoba za zaposljavanje:"<<endl;
    cout<<endl;
    for(auto it=osobe.begin(); it<osobe.end(); it++)
    {
        cout<<"ISPIS OSOBE"<<endl;
        cout<<*it;
    }
    cout<<endl;
    cout<<"Unesite ID osobe koju zelite da zaposlite: ";
    cin>>a;
    while(pretrazuje_osobe(a)==false)
    {
        cout<<"Unesite validan id:"<<endl;
        cin>>a;
    }

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

    string i = vraca_ime(a);
    string p = vraca_prezime(a);
    int g = vraca_godine(a);
    Zaposleni z(i, p, g, a, pl, pretvaranje(b), 7, 7);
    zaposleni.push_back(z);
    string konacan;
    string konacan2;
    for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
    {
        konacan = it->getIme() +","+it->getPrezime()+","+to_string(it->getGodine())+","+to_string(it->getID())+","+to_string(it->getPlata())+","+pretvaranje2(it->getTip())+","+to_string(it->getPocetak())+"-"+to_string(it->getKraj());

    }
    pisiTxt("ZAPOSLENI.txt", konacan, 'a');
    brise_iz_osobe_za_zaposljavanje(a);
    for(auto it=osobe.begin(); it<osobe.end(); it++)
    {

        konacan2.append(it->getIme());
        konacan2.append(",");
        konacan2.append(it->getPrezime());
        konacan2.append(",");
        konacan2.append(to_string(it->getGodine()));
        konacan2.append(",");
        konacan2.append(to_string(it->getID()));
        konacan2.append("\n");


    }
    pisiTxt("osobe_za_zaposljavanje.txt", konacan2);
    cout<<"Uspesno ste zaposlili: "<<z<<endl;
    }
    void brise_iz_osobe_za_zaposljavanje(int id)
    {
        for(auto it=osobe.begin(); it<osobe.end(); it++)
        {
            if(it->getID()==id)
            {
                osobe.erase(it);
            }
        }
    }
    TipZaposlenog pretvaranje(string c)
    {
        if(c=="animator"){return animator;}
        if(c=="cuvar"){return cuvar;}
        if(c=="prodavac_karata"){return prodavac_karata;}
        if(c=="pekar"){return pekar;}
    }
    string pretvaranje2(TipZaposlenog c)
    {
        if(c==animator){return "animator";}
        if(c==cuvar){return "cuvar";}
        if(c==prodavac_karata){return "prodavac karata";}
        if(c==pekar){return "pekar";}
    }
    bool pretrazuje_osobe(int id)
    {
        for(auto it=osobe.begin(); it<osobe.end(); it++)
        {
            if(it->getID()==id)
            {
                return true;
            }
        }
        return false;
    }
    string vraca_ime(int id)
    {
        for(auto it=osobe.begin(); it<osobe.end(); it++)
        {
            if(it->getID()==id)
            {
                return it->getIme();
            }
        }
    }
    string vraca_prezime(int id)
    {
        for(auto it=osobe.begin(); it<osobe.end(); it++)
        {
            if(it->getID()==id)
            {
                return it->getPrezime();
            }
        }
    }
    int vraca_godine(int id)
    {
        for(auto it=osobe.begin(); it<osobe.end(); it++)
        {
            if(it->getID()==id)
            {
                return it->getGodine();
            }
        }
    }

    void ispis_zaposlenih()
    {
        cout<<"ISPIS ZAPOSLENIH U ZABAVNOM PARKU"<<endl;
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            cout<<*it<<endl;
        }
    }
    friend ostream& operator<<(ostream &i, const ZabavniPark &z)
    {
        i<<endl;
        i<<"ISPIS ZABAVNOG PARKA"<<endl;
        i<<"Ime: "<<z.getIme()<<endl;
        i<<"Vreme u vasem zabavnom parku je: "<<z.getVreme()<<endl;
        i<<"Drzava u kojoj se nalazi vas zabavni park je: ";
        if(z.getDrzava()==Amerika){i<<"Amerika";}
        if(z.getDrzava()==Srbija){i<<"Srbija";}
        if(z.getDrzava()==Kanada){i<<"Kanada";}
        if(z.getDrzava()==Engleska){i<<"Engleska";}
        if(z.getDrzava()==Kina){i<<"Kina";}
        if(z.getDrzava()==Spanija){i<<"Spanija";}
        if(z.getDrzava()==Japan){i<<"Japan";}
        if(z.getDrzava()==Francuska){i<<"Francuska";}
        if(z.getDrzava()==Nemacka){i<<"Nemacka";}
        if(z.getDrzava()==Danska){i<<"Danska";}
        if(z.getDrzava()==Svedska){i<<"Svedskaa";}
        if(z.getDrzava()==Italija){i<<"Italija";}
        if(z.getDrzava()==Brazil){i<<"Brazil";}
        if(z.getDrzava()==Meksiko){i<<"Meksiko";}
        i<<endl;
        i<<"Voznje vaseg zabavnog parka su: "<<endl<<endl;
        if(z.voznje.size()==0)
        {
            i<<"Nema voznji"<<endl;
        }
        for(auto it=z.voznje.begin(); it<z.voznje.end(); it++)
        {
            i<<*it;
        }
        i<<endl;
        i<<"Broj sou programa u zabavnom parku je:";
        i<<z.getProgrami().size();
        i<<endl;
        i<<"Zaposleni vaseg zabavnog parka su: "<<endl<<endl;
        if(z.zaposleni.size()==0)
        {
            i<<"Nema zaposlenih"<<endl;
        }
        for(auto it=z.zaposleni.begin(); it<z.zaposleni.end(); it++)
        {
            i<<*it;
        }
        i<<endl;
        i<<"Posetioci zabavnog parka: "<<endl<<endl;
        citajTxt("posetioci.txt");
        i<<endl;
        i<<"Vas zabavni park je: ";
        if(z.getOtvoren()==true){i<<"otvoren";}
        if(z.getOtvoren()==false){i<<"zatvoren";}
        i<<endl<<endl;
        z.ispis_programa();

       return i;
    }
    void ispis_programa()const
    {
        for(auto it=programi.begin(); it<programi.end(); it++)
        {
            cout<<*it;
        }
    }
    Sou_program poredi_programe(string s)
    {
        bool g=false;
        for(auto it=programi.begin(); it<programi.end(); it++)
        {
            if(it->getNaziv()==s)
            {
                return *it;
            }
        }
    }
    void menja_zp()
    {
        int b;
        do
        {
            cout<<"MENJANJE ZABAVNOG PARKA"<<endl;
            cout<<"     0 = naziv"<<endl;
            cout<<"     1 = da li je otvoren/zatvoren"<<endl;
            cout<<"     2 = drzava u kojoj se park nalazi"<<endl;
            cout<<"     3 = vreme u zabavnom parku"<<endl;
            cout<<"     4 = voznje"<<endl;
            cout<<"     5 = kraj"<<endl;
            cout<<"Sta zelite da promenite u zabavnom parku"<<endl;
            cin>>b;
            if(b<0 || b>5)
            {
                cout<<"Unesite validan broj:"<<endl;
            }
            if(b==0)
            {
                cout<<"Unesite novi naziv:"<<endl;
                cin>>ime;
            }
            if(b==1)
            {
                if(otvoren==true){otvoren=false; cout<<"Vas zabavni park je sada zatvoren"<<endl;}
                else{otvoren=true; cout<<"Vas zabavni park je sada otvoren"<<endl;}
            }
            if(b==2)
            {
                cout<<"Unesite novu drzavu zabavnog parka:"<<endl;
                menja_i_postavlja_drzavu();
            }
            if(b==3)
            {
                cout<<"Unesite novo vreme u zabavnom parku"<<endl;
                menja_i_postavlja_vreme();

            }
            if(b==4)
            {
                menja_voznje();
            }
            if(b==5){break;}
        }while(b!=5);
    }
    void menja_i_postavlja_drzavu ()
    {
        int drz;
        cout<<"     0=Amerika"<<endl;
        cout<<"     1=Srbija"<<endl;
        cout<<"     2=Kanada"<<endl;
        cout<<"     3=Engleska"<<endl;
        cout<<"     4=Kina"<<endl;
        cout<<"     5=Spanija"<<endl;
        cout<<"     6=Japan"<<endl;
        cout<<"     7=Francuska"<<endl;
        cout<<"     8=Nemacka"<<endl;
        cout<<"     9=Danska"<<endl;
        cout<<"     10=Svedska"<<endl;
        cout<<"     11=Italija"<<endl;
        cout<<"     12=Brazil"<<endl;
        cout<<"     13=Meksiko"<<endl;
        do{
        cin>>drz;
        if(drz<0 || drz>13)
            cout<<"Unesite validan broj"<<endl;
        }while(drz<0 || drz>13);
        cout<<endl;
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
    }
    void menja_i_postavlja_vreme()
    {
        int a, b;
        cout<<"Unesite godisnje doba:"<<endl;
        cout<<"     0=prolece"<<endl;
        cout<<"     1=leto"<<endl;
        cout<<"     2=jesen"<<endl;
        cout<<"     3=zima"<<endl;
        do {
        cin>>a;
        if(a<0 || a>3)
        {
            cout<<"Unesite pravilan broj"<<endl;
        }
        }while(a<0 || a>3);

        cout<<"Unesite tip vremena:"<<endl;
        cout<<"     0=suncano"<<endl;
        cout<<"     1=kisovito"<<endl;
        cout<<"     2=vetrovito"<<endl;
        cout<<"     3=oblacno"<<endl;
        cout<<"     4=olujno"<<endl;
        cout<<endl;
        do{
        cin>>b;
        if(b<0|| b>4)
            cout<<"Unesite pravilan broj"<<endl;
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
    }
};

#endif // ZABAVNI_PARK_HPP_INCLUDED
