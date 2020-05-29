#ifndef GRENADELAUNCHER_H
#define GRENADELAUNCHER_H
#include "RPG.h"
#include <iostream>

using namespace std;


class GrenadeLauncher:public RPG
{
    public:
        GrenadeLauncher();
        GrenadeLauncher(float, int, int, int, float, float, float);

        void wypiszInfo(std::ostream&) override;


private:
        float bulletFall;
};

#endif // GRENADELAUNCHER_H
