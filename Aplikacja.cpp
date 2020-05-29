#include "Aplikacja.h"

using namespace std;

Aplikacja& Aplikacja::getInstance()
{
    static Aplikacja aplikacja;
    return aplikacja;
}

void Aplikacja::pokazOpcje()
{
    cout<<"1. Wyswietl menu"<<endl;
    cout<<"2. Odczyt danych z pliku"<<endl;
    cout<<"3. Odczyt danych z konsoli"<<endl;
    cout<<"4. Wyliczenie i wypisanie info na ekran konsoli" <<endl;
    cout<<"5. Zapis wyliczonych danych do pliku"<<endl;
    cout<<"6. Zakonczenie pracy z programem"<<endl;
}

void Aplikacja::odczytPlik()
{
  plikWe.open("dane.txt", ios::in);
  if(!plikWe.good()) cout<<"Blad otwarcia pliku"<<endl;

  string rodzaj;
    float p1, p6, p7, p8;
    int p2, p3, p4, p5;

    while (plikWe >> rodzaj)
    {
        if (rodzaj=="AR")
        {
            plikWe>>p1>>p2>>p3>>p4;
            kolekcja.dodajDoKolekcji(rodzaj, p1, p2, p3, p4);
        }

        else if(rodzaj=="Sniper")
        {
            plikWe>>p1>>p2>>p3>>p4>>p6;
            kolekcja.dodajDoKolekcji(rodzaj, p1, p2, p3, p4, p6);
        }

        else if(rodzaj=="Shotgun")
        {
            plikWe>>p1>>p2>>p3>>p4>>p5>>p6;
            kolekcja.dodajDoKolekcji(rodzaj, p1, p2, p3, p4, p5, p6);
        }

        else if(rodzaj == "RPG")
        {
            plikWe>>p1>>p2>>p3>>p4>>p6>>p7;
            kolekcja.dodajDoKolekcji(rodzaj, p1, p2, p3, p4, p6, p7);
        }

        else if(rodzaj == "GLauncher")
        {

            plikWe>>p1>>p2>>p3>>p4>>p6>>p7>>p8;
            kolekcja.dodajDoKolekcji(rodzaj, p1, p2, p3, p4, p6, p7, p8);
        }

        else cout<<"Bledny typ danych";
    }
    plikWe.close();
    cout<<"Wczytano dane z pliku poprawnie"<<endl;
}

void Aplikacja::odczytKonsola()
{
    string rodzaj;
    float p1, p6, p7, p8;
    int p2, p3, p4, p5;

    cout<<endl<<"Jaki typ elementu chcesz wczytac? ";
    cin>>rodzaj;

    if (rodzaj=="AR")
    {
        cout<<"Podaj fire rate: ";
        cin>>p1;
        cout<<"Podaj minimalne obrazenia: ";
        cin>>p2;
        cout<<"Podaj maksymalne obrazenia: ";
        cin>>p3;
        cout<<"Podaj wielkosc magazynka: ";
        cin>>p4;
        kolekcja.dodajDoKolekcji(rodzaj, p1, p2, p3, p4);
    }

    else if(rodzaj=="Sniper")
    {
        cout<<"Podaj fire rate: ";
        cin>>p1;
        cout<<"Podaj minimalne obrazenia: ";
        cin>>p2;
        cout<<"Podaj maksymalne obrazenia: ";
        cin>>p3;
        cout<<"Podaj wielkosc magazynka: ";
        cin>>p4;
        cout<<"Podaj wartosc przyblizenia: ";
        cin>>p6;
        kolekcja.dodajDoKolekcji(rodzaj, p1, p2, p3, p4, p6);
    }

    else if(rodzaj=="Shotgun")
    {
                cout<<"Podaj fire rate: ";
        cin>>p1;
        cout<<"Podaj minimalne obrazenia: ";
        cin>>p2;
        cout<<"Podaj maksymalne obrazenia: ";
        cin>>p3;
        cout<<"Podaj wielkosc magazynka: ";
        cin>>p4;
        cout<<"Podaj ilosc pociskow w jednym strzale: ";
        cin>>p5;
        cout<<"Podaj wartosc rozrzutu(w metrach): ";
        cin>>p6;
        kolekcja.dodajDoKolekcji(rodzaj, p1, p2, p3, p4, p5, p6);
    }

    else if(rodzaj=="RPG")
    {
                cout<<"Podaj fire rate: ";
        cin>>p1;
        cout<<"Podaj minimalne obrazenia: ";
        cin>>p2;
        cout<<"Podaj maksymalne obrazenia: ";
        cin>>p3;
        cout<<"Podaj wielkosc magazynka: ";
        cin>>p4;
        cout<<"Podaj predkosc pocisku(m/s): ";
        cin>>p6;
        cout<<"Podaj zasieg eksplozji(w metrach): ";
        cin>>p7;
        kolekcja.dodajDoKolekcji(rodzaj, p1, p2, p3, p4, p6, p7);
    }

    else if (rodzaj=="GLauncher")
    {
                cout<<"Podaj fire rate: ";
        cin>>p1;
        cout<<"Podaj minimalne obrazenia: ";
        cin>>p2;
        cout<<"Podaj maksymalne obrazenia: ";
        cin>>p3;
        cout<<"Podaj wielkosc magazynka: ";
        cin>>p4;
        cout<<"Podaj predkosc pocisku(m/s): ";
        cin>>p6;
        cout<<"Podaj zasieg eksplozji(w metrach): ";
        cin>>p7;
        cout<<"Podaj tempo opadania(m/s): ";
        cin>>p8;
        kolekcja.dodajDoKolekcji(rodzaj, p1, p2, p3, p4, p6, p7, p8);

    }
    else cout<<"Bledny typ obiektu";
}

void Aplikacja::wypisywanieKonsola()
{
    kolekcja.wypiszInfo();
}

void Aplikacja::zapisPlik()
{
    plikWy.open("info.txt", ios::out);
    kolekcja.zapiszDoPliku(plikWy);
    plikWy.close();
    cout<<"Dane zapisane"<<endl;
}












