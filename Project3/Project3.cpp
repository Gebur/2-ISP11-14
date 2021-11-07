#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Это калькулятор" << endl << endl;
    cout << "доступны +, -, *, / и % а ещё есть синус, √ и тангенс." << endl << endl;
    float first;
    float second;
    char operation;
    cout << "введите операцию из предложенных: ";
    cin >> operation;
    cout << "введите 1-ое число: ";
    cin >> first;
    cout << "введите 2-ое число: ";
    cin >> second;
    if (operation == '+') {
        cout << "Результат: " << first + second;
    }
    else if (operation == '-') {
        cout << "Результат: " << first - second;
    }
    else if (operation == '*') {
        cout << "Результат: " << first * second;
    }
    else if (operation == '/') {
        cout << "Результат: " << first / second;
    }
    else if (operation == '%') {
        cout << "Результат: " << (int)first % (int)second;
    }
    else if (operation == 's') {
        cout << "sin " << first << "равно " << sin(first);
    }
    else if (operation == '√') {
        cout << "корень из " << first << "равно " << sqrt(first);
    }
    else if (operation == 't') {
        cout << "тангенс из " << first << "равно " << tan(first);
    }
    else {
        cout << "Ты не справился даже с такой лёгкой задачей.";
    }
    return 0;
}
