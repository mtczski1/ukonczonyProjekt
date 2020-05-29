#include "Sniper.h"
#include <iostream>

using namespace std;

Sniper::Sniper()
{
    typ="Sniper";
    mode="hitscan";
    fireRate=1;
    minDamage=100;
    maxDamage=250;
    clipSize=5;
    zoom=2.5;
}

Sniper::Sniper(float f, int mnd, int mxd, int c, float z)
{
    typ="Sniper";
    mode="single";
    fireRate=f;
    minDamage=mnd;
    maxDamage=mxd;
    clipSize=c;
    zoom=z;
}

void Sniper::scope()
{
    cout<<"Scoped - zoom: "<<zoom<<endl;
}

void Sniper::wypiszInfo(ostream& wyjscie) {
    wyjscie<<typ<<endl;
    wyjscie<<"Fire rate: "<<fireRate<<endl;
    wyjscie<<"Minimalne obrazenia: "<<minDamage<<endl;
    wyjscie<<"Maksymalne obrazenia: "<<maxDamage<<endl;
    wyjscie<<"Wielkosc magazynka: "<<maxDamage<<endl;
    wyjscie<<"Zoom: "<<zoom<<endl<<endl;
}








