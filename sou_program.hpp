#ifndef SOU_PROGRAM_HPP_INCLUDED
#define SOU_PROGRAM_HPP_INCLUDED
#include<vector>
#include "zaposleni.hpp"
#include "funkcije.hpp"

enum TipPrograma {lutke, madjionicar, predstava};
typedef struct
{
  unsigned dan;
  unsigned mesec;
  unsigned godina;
}Datum;

typedef struct
{
    unsigned sat;
    unsigned minuti;
}VReme;

class Sou_program
{
private:
    string naziv;
    unsigned brLjudi;
    vector<Zaposleni> izvodjaci;
    TipPrograma tip;
    VReme vreme;
    Datum datum;
public:
    Sou_program(string naziv="sou",
                unsigned brLjud=50,
                TipPrograma tip=predstava,
                unsigned sat=2,
                unsigned minuti=00,
                unsigned dan=01,
                unsigned mesec=01,
                unsigned godina=2020):naziv(naziv), brLjudi(brLjud), tip(tip){vreme.sat=sat; vreme.minuti=minuti; datum.dan=dan; datum.mesec=mesec; datum.godina=godina;}

    string getNaziv()const{return naziv;}
    unsigned getBrLjudi()const{return brLjudi;}
    TipPrograma getTip()const{return tip;}
    VReme getVreme()const{return vreme;}
    Datum getDatum()const{return datum;}

