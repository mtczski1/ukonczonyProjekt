#ifndef KOLEKCJA_H
#define KOLEKCJA_H

#include <iostream>
#include <vector>
#include <fstream>

#include "AR.h"
#include "Sniper.h"
#include "Shotgun.h"
#include "RPG.h"
#include "GrenadeLauncher.h"


class Kolekcja
{
    public:
        Kolekcja();
        ~Kolekcja();

        void dodajDoKolekcji(std::string, float, int, int, int);
        void dodajDoKolekcji(std::string, float, int, int, int, float);
        void dodajDoKolekcji(std::string, float, int, int, int, int, float);
        void dodajDoKolekcji(std::string, float, int, int, int, float, float);
        void dodajDoKolekcji(std::string, float, int, int, int, float, float, float);

        void wypiszInfo();
        void zapiszDoPliku(std::fstream&);


    private:
        std::vector<Gun*> guns;
};

#endif // KOLEKCJA_H
