// Dlya Plusov.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
double DoMathStuff(double firstNum, double SecondNum, char operation)
{
    if (operation == '/' & SecondNum == 0) { return 0; }
    switch(operation)
    {
    case '-': return firstNum - SecondNum;
    case '+': return firstNum + SecondNum;
    case '*': return firstNum * SecondNum;
    case '/': return firstNum / SecondNum;
    case 't': return tan(firstNum);
    case 'c': return cos(firstNum);
    case 's': return sin(firstNum);
    case 'Q': return sqrt(firstNum);
    case 'C': return pow(firstNum, SecondNum);
    case '=':
        if (firstNum == SecondNum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    case '<':
        if (firstNum < SecondNum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    case '>':
        if (firstNum > SecondNum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    default: return 0;
    }
    return 4;
}
int main()
{
    setlocale(0, "");
    cout << "\"Калькулятор работающий на функциях\" \n";
    cout << "Есть:\n";
    cout << "[1] Сумма 2 чисел\n";
    cout << "[2] Разность 2 чисел\n";
    cout << "[3] Умножение 2 чисел\n";
    cout << "[4] Деление 2 чисел\n";
    cout << "[5] Тангенс первого числа при помощи t\n";
    cout << "[6] Косинус первого числа при помощи c\n";
    cout << "[7] Синус первого числа при помощи s\n";
    cout << "[8] Корень первого числа при помощи Q\n";
    cout << "[9] Возведение в степен английской С\n";
    cout << "[9.1] Первое число-то, которое возвести в степень. Второе-какая степень.\n";
    cout << "[10] Сравнение двух чисел при помощи = и < >\n";
    cout << "Введите 1-oe желаемое число: ";
    double number1;
    cin >> number1;
    cout << "Введите операцию: ";
    char oper;
    cin >> oper;
    cout << "Введите 2-oe желаемое число: ";
    double number2;
    cin >> number2;
    cout << "Результат: " << DoMathStuff(number1, number2, oper);
    int _; cin >> _;
 }
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
