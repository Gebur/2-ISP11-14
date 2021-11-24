#include <iostream>
using namespace std;
void Clean()
{
    system("cls");
}
void ChangeConsoleColor()
{
    system("color F0");
}
void ChangeTextColor()
{
    system("color A");
}
int GetSizeInt()
{
    return 4;
}
int GetSizeChar()
{
    return 1;
}
int GetSizeDouble()
{
    return 8;
}
int GetSizeFloat()
{
    return 4;
}
int GetSizeBool()
{
    return 1;
}
string ShowMessage()
{
    return "Privet, ya funkcia";
}
void MakeSquare5x5()
{
    int z = 0;
    int size = 5;
    while (z < size)
    {
        int z2 = 0;
        while (z2 < size)
        {
            cout << "[]" << " ";
            z2++;
        }
        cout << endl;
        z++;
    }
}
int main()
{
    setlocale(0, "");
    cout << "\"Functions\" \n";
    cout << "[1] Очищение консоли\n";
    cout << "[2] Изменить цвет фона\n";
    cout << "[3] Изменить цвет текста\n";
    cout << "[4] Вывод размера типа данных INT\n";
    cout << "[5] Вывод размера типа данных CHAR\n";
    cout << "[6] Вывод размера типа данных DOUBLE\n";
    cout << "[7] Вывод размера типа данных FLOAT\n";
    cout << "[8] Вывод размера типа данных BOOL\n";
    cout << "[9] Вывод сообщения\n";
    cout << "[10] Вывод квадрата 5x5\n";
    cout << "Введите желаемое число: ";
    short number = 0;
    cin >> number;
    int i;
    switch (number)
    {
    case 1:
        Clean();
        break;
    case 2:
        ChangeConsoleColor();
        break;
    case 3:
        ChangeTextColor();
        break;
    case 4:
        i = GetSizeInt();
        cout << i;
        break;
    case 5:
        i = GetSizeChar();
        cout << i;
        break;
    case 6:
        i = GetSizeDouble();
        cout << i;
        break;
    case 7:
        i = GetSizeFloat();
        cout << i;
        break;
    case 8:
        i = GetSizeBool();
        cout << i;
        break;
    case 9:
        ShowMessage();
        break;
    case 10:
        MakeSquare5x5();
        break;
    default:
        "Wrong";
        break;
    }

    int _; cin >> _;
}