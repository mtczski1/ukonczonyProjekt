#ifndef GUN_H
#define GUN_H

#include <iostream>

using namespace std;


class Gun
{
    public:

        void shoot();
        void reload();

        virtual void wypiszInfo(std::ostream&) = 0;

protected:
        string typ;
        string mode;
        float fireRate;
        int minDamage;
        int maxDamage;
        int clipSize;
        int clipState;
};

#endif // GUN_H
