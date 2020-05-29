#include <iostream>
#include "Kolekcja.h"

#include "Aplikacja.h" //RB

using namespace std;

int main()
{


    Aplikacja& aplikacja = Aplikacja::getInstance();
    int wybor;

    Aplikacja::pokazOpcje();

    while (true)
    {
        cout << endl << "Co chcesz zrobic: ";
        cin >> wybor;

        switch (wybor)
        {
            case 1:
                Aplikacja::pokazOpcje();
                break;
            case 2:
                aplikacja.odczytPlik();
                break;
            case 3:
                aplikacja.odczytKonsola();
                break;
            case 4:
                aplikacja.wypisywanieKonsola();
                break;
            case 5:
                aplikacja.zapisPlik();
                break;
            case 6:
                cout << "Konczenie pracy z programem" << endl;
                return 0;
            default:
                cout << "Nieznana komenda!" << endl;
                break;
        }
    }
}
