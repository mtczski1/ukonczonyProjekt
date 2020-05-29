#ifndef RPG_H
#define RPG_H
#include "Gun.h"
#include <iostream>

using namespace std;


class RPG: public Gun
{
    public:
        RPG();
        RPG(float, int, int, int, float, float);

        void wypiszInfo(std::ostream&) override;

protected:
        float travelSpeed;
        float explosionRadius;

};

#endif // RPG_H
