#include <iostream>
#include <windows.h>

using namespace std;

/*
Klasa - pojêcie abstrakcyjne, oznaczaj¹ce w programowaniu obiektowym w³asny typ danych. Sk³ada siê z atrybutów i metod.
Obiekt to reprezentant, czyli przedstawiciel klasy. Stworzony wg. przepisu podanego w klasie.
*/

class Zwierze
{
    public: //klasa dostêpu do zmiennych, public dostêpne dla ka¿dego
    //atrybuty
    string gatunek;
    string imie;
    int wiek;

    //metody
    void dodaj_zwierze()
    {
        cout << "Dodawanie nowego zwierzaka." <<endl;
        cout << "Jaki to gatunek?" <<endl;              cin >> gatunek;
        cout << "Jak ma na imie?" <<endl;               cin >> imie;
        cout << "W jakim jest wieku?" << endl;          cin >> wiek;

    }

    void daj_glos()
    {
        if ((gatunek=="Krowa") || (gatunek=="krowa"))       cout << imie << ", lat: " << wiek << ": Muuuuuuu!" << endl;
        else if ((gatunek=="Kot") || (gatunek=="kot"))      cout << imie << ", lat: " << wiek << ": Miau!" << endl;
        else if ((gatunek=="Pies") || (gatunek=="piesa"))   cout << imie << ", lat: " << wiek << ": Hau, hau!" << endl;
        else if ((gatunek=="Koza") || (gatunek=="koza"))    cout << imie << ", lat: " << wiek << ": Bee!" << endl;
        else if ((gatunek=="Kon") || (gatunek=="kon"))      cout << imie << ", lat: " << wiek << ": Ihaaa!" << endl;
        else                                                cout << "Nieznany gatunek zwierza." << endl;
    }
};

int main()
{
    Zwierze z1;             //tworze obiekt z1 klasy zwierze
    z1.dodaj_zwierze();     //wywo³uje metode (funkcje z klasy dla obiektu z1
    z1.daj_glos();          //wywo³uje metode (funkcje z klasy dla obiektu z1

    Zwierze z2;             //tworze obiekt z2 klasy zwierze
    z2.dodaj_zwierze();     //wywo³uje metode (funkcje z klasy dla obiektu z2
    z2.daj_glos();          //wywo³uje metode (funkcje z klasy dla obiektu z2

    system("cls");

    int ile;
    cout << "Ile mam stworzyc zwierzat?" << endl;   cin >> ile;

    Zwierze z[ile];             //tworze tablice obiektów

    for (int i=0; i<ile; i++)
    {
        z[i].dodaj_zwierze();
        z[i].daj_glos();
    }

    return 0;
}
