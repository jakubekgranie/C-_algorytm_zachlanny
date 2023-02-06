//n = nominals[i];
//autor: Jakub N;
//ALGORYTM ZACHŁANNY
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int nominals[15] = { 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 }; // x = nominał * 100;
    float numer;
    cin >> numer;
    numer = numer * 100;  //usuwanie przecinka;
    int numer2 = round(numer); //konwersja z typu double na int;
    while (numer2 != 0)
    {
        for (int i = 0; i < 15; i++) //właściwy algorytm;
        {
            if (numer2 >= nominals[i]) //jeśli numer jest większy lub równy do danego nominału = odejmij wartość nominału i wypisz n;
            {
                numer2 = numer2 - nominals[i];
                if (nominals[i] >= 100) //nominał większy lub równy 1zł (1*100) nie potrzebuje konwersji i po podz. jest wypisywany;
                {
                    cout << nominals[i] / 100 << "zl" << " ";
                }
                else //nominał < 100; potrzebuje typu float by działać;
                {
                    float nominal = nominals[i] / 100.0; //konwersja na grosze;
                    if (nominals[i] < 100 && nominals[i] > 5) //mniejsze od 1 zł i większe od 5 groszy = dodaj zero na końcu (ESTETYKA);
                    {
                        cout << nominal << "0" << "gr" << " "; //ex. 0.5 = 0.50;
                    }
                    else
                    {
                        cout << nominal << "gr" << " "; //wartości < 0.10gr nie potrzebują żadnych modyfikacji; wypisz;
                    }
                }
                i--; //by sprawdzić, czy liczba jest nadal większa lub równa danemu nominałowi;
            }
        }
    }
    return 0;
}
