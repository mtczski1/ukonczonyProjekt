#include "Kolekcja.h"

#include <iostream>
#include <vector>

using namespace std;

Kolekcja::Kolekcja() = default;

Kolekcja::~Kolekcja()
{
    for (auto& it: guns) delete it;
}

void Kolekcja::dodajDoKolekcji(string typ, float p2, int p3, int p4, int p5)
{
    if (typ=="AR") guns.push_back(new AR(p2, p3, p4, p5));
    else cout<<"Bledny typ";
}

void Kolekcja::dodajDoKolekcji(string typ, float p2, int p3, int p4, int p5, float p6)
{
    if (typ=="Sniper") guns.push_back(new Sniper(p2, p3, p4 ,p5, p6));
    else cout<<"Bledny typ";
}


void Kolekcja::dodajDoKolekcji(string typ, float p2, int p3, int p4, int p5, int p6, float p7)
{
    if (typ=="Shotgun") guns.push_back(new Shotgun(p2, p3, p4, p5, p6, p7));
    else cout<<"Bledny typ";
}

void Kolekcja::dodajDoKolekcji(string typ, float p2, int p3, int p4, int p5, float p6, float p7)
{
    if (typ=="RPG") guns.push_back(new RPG(p2, p3, p4, p5, p6, p7));
    else cout<<"Bledny typ";
}


void Kolekcja::dodajDoKolekcji(string typ, float p2, int p3, int p4, int p5, float p6, float p7, float p8)
{
    if (typ=="GLauncher") guns.push_back(new GrenadeLauncher(p2, p3, p4, p5, p6, p7, p8));
    else cout<<"Bledny typ";
}



void Kolekcja::wypiszInfo()
{
    if(guns.empty())
       {
           cout<<"Kolekcja jest pusta!"<<endl;
            return;
       }

    cout<<endl<<"Wczytanie broni"<<endl;

    for(auto& it:guns)
    {
        it -> wypiszInfo(cout);
    }
}

void Kolekcja::zapiszDoPliku(std::fstream& plik)
{
    if(guns.empty())
    {
        cout<<"Kolekcja jest pusta"<<endl;
        return;
    }

    for(auto& it:guns)
    {
        it -> wypiszInfo(plik);
    }
}





















