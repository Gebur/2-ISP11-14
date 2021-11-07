//Сначала идёт задание 11, далее 12, потом 13
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Решётка, крест и плюс-1, 2 и 3 соответсвенно.\n\n";
    cout << "Введите символ: ";
    char simvl;
    cin >> simvl;
    cout << "\n";
    cout << "insert it's size: ";
    int size;
    cin >> size;
    short opredfig;
    cin >> opredfig;
    cout << "\n";
    int z = 0;
    int z2 = 0;
    int opredy = 0;
    int opredx = 0;
    switch (opredfig)
    {
    case 1:
        while (z < size)
        {
            while (z2 < size)
            {
                while (opredy < size)
                {

                    if (opredy % 2 == 0)
                    {
                        cout << ".";
                        opredy++;
                    }
                    else if (z2 % 2 != 0)
                    {
                        cout << simvl;
                    }
                    else
                    {
                        cout << simvl;
                        opredy++;
                    }
                }
            }
            z2++;
            cout << endl;
        }
        z++;
    case 2:
        while (z < size)
        {
            int oprednach = 1;
            int opredkon = size;
            int sizedop = size;
            string** mass = new string * [size];
            //string mass[massive];
                //while (oprednach != size & opredkon == 0)
                //{
                //         while (z < size)
            {
                int oprednach = 1;
                int opredkon = size;
                int sizedop = size;
                if (oprednach != size & opredkon == 0)
                {
                    cout << simvl;
                }
                else
                {
                    cout << ".";
                }
                oprednach++;
                opredkon--;
            }
            z++;
            cout << endl;
            break;
            //when (oprednach )
            //cout << simvl;
        //}
        }
        cout << endl;
        break;
    case 3:
        while (z < size)
        {
            int opredy = -1;
            int opredx = size / 2;
            while (opredy <= size)
            {
                if (opredy == size / 2 || z == opredx)
                {
                    cout << simvl;
                }
                else
                {
                    cout << ".";
                }
                opredy++;
            }
            z++;
            cout << endl;
        }

        break;
    }
