#ifndef AR_H
#define AR_H

#include "Gun.h"
#include <iostream>

using namespace std;


class AR:public Gun
{
    public:
        AR();
        AR(float, int, int, int);

        void wypiszInfo(std::ostream&) override;


    protected:

    private:
};

#endif // AR_H
