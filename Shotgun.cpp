#include "Shotgun.h"
#include <iostream>

using namespace std;

Shotgun::Shotgun()
{
    typ="Shotgun";
    mode="hitscan";
    fireRate=1.5;
    minDamage=3;
    maxDamage=15;
    clipSize=8;
    bulletNumber=25;
    spread=0.7;
}

Shotgun::Shotgun(float f, int mnd, int mxd, int c, int b,  float s)
{
    typ="Shotgun";
    mode="hitscan";
    fireRate=f;
    minDamage=mnd;
    maxDamage=mxd;
    clipSize=c;
    bulletNumber=b;
    spread=s;
    clipState=clipSize;
}

void Shotgun::wypiszInfo(ostream& wyjscie) {
    wyjscie<<typ<<endl;
    wyjscie<<"Fire rate: "<<fireRate<<endl;
    wyjscie<<"Minimalne obrazenia: "<<minDamage<<endl;
    wyjscie<<"Maksymalne obrazenia: "<<maxDamage<<endl;
    wyjscie<<"Wielkosc magazynka: "<<clipSize<<endl;
    wyjscie<<"Ilosc pociskow z jdenego strzalu: "<<bulletNumber<<endl;
    wyjscie<<"Wielkosc rozrzutu: "<<spread<<endl<<endl;
}
