#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Введите символ prim: ";
    char simvl;
    cin >> simvl;
    cout << "\n";
    cout << "insert it's size: ";
    int size;
    cin >> size;
    short opredfig;
    cout << "\nЕсли нужен заполненный нажми 1, если полый 2.";
    cout << "\n";
    cin >> opredfig;
    cout << "\n";
    int z = 0;
    cout << "Введите размер боковых сторон\n";
    int sizebok;
    cin >> sizebok;
    switch (opredfig)
    {
    case 1:
        for (int first = 0; first < sizebok; first++)
        {
            for (int opred = 0; opred < size; opred++)
            {
                cout << simvl << " ";
            }
            cout << endl;
        }
        break;
    case 2:
        for (int first = 0; first < sizebok; first++)
        {
            for (int opred = 0; opred < size; opred++)
            {
                if (first == 0 || first == sizebok - 1 || opred == 0 || opred == size - 1)
                {
                    cout << simvl;
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        break;
    }
    return 0;
}
