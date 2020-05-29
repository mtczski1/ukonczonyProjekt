#ifndef SHOTGUN_H
#define SHOTGUN_H
#include "Gun.h"
#include <iostream>

using namespace std;


class Shotgun:public Gun
{
    public:
        Shotgun();
        Shotgun(float, int, int, int, int, float);

        void wypiszInfo(std::ostream&) override;

    protected:

    private:
        int bulletNumber;
        float spread;

};

#endif // SHOTGUN_H
