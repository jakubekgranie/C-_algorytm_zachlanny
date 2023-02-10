//n = nominals[i];

//autor: Jakub N;

//ALGORYTM ZACHŁANNY 3.1

#include <iostream>

using namespace std;

int main()

{

    int nominals[15] = { 50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 }; // x = nominał * 100;

    int finalcount[15];

    int numeroper2;

    for(int e = 0; e > 15; e++) //initalizacja finalcount;

    {

        finalcount[e] = 0;

    }

    double numer;

    cout<<endl<<"-----------DANE----------"<<endl;

    cout<<"LICZBA: ";

    cin >> numer;

    cout<<"-------------------------"<<endl;

    numer = numer * 100;  //usuwanie przecinka;

    if((int)numer < numer)

    {

        double numeroper = numer - (int)numer;

        if((int)numeroper < numeroper)

        {

            numeroper++;

        }

        numeroper2 = (int)numeroper;

    }; //konwersja z typu double na int;

    int numer2 = (int)numer + numeroper2;

    while (numer2 != 0)

    {

        for (int i = 0; i < 15; i++) //właściwy algorytm;

        {

            if (numer2 >= nominals[i]) //jeśli numer jest większy lub równy do danego nominału = odejmij wartość nominału i wypisz n;

            {

                numer2 = numer2 - nominals[i];

                finalcount[i] = finalcount[i] + 1;

                i--; //by sprawdzić, czy liczba jest nadal większa lub równa danemu nominałowi;

            }

        }

        cout<<endl<<"----------WYNIKI---------"<<endl<<endl;

        for (int j = 0; j < 15; j++)

        {

            if (finalcount[j] != 0)

            {

                cout << finalcount[j];

                if (nominals[j] >= 100) //złote

                {

                    cout << "x " << nominals[j] / 100 << " zł" << endl;

                }

                else

                {

                    if (nominals[j] < 100 && nominals[j] >= 10) // 50gr - 10gr

                    {

                        cout << "x " << nominals[j] << " gr" << endl;

                    }

                    else //5 - 1 gr

                    {

                        cout << "x " << nominals[j] << " gr" << endl;

                    }

                }

            }

        }

        cout<<endl<<"-------------------------"<<endl<<endl<<"-------------------------"<<endl<<"Copyright Jakub Namyślak"<<endl<<"All rights reserved"<<endl<<"-------------------------";

    }

    return 0;

}
