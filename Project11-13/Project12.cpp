#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int size;
    cout << "[+] Выерите размер креста: ";
    cin >> size;
    cout << "[+] Выберите символ креста: ";
    char symbol;
    cin >> symbol;
    cout << "\n[+] Крест: \n";
    cout << "";
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                cout << symbol << " ";
            }
            else if (i + j == 10)
            {
                cout << symbol << " ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
