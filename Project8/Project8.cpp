#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Квадрат полый and zapolnenny\n\n";
    cout << "Введите символ: ";
    char simvl;
    cin >> simvl;
    cout << "\n";
    cout << "insert it's size: ";
    int size;
    cin >> size;
    short opredfig;
    cout << "\nЕсли нужен полый нажми 1, если заполненный 2.";
    cout << "\n";
    cin >> opredfig;
    cout << "\n";
    int z = 0;
    switch (opredfig)
    {
    case 1:
        for (int first = 0; first < size; first++)
        {
            for (int opred = 0; opred < size; opred++)
            {
                if (first == 0 || first == size - 1 || opred == 0 || opred == size - 1)
                {
                    cout << simvl << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    case 2:
        while (z < size)
        {
            int z2 = 0;
            while (z2 < size)
            {
                cout << simvl << " ";
                z2++;
            }
            cout << endl;
            z++;
        }
    }
    return 0;
}
