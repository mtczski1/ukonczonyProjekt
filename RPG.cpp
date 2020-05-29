#include "RPG.h"
#include <iostream>

using namespace std;

RPG::RPG()
{
    typ="RPG";
    mode="Single";
    fireRate=0.5;
    minDamage=100;
    maxDamage=300;
    clipSize=1;
    travelSpeed=2;
    explosionRadius=1.5;
    clipState=clipSize;
}

RPG::RPG(float f, int mnd, int mxd, int c, float t, float e)
{
    typ="RPG";
    mode="Single";
    fireRate=f;
    minDamage=mnd;
    maxDamage=mxd;
    clipSize=c;
    travelSpeed=t;
    explosionRadius=e;
    clipState=clipSize;
}

void RPG::wypiszInfo(ostream& wyjscie) {
    wyjscie<<typ<<endl;
    wyjscie<<"Fire rate: "<<fireRate<<endl;
    wyjscie<<"Minimalne obrazenia: "<<minDamage<<endl;
    wyjscie<<"Maksymalne obrazenia: "<<maxDamage<<endl;
    wyjscie<<"Wielkosc magazynka: "<<clipSize<<endl;
    wyjscie<<"Predkosc pocisku: "<<travelSpeed<<endl;
    wyjscie<<"Promien eksplozji: "<<explosionRadius<<endl;
}
