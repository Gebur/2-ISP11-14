#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Решётка.\n\n";
    cout << "Введите символ: ";
    char simvl;
    cin >> simvl;
    cout << "\n";
    cout << "insert it's size: ";
    int size;
    cin >> size;
    cout << "";
        for (int x = 0; x < size - 1; x++)
        {
            for (int y = 0; y < size - 1; y++)
            {
                if (x % 2 == 0 && y % 2 == 0 && x < size - 1 && y < size - 1)
                {
                    cout << " ";
                }
                else
                {
                    cout << simvl;
                }
            }
            cout << endl;
        }
}