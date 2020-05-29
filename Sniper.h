#ifndef SNIPER_H
#define SNIPER_H
#include "Gun.h"
#include <iostream>

using namespace std;


class Sniper:public Gun
{
    public:
        Sniper();
        Sniper(float, int, int, int, float);

        void scope();

        void wypiszInfo(std::ostream&) override; //RB

    private:
        float zoom;
};

#endif // SNIPER_H
