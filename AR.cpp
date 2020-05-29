#include "AR.h"
#include <iostream>

using namespace std;

AR::AR()
{
    typ="AR";
    mode="auto";
    fireRate=5;
    minDamage=25;
    maxDamage=150;
    clipSize=25;
    clipState=clipSize;
}

AR::AR(float f, int mnd, int mxd, int c)
{
    typ="AR";
    mode="hitscan";
    fireRate=f;
    minDamage=mnd;
    maxDamage=mxd;
    clipSize=c;
    clipState=clipSize;
}

void AR::wypiszInfo(ostream& wyjscie) {
    wyjscie<<typ<<endl;
    wyjscie<<"Fire rate: "<<fireRate<<endl;
    wyjscie<<"Minimalne obrazenia: "<<minDamage<<endl;
    wyjscie<<"Maksymalne obrazenia: "<<maxDamage<<endl;
    wyjscie<<"Wielkosc magazynka: "<<clipSize<<endl<<endl;
}


