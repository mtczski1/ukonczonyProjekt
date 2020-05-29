#include "Gun.h"
#include <iostream>

using namespace std;

void Gun::shoot()
{
    if(clipState>0) cout<<"Shooting"<<endl;
    else
    {
        cout<<"No ammo, reloading"<<endl;
        reload();
    }
}

void Gun::reload()
{
    clipState = clipSize;
    cout<<"Reloaded"<<endl;
}
