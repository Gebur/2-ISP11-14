﻿// Project15.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "\"Labirint\" \n";
    setlocale(0, "");
    int choice;
    cout << "Sizes\n";
    cout << "[1] 15x15\n";
    cout << "[2] 20x20\n";
    cout << "[3] 30x30\n";
    cout << "Choose the size: ";
    std::cin >> choice;
    if (choice == 1)
    {
        int first[15][15] =
        { {0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1 ,1, 1, 0},
        {0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0},
        {1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0},
        {1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1},
        {0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1},
        {0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0},
        {0, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 0},
        {1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0},
        {1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1},
        {1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1},
        {1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1},
        };
        char second[15][15];
        for (int number1 = 0; number1 < 15; number1++)
        {
            for (int number2 = 0; number2 < 15; number2++)
            {
                if (first[number1][number2] == 0)
                {
                    cout << "   ";
                }
                else if (first[number1][number2] == 1)
                {
                    cout << "# ";
                }
            }
            cout << endl;
        }
    }
    else if (choice == 2)
    {
        int first[20][20] =
        { {0, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1 ,1, 1, 0},
        {0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0},
        {1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0},
        {1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1},
        {0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1},
        {0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0},
        {0, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0},
        {1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0},
        {1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1},
        {1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1},
        {1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1},
        {1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 1, 1},
        {1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1},
        {1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1},
        };
        char second[15][15];
        for (int number1 = 0; number1 < 15; number1++)
        {
            for (int number2 = 0; number2 < 15; number2++)
            {
                if (first[number1][number2] == 0)
                {
                    cout << "   ";
                }
                else if (first[number1][number2] == 1)
                {
                    cout << "# ";
                }
            }
            cout << endl;
        }
    }
    else if (choice == 3)
    {
        int arr[30][30];

        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 15; j++)
            {
                arr[i][j] = rand() % 2;
                if (arr[i][j] == 1)
                {
                    cout << "# ";
                }
                else if (arr[i][j] == 0)
                {
                    cout << "  ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
    else
    {
        cout << "You are wrong";
    }
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