#ifndef FUNKCIJE_HPP_INCLUDED
#define FUNKCIJE_HPP_INCLUDED

vector<string> splitSen(string str, char c=',')
{
    string w = "";
    vector<string> v;
    for (auto rem : str)
    {
        if (rem==c)
        {
            v.push_back(w);
            w="";
        }
        else
        {
            w=w+rem;
        }
    }
    v.push_back(w);

    return v;
}
void pisiTxt(string nazivFajla, string tekst, char mode='w')
{
    ofstream fajl;
    if (mode=='a'){
        fajl.open (nazivFajla, ios_base::app);
    }else{
        fajl.open (nazivFajla);
    }
    fajl << tekst << endl;
    fajl.close();

}
void citajTxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }
    else
        cout << "Neuspesno otvoren fajl";
}
string citajTxt_string(string nazivFajla)
{
    string linija;
    string b;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            b.append(linija);
        }
        fajl.close();
    }
    else
        cout << "Neuspesno otvoren fajl";
    return b;
}
vector<vector<string>> citajTxt_a(string nazivFajla)
{
    vector <vector<string>> viktorija;
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            vector <string> rezultat;
            rezultat = splitSen(linija);
            viktorija.push_back(rezultat);
        }
        fajl.close();
    }
    else
        cout << "Neuspesno otvoren fajl";
    return viktorija;
}
void citajFajl(string nazivFajla)
{
    cout<<"U fajlu pise: "<<endl;
    citajTxt(nazivFajla);
    cout<<endl<<endl;
}

#endif // FUNKCIJE_HPP_INCLUDED
