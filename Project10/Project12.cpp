#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Введите символ: ";
    char simvl;
    cin >> simvl;
    cout << "\n";
    cout << "insert size: ";
    int size;
    cin >> size;
    short opredfig;
    cout << "\nЕсли нужен полый нажми 1, если заполненный 2.";
    cout << "\n";
    cin >> opredfig;
    cout << "\n";
    switch (opredfig)
    {
    case 1:
        for (int a = 0; a < size; a++, cout << endl)
        {
            for (int b = 0; b < size; b++)
            {
                if (a == size / 2 || b == size / 2 + a || b == size / 2 - a)
                {
                    cout << simvl << ' ';
                }
                else
                {
                    cout << ". ";
                }

            }
            cout << endl;
        }
        break;
    case 2:
        for (int a = 0; a < size; a++, cout << endl)
        {
            for (int b = 0; b < size; b++)
            {
                if (a == size / 2 || b > size / 2 + a || b < size / 2 - a)
                {
                    cout << simvl << ' ';
                }
                else
                {
                    cout << ". ";
                }
            }
        }
    }
    return 0;
}
