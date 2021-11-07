#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "\"линия\"" << endl;
    cout << "Введите из чего будет состоять линия: ";
    short dlyCikla = 0;
    string simvl;
    cin >> simvl;
    cout << "\nВведите число символов в линии: ";
    short number;
    cin >> number;
    cout << "\nWhat line do you want?" << endl;
    cout << "\nIf you want a horizontal line press 1, if you want vertical press 2" << endl;
    short definition;
    cin >> definition;
    switch (definition)
    {
    case 1:
        while (dlyCikla < number)
        {
            cout << simvl << " ";
            dlyCikla++;
        }
        break;
    case 2:
        while (dlyCikla < number)
        {
            cout << simvl << endl;
            dlyCikla++;
        }
        break;
    default:
        cout << "No dude print 1 or 2";
        break;
    }
    return 0;
}