    void napravi_program()
    {
        int t;

        cout<<"------PRAVLJENJE SOU PROGRAMA------"<<endl;
        cout<<endl;
        cout<<"Unesite naziv programa:"<<endl;
        cin>>naziv;
        cout<<endl;
        cout<<"Unesite tip programa"<<endl;
        cout<<"      0 = lutkarska predstava\n      1 = madjionicarska predstava\n      2 = predstava"<<endl;
        cin>>t;
        while(t<0 || t>2)
        {
            cout<<"Unesite validan broj: ";
            cin>>t;
        }
        if(t==0){tip=lutke;}
        else if(t==1){tip=madjionicar;}
        else if(t==2){tip=predstava;}

        cout<<endl;

        if(ispisi_animatore()==true)
        {
            cout<<endl;
            cout<<"Unesite id animatora koji ce voditi program"<<endl;
            cout<<endl;
        cout<<"Kada budete zadovoljni vasim izvodjacima ukucajte kraj"<<endl;
        upisi_izvodjace();
        cout<<endl;
        while(ispisi_izvodjace()==false)
        {
                cout<<"Niste uneli nijednog izvodjaca, unesite izvodjace:"<<endl<<endl;
                upisi_izvodjace();
        }
        cout<<"Uspesno ste dodali animatore!"<<endl;
        }
       else //if(ispisi_animatore()==false)
        {
            cout<<"Morate zaposliti animatore kako bi mogli da ih unesete u sou program"<<endl<<endl;

        }
        cout<<"Unesite satnicu vaseg programa:"<<"\n"<<"sat: ";
        cin>>vreme.sat;
        cout<<"minuti: ";
        cin>>vreme.minuti;
        cout<<"Unesite datum programa:\n"<<"dan: ";
        cin>>datum.dan;
        cout<<"mesec: ";
        cin>>datum.mesec;
        cout<<"godina: ";
        cin>>datum.godina;

    }
    bool ispisi_animatore()
    {
        bool boo=false;
        cout<<"ISPIS ANIMATORA:"<<endl;
        vector<vector<string>> zaposleni;
        zaposleni = citajTxt_a("ZAPOSLENI.txt");
        ///ispisuje one zaposlene koji su zaposleni kao animatori
        for(auto i = zaposleni.begin(); i<zaposleni.end(); i++)
        {
            for(auto j = i->begin() ; j<i->end() ; j++)
            {
                if((*j)=="animator")
                {
                    cout<<"     "<<(*i)[3]<<" ";
                    cout<<(*i)[0]<<" ";
                    cout<<(*i)[1]<<" ";
                    cout<<(*i)[2]<<" ";
                    cout<<(*i)[4]<<" ";
                    cout<<(*i)[5]<<" ";
                    cout<<(*i)[6]<<" ";
                    boo=true;
                }
            }
            cout<<"\n";
        }
        if(boo==false)
            {
                cout<<"Nema animatora"<<endl;
            }
        return boo;
    }
    void upisi_izvodjace()
    {
        string an;
        bool boo;
        vector<vector<string>> zaposleni;
        zaposleni = citajTxt_a("ZAPOSLENI.txt");
        while(true)
        {
            cin>>an;
            if(an=="kraj") break;
            else if(an!="kraj"){
                for(auto i = zaposleni.begin(); i<zaposleni.end(); i++)
            {
                    if((*i)[3]==an)
                    {
                        int god = stoi((*i)[2]);
                        int id = stoi((*i)[3]);
                        int p = stoi((*i)[4]);
                        Zaposleni zap((*i)[0], (*i)[1], god, id, p, animator, 7, 7);
                        izvodjaci.push_back(zap);
                        boo=true;
                        break;
                    }
                    else
                        boo=false;
            }
                if(boo==false)
                    cout<<"Unos nije validan, molim vas unesite ponovo:";
            }
        }
    }
    ///ovde je const zbog operatora ispisa
    bool ispisi_izvodjace()const
    {
        if(izvodjaci.size() == 0)
        {
            return false;
        }
        else
        {
            for(auto it = izvodjaci.begin(); it<izvodjaci.end(); it++)
            {
                cout<<*it;
            }
            return true;
        }
    }
    void menja_program ()
    {
        int a;
        do
        {
        cout<<"MENJANJE SOU PROGRAMA"<<endl;
        cout<<"     0 = naziv"<<endl;
        cout<<"     1 = max broj ljudi"<<endl;
        cout<<"     2 = izvodjace"<<endl;
        cout<<"     3 = tip programa"<<endl;
        cout<<"     4 = satnica"<<endl;
        cout<<"     5 = datum"<<endl;
        cout<<"     6 = kraj"<<endl;
        cout<<"Sta zelite da promenite u sou programu?"<<endl;
        cin>>a;
        if(a<0 || a>6)
        {
            cout<<"Unesite validan broj:"<<endl;
        }
        if(a==6){break;}
        if(a==0)
        {
            cout<<"Unesite nov naziv: ";
            cin>>naziv;
        }
        if(a==1)
        {
            cout<<"Unesite novi max broj ljudi: "<<endl;
            cin>>brLjudi;
        }
        if(a==2)
        {
            int m;
            cout<<"Da li zelite da dodate ili oduzmete animatore u predstavi?"<<endl;
            cout<<"     0 = dodavanje"<<endl;
            cout<<"     1 = oduzimanje"<<endl;
            cin>>m;
            while(m!=0 && m!=1)
            {
                cout<<"Unesite validan broj:"<<endl;
                cin>>m;
            }
            if(m==0)
            {
                ispisi_animatore();
                cout<<endl<<"Kada budete zadovoljni vasim izvodjacima ukucajte kraj"<<endl;
                upisi_izvodjace();

            }
            if(m==1)
            {
                int n;
                bool boo=false;
               while(izvodjaci.size()==0)
               {
                   cout<<"Nemate nijednog izvodjaca, molim vas izaberite izvodjace:"<<endl;
                   ispisi_animatore();
                   upisi_izvodjace();
                   boo=true;
               }
               if(boo==true)
               {
                   int ka;
                   cout<<"Da li zelite da nastavite sa brisanjem"<<endl;
                   cout<<"      0 = da"<<endl;
                   cout<<"      1 = ne"<<endl;
                   cin>>ka;
                   while(ka!=0 && ka!=1)
                   {
                       cout<<"Unesite pravilan broj"<<endl;
                       cin>>ka;
                   }
                   if(ka==0)
                   {
                       goto bla;
                   }
                   if(ka==1)
                   {
                       goto bla1;
                   }
               }
               bla:
               ispisi_izvodjace();
                cout<<"Unesite id onog izvodjaca kojeg zelite da izbrisete iz sou programa:"<<endl;
                cin>>n;
                cout<<endl;
                while(trazenje_i_brisanje(n)==false)
                {
                    cout<<"Taj id ne postoji, unesite validan broj:"<<endl;
                    cin>>n;
                }
            }
        }
        bla1:
        if(a==3)
        {
            int t;
            cout<<"Izaberite novi tip programa:"<<endl;
            cout<<"      0 = lutkarska predstava\n      1 = madjionicarska predstava\n      2 = predstava"<<endl;
        cin>>t;
        while(t<0 || t>2)
        {
            cout<<"Unesite validan broj: "<<endl;
            cin>>t;
        }
        if(t==0){tip=lutke;}
        else if(t==1){tip=madjionicar;}
        else if(t==2){tip=predstava;}
        }
        if(a==4)
        {
            cout<<"Unesite novu satnicu vaseg programa:"<<"\n"<<"sat: ";
            cin>>vreme.sat;
            cout<<"minuti: ";
            cin>>vreme.minuti;
        }
        if(a==5)
        {
            cout<<"Unesite novi datum programa:\n"<<"dan: ";
            cin>>datum.dan;
            cout<<"mesec: ";
            cin>>datum.mesec;
            cout<<"godina: ";
            cin>>datum.godina;
        }
        }while(a!=6);

    }
    bool trazenje_i_brisanje (int &a)
    {
        for(auto it=izvodjaci.begin(); it<izvodjaci.end(); it++){
                    if(a==it->getID())
                    {
                        izvodjaci.erase(it);
                        cout<<"Uspesno je izbrisan izvodjac ";
                        cout<<endl;
                        cout<<(*it);
                        return true;
                    }
                    }
        return false;
    }
    friend ostream& operator<<(ostream &out, const Sou_program &s)
    {
        out<<endl;
        out<<"ISPIS INFORMACIJA ZA SOU PROGRAM"<<endl;
        out<<"Naziv: "<<s.getNaziv()<<endl;
        if(s.getTip()==0){out<<"Tip ovog programa je lutkarska predstava"<<endl;}
        else if(s.getTip()==1){out<<"Tip ovog programa je madjionicarska predstava"<<endl;}
        else if(s.getTip()==2){out<<"Tip ovog programa je predstava"<<endl;}
        if(s.ispisi_izvodjace()==false)
        {
            cout<<"Nema zaposlenih."<<endl;
        }
        out<<"Max broj ljudi je: "<<s.getBrLjudi()<<endl;
        out<<"Datum programa: "<<s.datum.dan<<"."<<s.datum.mesec<<"."<<s.datum.godina<<endl;
        out<<"Vreme programa: "<<s.vreme.sat<<":"<<s.vreme.minuti<<endl;
        return out;
    }
};

#endif // SOU_PROGRAM_HPP_INCLUDED
