#include "GrenadeLauncher.h"
#include <iostream>

using namespace std;

GrenadeLauncher::GrenadeLauncher()
{
    typ="GLauncher";
    mode="Single";
    fireRate=1.5;
    minDamage=90;
    maxDamage=250;
    clipSize=2;
    travelSpeed=3;
    explosionRadius=1.2;
    bulletFall=0.1;
    clipState=clipSize;
}

GrenadeLauncher::GrenadeLauncher(float f, int mnd, int mxd, int c, float t, float e, float b)
{
    typ="Glauncher";
    mode="Single";
    fireRate=f;
    minDamage=mnd;
    maxDamage=mxd;
    clipSize=c;
    travelSpeed=t;
    explosionRadius=e;
    bulletFall=b;
}

void GrenadeLauncher::wypiszInfo(ostream &wyjscie) {
    RPG::wypiszInfo(wyjscie);
    wyjscie << "Opadanie pocisku: "<<bulletFall<<endl<<endl;
}


