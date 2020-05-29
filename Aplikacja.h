#ifndef APLIKACJA_H
#define APLIKACJA_H

#include <iostream>
#include <fstream>

#include "Kolekcja.h"

using namespace std;


class Aplikacja
{
    Kolekcja kolekcja;
    fstream plikWe, plikWy;

   private:
        Aplikacja()=default;
        Aplikacja(const Aplikacja&) = delete;
        Aplikacja& operator = (const Aplikacja&) = delete;
        ~Aplikacja()=default;
   public:
    static Aplikacja& getInstance();
    static void pokazOpcje();

    void odczytPlik();
    void odczytKonsola();
    void wypisywanieKonsola();
    void zapisPlik();
};

#endif // APLIKACJA_H
