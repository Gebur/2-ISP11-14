#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "'Переводчик'" << endl << endl;
    cout << "Итак. Если хочешь увидеть перевод с русского на английский: нажми 1." << endl << endl;
    cout << "Если хочешь увидеть перевод с английский на русский: нажми 2." << endl << endl;
    cout << "Если хочешь выйти: нажми 3." << endl;
    cout << "Введите число: ";
    short num1;
    short word;
    cin >> num1;
    switch (num1)
    {
    case 1:
        cout << "Вот список доступных слов: " << endl << "Конференция" << endl << "Келимане" << endl << "Предложение" << endl << "Король" << endl << "часть" << endl;
        cout << "жестокий" << endl << "перерыв" << endl << "возвращение" << endl << "случай" << endl << "число" << endl;
        cout << "конец" << endl << "нож" << endl << "пушка" << endl << "чай" << endl << "лампа" << endl;
        cout << "Введите номер слово из предложенных: ";
        cin >> word;
        switch (word)
        {
        case 1:
            cout << "Conferenc";
            break;
        case 2:
            cout << "Quelimane";
            break;
        case 3:
            cout << "Proposition";
            break;
        case 4:
            cout << "King";
            break;
        case 5:
            cout << "part";
            break;
        case 6:
            cout << "cruel";
            break;
        case 7:
            cout << "break";
            break;
        case 8:
            cout << "return";
            break;
        case 9:
            cout << "case";
            break;
        case 10:
            cout << "number";
            break;
        case 11:
            cout << "end";
            break;
        case 12:
            cout << "Knife";
            break;
        case 13:
            cout << "gun";
            break;
        case 14:
            cout << "tea";
            break;
        case 15:
            cout << "lamp";
            break;
        default:
            cout << "Не та цифра";
            break;
        }
        break;
    case 2:
        cout << "Вот список доступных слов: " << endl << "Conference" << endl << "Quelimane" << endl << "Proposition" << endl << "King" << endl << "part" << endl;
        cout << "cruel" << endl << "break" << endl << "return" << endl << "case" << endl << "number" << endl;
        cout << "end" << endl << "knife" << endl << "gun" << endl << "tea" << endl << "lamp" << endl;
        cout << "Введите номер слово из предложенных: ";
        cin >> word;
        switch (word)
        {
        case 1:
            cout << "Конференция";
            break;
        case 2:
            cout << "Келимане";
            break;
        case 3:
            cout << "Предложение";
            break;
        case 4:
            cout << "Король";
            break;
        case 5:
            cout << "часть";
            break;
        case 6:
            cout << "жестокий";
            break;
        case 7:
            cout << "перерыв";
            break;
        case 8:
            cout << "возвращение";
            break;
        case 9:
            cout << "случай";
            break;
        case 10:
            cout << "число";
            break;
        case 11:
            cout << "Конец";
            break;
        case 12:
            cout << "Нож";
            break;
        case 13:
            cout << "Пушка";
            break;
        case 14:
            cout << "Чай";
            break;
        case 15:
            cout << "Лампа для освещения";
            break;
        default:
            cout << "Не та цифра";
            break;
        }
        break;
    case 3:
        cout << "До свидания";
        break;
    default:
        cout << "Не то число.";
        break;
    }
    return 0;
}
