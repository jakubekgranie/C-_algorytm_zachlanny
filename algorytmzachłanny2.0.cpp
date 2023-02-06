//n = nominals[i];
//autor: Jakub N;
//ALGORYTM ZACHŁANNY
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int nominals[15] = { 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 }; // x = nominał * 100;
    double numer;
    cin >> numer;
    numer = numer * 100;  //usuwanie przecinka;
    int numer2 = std::round(numer); //konwersja z typu double na int;
    while (numer2 != 0)
    {
        for (int i = 0; i < 15; i++) //właściwy algorytm;
        {
            if (numer2 >= nominals[i]) //jeśli numer jest większy lub równy do danego nominału = odejmij wartość nominału i wypisz n;
            {
                numer2 = numer2 - nominals[i];
                if (nominals[i] >= 100)
                {
                    cout << nominals[i] / 100 << "zl" << " ";
                }
                else
                {
                    cout << nominals[i] << "gr" << " ";
                }
                i--; //by sprawdzić, czy liczba jest nadal większa lub równa danemu nominałowi;
            }
        }
    }
    return 0;
}
