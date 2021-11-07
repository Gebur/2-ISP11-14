#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Месяцы" << endl << endl;
    cout << "1-январь, 2-февраль, 3-март и так далее. Введите цифру месяца, который вам нужен, и инфа о нём появится" << endl;
    cout << "Введите цифру месяца: ";
    short number;
    short date;
    cin >> number;
    switch (number) {
    case 1:
        cout << "Январь. Месяц праздников и зимы. Назван в честь двуликого римского бога времени, дверей и ворот Януса" << endl;
        cout << "Теперь введите число месяца: ";
        cin >> date;
        switch (date)
        {
        case 1:
            cout << "1 Января. Это пятница." << endl;
            break;
        case 2:
            cout << "2 Января. Это суббота." << endl;
            break;
        case 3:
            cout << "3 Января. Это воскресенье." << endl;
            break;
        case 4:
            cout << "4 Января. Это понедельник." << endl;
            break;
        case 5:
            cout << "5 Января. Это вторник." << endl;
            break;
        case 6:
            cout << "6 Января. Это среда." << endl;
            break;
        case 7:
            cout << "7 Января. Это четверг." << endl;
            break;
        case 8:
            cout << "8 Января. Это пятница." << endl;
            break;
        case 9:
            cout << "9 Января. Это суббота." << endl;
            break;
        case 10:
            cout << "10 Января. Это воскресенье." << endl;
            break;
        case 11:
            cout << "11 Января. Это понедельник." << endl;
            break;
        case 12:
            cout << "12 Января. Это вторник." << endl;
            break;
        case 13:
            cout << "13 Января. Это среда." << endl;
            break;
        case 14:
            cout << "14 Января. Это четверг." << endl;
            break;
        case 15:
            cout << "15 Января. Это пятница." << endl;
            break;
        case 16:
            cout << "16 Января. Это суббота." << endl;
            break;
        case 17:
            cout << "17 Января. Это воскресенье." << endl;
            break;
        case 18:
            cout << "18 Января. Это понедельник." << endl;
            break;
        case 19:
            cout << "19 Января. Это вторник." << endl;
            break;
        case 20:
            cout << "20 Января. Это среда." << endl;
            break;
        case 21:
            cout << "21 Января. Это четверг." << endl;
            break;
        case 22:
            cout << "22 Января. Это пятница." << endl;
            break;
        case 23:
            cout << "23 Января. Это суббота." << endl;
            break;
        case 24:
            cout << "24 Января. Это воскресенье." << endl;
            break;
        case 25:
            cout << "25 Января. Это понедельник." << endl;
            break;
        case 26:
            cout << "26 Января. Это вторник." << endl;
            break;
        case 27:
            cout << "27 Января. Это среда." << endl;
            break;
        case 28:
            cout << "28 Января. Это четверг." << endl;
            break;
        case 29:
            cout << "29 Января. Это пятница." << endl;
            break;
        case 30:
            cout << "30 Января. Это суббота." << endl;
            break;
        case 31:
            cout << "31 Января. Это воскресенье." << endl;
            break;
        default:
            cout << "такого числа нет." << endl;
            break;
        }
        break;
    case 2:
        cout << "Февраль. Последний месяц зимы. Назван в честь этрусского бога подземного царства Фебрууса, и связан с обрядами очищения" << endl;
        cout << "Теперь введите число месяца: ";
        cin >> date;
        switch (date)
        {
        case 1:
            cout << "1 Февраля. Это понедельник." << endl;
            break;
        case 2:
            cout << "2 Февраля. Это вторник." << endl;
            break;
        case 3:
            cout << "3 Февраля. Это среда." << endl;
            break;
        case 4:
            cout << "4 Февраля. Это четверг." << endl;
            break;
        case 5:
            cout << "5 Февраля. Это пятница." << endl;
            break;
        case 6:
            cout << "6 Февраля. Это суббота." << endl;
            break;
        case 7:
            cout << "7 Февраля. Это воскресенье." << endl;
            break;
        case 8:
            cout << "8 Февраля. Это понедельник." << endl;
            break;
        case 9:
            cout << "9 Февраля. Это вторник." << endl;
            break;
        case 10:
            cout << "10 Февраля. Это среда." << endl;
            break;
        case 11:
            cout << "11 Февраля. Это четверг." << endl;
            break;
        case 12:
            cout << "12 Февраля. Это пятница." << endl;
            break;
        case 13:
            cout << "13 Февраля. Это суббота." << endl;
            break;
        case 14:
            cout << "14 Февраля. Это воскресенье." << endl;
            break;
        case 15:
            cout << "15 Февраля. Это понедельник." << endl;
            break;
        case 16:
            cout << "16 Февраля. Это вторник." << endl;
            break;
        case 17:
            cout << "17 Февраля. Это среда." << endl;
            break;
        case 18:
            cout << "18 Февраля. Это четверг." << endl;
            break;
        case 19:
            cout << "19 Февраля. Это пятница." << endl;
            break;
        case 20:
            cout << "20 Февраля. Это суббота." << endl;
            break;
        case 21:
            cout << "21 Февраля. Это воскресенье." << endl;
            break;
        case 22:
            cout << "22 Февраля. Это понедельник." << endl;
            break;
        case 23:
            cout << "23 Февраля. Это вторник." << endl;
            break;
        case 24:
            cout << "24 Февраля. Это среда." << endl;
            break;
        case 25:
            cout << "25 Февраля. Это четверг." << endl;
            break;
        case 26:
            cout << "26 Февраля. Это пятница." << endl;
            break;
        case 27:
            cout << "27 Февраля. Это суббота." << endl;
            break;
        case 28:
            cout << "28 Февраля. Это воскресенье." << endl;
            break;
        default:
            cout << "такого числа нет." << endl;
            break;
        }
        break;
    case 3:
        cout << "Март. Первый месяц весны. Своё название получил в честь римского бога войны и охраны Марса. Этот месяц был идеален для начала военных походов." << endl;
        cout << "Теперь введите число месяца: ";
        cin >> date;
        switch (date) {
        case 1:
            cout << "1 Марта. Это понедельник." << endl;
            break;
        case 2:
            cout << "2 Марта. Это вторник." << endl;
            break;
        case 3:
            cout << "3 Марта. Это среда." << endl;
            break;
        case 4:
            cout << "4 Марта. Это четверг." << endl;
            break;
        case 5:
            cout << "5 Марта. Это пятница." << endl;
            break;
        case 6:
            cout << "6 Марта. Это суббота." << endl;
            break;
        case 7:
            cout << "7 Марта. Это воскресенье." << endl;
            break;
        case 8:
            cout << "8 Марта. Это понедельник." << endl;
            break;
        case 9:
            cout << "9 Марта. Это вторник." << endl;
            break;
        case 10:
            cout << "10 Марта. Это среда." << endl;
            break;
        case 11:
            cout << "11 Марта. Это четверг." << endl;
            break;
        case 12:
            cout << "12 Марта. Это пятница." << endl;
            break;
        case 13:
            cout << "13 Марта. Это суббота." << endl;
            break;
        case 14:
            cout << "14 Марта. Это воскресенье." << endl;
            break;
        case 15:
            cout << "15 Марта. Это понедельник." << endl;
            break;
        case 16:
            cout << "16 Марта. Это вторник." << endl;
            break;
        case 17:
            cout << "17 Марта. Это среда." << endl;
            break;
        case 18:
            cout << "18 Марта. Это четверг." << endl;
            break;
        case 19:
            cout << "19 Марта. Это пятница." << endl;
            break;
        case 20:
            cout << "20 Марта. Это суббота." << endl;
            break;
        case 21:
            cout << "21 Марта. Это воскресенье." << endl;
            break;
        case 22:
            cout << "22 Марта. Это понедельник." << endl;
            break;
        case 23:
            cout << "23 Марта. Это вторник." << endl;
            break;
        case 24:
            cout << "24 Марта. Это среда." << endl;
            break;
        case 25:
            cout << "25 Марта. Это четверг." << endl;
            break;
        case 26:
            cout << "26 Марта. Это пятница." << endl;
            break;
        case 27:
            cout << "27 Марта. Это суббота." << endl;
            break;
        case 28:
            cout << "28 Марта. Это воскресенье." << endl;
            break;
        case 29:
            cout << "29  Марта. Это понедельник." << endl;
            break;
        case 30:
            cout << "30 Марта. Это вторник." << endl;
            break;
        case 31:
            cout << "31 Марта. Это среда." << endl;
            break;
        default:
            cout << "такого числа нет." << endl;
            break;
        }
        break;
    case 4:
        cout << "Апрель. Второй месяц весны. Название происходит из древнеримского слова открывать." << endl;
        cout << "Теперь введите число месяца: ";
        cin >> date;
        switch (date)
        {
        case 1:
            cout << "1 Апреля. Это четверг." << endl;
            break;
        case 2:
            cout << "2 Апреля. Это пятница." << endl;
            break;
        case 3:
            cout << "3 Апреля. Это воскресенье." << endl;
            break;
        case 4:
            cout << "4 Апреля. Это понедельник." << endl;
            break;
        case 5:
            cout << "5 Апреля. Это вторник." << endl;
            break;
        case 6:
            cout << "6 Апреля. Это среда." << endl;
            break;
        case 7:
            cout << "7 Апреля. Это четверг." << endl;
            break;
        case 8:
            cout << "8 Апреля. Это пятница." << endl;
            break;
        case 9:
            cout << "9 Апреля. Это суббота." << endl;
            break;
        case 10:
            cout << "10 Апреля. Это воскресенье." << endl;
            break;
        case 11:
            cout << "11 Апреля. Это понедельник." << endl;
            break;
        case 12:
            cout << "12 Апреля. Это вторник." << endl;
            break;
        case 13:
            cout << "13 Апреля. Это среда." << endl;
            break;
        case 14:
            cout << "14 Апреля. Это четверг." << endl;
            break;
        case 15:
            cout << "15 Апреля. Это пятница." << endl;
            break;
        case 16:
            cout << "16 Апреля. Это суббота." << endl;
            break;
        case 17:
            cout << "17 Апреля. Это воскресенье." << endl;
            break;
        case 18:
            cout << "18 Апреля. Это понедельник." << endl;
            break;
        case 19:
            cout << "19 Апреля. Это вторник." << endl;
            break;
        case 20:
            cout << "20 Апреля. Это среда." << endl;
            break;
        case 21:
            cout << "21 Апреля. Это четверг." << endl;
            break;
        case 22:
            cout << "22 Апреля. Это пятница." << endl;
            break;
        case 23:
            cout << "23 Апреля. Это суббота." << endl;
            break;
        case 24:
            cout << "24 Апреля. Это воскресенье." << endl;
            break;
        case 25:
            cout << "25 Апреля. Это понедельник." << endl;
            break;
        case 26:
            cout << "26 Апреля. Это вторник." << endl;
            break;
        case 27:
            cout << "27 Апреля. Это среда." << endl;
            break;
        case 28:
            cout << "28 Апреля. Это четверг." << endl;
            break;
        case 29:
            cout << "29 Апреля. Это пятница." << endl;
            break;
        case 30:
            cout << "30 Апреля. Это суббота." << endl;
            break;
        default:
            cout << "такого числа нет." << endl;
            break;
        }
        break;
    case 5:
        cout << "Май. Последний месяц весны. Месяц май был назван в честь греческой богини Майи, которая отождествлялась с римской богиней плодородия." << endl;
        cout << "Теперь введите число месяца: ";
        cin >> date;
        switch (date)
        {
        case 1:
            cout << "1 Мая. В этот момент я понял, что у меня неправильный Апрель, так что дальше без календаря." << endl;
            break;
        case 2:
            cout << "2 Мая." << endl;
            break;
        case 3:
            cout << "3 Мая." << endl;
            break;
        case 4:
            cout << "4 Мая." << endl;
            break;
        case 5:
            cout << "5 Мая." << endl;
            break;
        case 6:
            cout << "6 Мая." << endl;
            break;
        case 7:
            cout << "7 Мая." << endl;
            break;
        case 8:
            cout << "8 Мая." << endl;
            break;
        case 9:
            cout << "9 Мая." << endl;
            break;
        case 10:
            cout << "10 Мая." << endl;
            break;
        case 11:
            cout << "11 Мая." << endl;
            break;
        case 12:
            cout << "12 Мая." << endl;
            break;
        case 13:
            cout << "13 Мая." << endl;
            break;
        case 14:
            cout << "14 Мая." << endl;
            break;
        case 15:
            cout << "15 Мая." << endl;
            break;
        case 16:
            cout << "16 Мая." << endl;
            break;
        case 17:
            cout << "17 Мая." << endl;
            break;
        case 18:
            cout << "18 Мая." << endl;
            break;
        case 19:
            cout << "19 Мая." << endl;
            break;
        case 20:
            cout << "20 Мая." << endl;
            break;
        case 21:
            cout << "21 Мая." << endl;
            break;
        case 22:
            cout << "22 Мая" << endl;
            break;
        case 23:
            cout << "23 Мая." << endl;
            break;
        case 24:
            cout << "24 Мая." << endl;
            break;
        case 25:
            cout << "25 Мая." << endl;
            break;
        case 26:
            cout << "26 Мая." << endl;
            break;
        case 27:
            cout << "27 Мая." << endl;
            break;
        case 28:
            cout << "28 Мая." << endl;
            break;
        case 29:
            cout << "29 Мая." << endl;
            break;
        case 30:
            cout << "30 Мая." << endl;
            break;
        case 31:
            cout << "31 May." << endl;
            break;
        default:
            cout << "такого числа нет." << endl;
            break;
        }
        break;
    case 6:
        cout << "Июнь. Очередная практика на Басовской. kesäkuu в финском." << endl;
        cout << "Теперь введите число месяца: ";
        cin >> date;
        switch (date)
        {
        case 1:
            cout << "1 Июнь." << endl;
            break;
        case 2:
            cout << "2 Июнь." << endl;
            break;
        case 3:
            cout << "3 Июнь." << endl;
            break;
        case 4:
            cout << "4 Июнь." << endl;
            break;
        case 5:
            cout << "5 Июнь." << endl;
            break;
        case 6:
            cout << "6 Июнь." << endl;
            break;
        case 7:
            cout << "7 Июнь." << endl;
            break;
        case 8:
            cout << "8 Июнь." << endl;
            break;
        case 9:
            cout << "9 Июнь." << endl;
            break;
        case 10:
            cout << "10 Июнь." << endl;
            break;
        case 11:
            cout << "11 Июнь." << endl;
            break;
        case 12:
            cout << "12 Июнь." << endl;
            break;
        case 13:
            cout << "13 Июнь." << endl;
            break;
        case 14:
            cout << "14 Июнь." << endl;
            break;
        case 15:
            cout << "15 Июнь." << endl;
            break;
        case 16:
            cout << "16 Июнь." << endl;
            break;
        case 17:
            cout << "17 Июнь." << endl;
            break;
        case 18:
            cout << "18 Июнь." << endl;
            break;
        case 19:
            cout << "19 Июнь." << endl;
            break;
        case 20:
            cout << "20 Июнь." << endl;
            break;
        case 21:
            cout << "21 Июнь." << endl;
            break;
        case 22:
            cout << "22 Июнь" << endl;
            break;
        case 23:
            cout << "23 Июнь." << endl;
            break;
        case 24:
            cout << "24 Июнь." << endl;
            break;
        case 25:
            cout << "25 Июнь." << endl;
            break;
        case 26:
            cout << "26 Июнь." << endl;
            break;
        case 27:
            cout << "27 Июнь." << endl;
            break;
        case 28:
            cout << "28 Июнь." << endl;
            break;
        case 29:
            cout << "29 Июнь." << endl;
            break;
        case 30:
            cout << "30 Июнь." << endl;
            break;
        default:
            cout << "Время-ложь. Концепции бесмысленны, макароны прямоугольны." << endl;
            break;
        }
        break;
    case 7:
        cout << "Июль. Второй месяц лета. Назван собственно в честь Гая Юлия Цезаря." << endl;
        cout << "Теперь введите число месяца: ";
        cin >> date;
        switch (date)
        {
        case 1:
            cout << "1 Июль." << endl;
            break;
        case 2:
            cout << "2 Июль." << endl;
            break;
        case 3:
            cout << "3 Июль." << endl;
            break;
        case 4:
            cout << "4 Июль." << endl;
            break;
        case 5:
            cout << "5 Июль." << endl;
            break;
        case 6:
            cout << "6 Июль." << endl;
            break;
        case 7:
            cout << "7 Июль." << endl;
            break;
        case 8:
            cout << "8 Июль." << endl;
            break;
        case 9:
            cout << "9 Июль." << endl;
            break;
        case 10:
            cout << "10 Июль." << endl;
            break;
        case 11:
            cout << "11 Июль." << endl;
            break;
        case 12:
            cout << "12 Июль." << endl;
            break;
        case 13:
            cout << "13 Июль." << endl;
            break;
        case 14:
            cout << "14 Июль." << endl;
            break;
        case 15:
            cout << "15 Июль." << endl;
            break;
        case 16:
            cout << "16 Июль." << endl;
            break;
        case 17:
            cout << "17 Июль." << endl;
            break;
        case 18:
            cout << "18 Июль." << endl;
            break;
        case 19:
            cout << "19 Июль." << endl;
            break;
        case 20:
            cout << "20 Июль." << endl;
            break;
        case 21:
            cout << "21 Июль." << endl;
            break;
        case 22:
            cout << "22 Июль" << endl;
            break;
        case 23:
            cout << "23 Июль." << endl;
            break;
        case 24:
            cout << "24 Июль." << endl;
            break;
        case 25:
            cout << "25 Июль." << endl;
            break;
        case 26:
            cout << "26 Июль." << endl;
            break;
        case 27:
            cout << "27 Июль." << endl;
            break;
        case 28:
            cout << "28 Июль." << endl;
            break;
        case 29:
            cout << "29 Июль." << endl;
            break;
        case 30:
            cout << "30 Июль." << endl;
            break;
        case 31:
            cout << "31 Июль." << endl;
            break;
        default:
            cout << "такого числа нет." << endl;
            break;
        }
        break;
        break;
    case 8:
        cout << "Август. Второй месяц весны. Название происходит из древнеримского слова открывать." << endl;
        cout << "Теперь введите число месяца: ";
        cin >> date;
        switch (date)
        {
        case 1:
            cout << "1 Август." << endl;
            break;
        case 2:
            cout << "2 Август." << endl;
            break;
        case 3:
            cout << "3 Август." << endl;
            break;
        case 4:
            cout << "4 Август." << endl;
            break;
        case 5:
            cout << "5 Август." << endl;
            break;
        case 6:
            cout << "6 Август." << endl;
            break;
        case 7:
            cout << "7 Август." << endl;
            break;
        case 8:
            cout << "8 Август." << endl;
            break;
        case 9:
            cout << "9 Август." << endl;
            break;
        case 10:
            cout << "10 Август." << endl;
            break;
        case 11:
            cout << "11 Август." << endl;
            break;
        case 12:
            cout << "12 Август." << endl;
            break;
        case 13:
            cout << "13 Август." << endl;
            break;
        case 14:
            cout << "14 Август." << endl;
            break;
        case 15:
            cout << "15 Август." << endl;
            break;
        case 16:
            cout << "16 Август." << endl;
            break;
        case 17:
            cout << "17 Август." << endl;
            break;
        case 18:
            cout << "18 Август." << endl;
            break;
        case 19:
            cout << "19 Август." << endl;
            break;
        case 20:
            cout << "20 Август." << endl;
            break;
        case 21:
            cout << "21 Август." << endl;
            break;
        case 22:
            cout << "22 Август" << endl;
            break;
        case 23:
            cout << "23 Август." << endl;
            break;
        case 24:
            cout << "24 Август." << endl;
            break;
        case 25:
            cout << "25 Август." << endl;
            break;
        case 26:
            cout << "26 Август." << endl;
            break;
        case 27:
            cout << "27 Август." << endl;
            break;
        case 28:
            cout << "28 Август." << endl;
            break;
        case 29:
            cout << "29 Август." << endl;
            break;
        case 30:
            cout << "30 Август." << endl;
            break;
        case 31:
            cout << "31 Август." << endl;
            break;
        default:
            cout << "такого числа нет." << endl;
            break;
        }
        break;
    case 9:
        cout << "Сентябрь. ТОП-ТОП-ТОП в школу, давай. Или на работу. Сегодня даже без интересных фактов.(Тамыз)" << endl;
        cout << "Теперь введите число месяца: ";
        cin >> date;
        switch (date)
        {
        case 1:
            cout << "1 Сентября. " << endl;
            break;
        case 2:
            cout << "2 Сентября." << endl;
            break;
        case 3:
            cout << "3 Сентября." << endl;
            break;
        case 4:
            cout << "4 Сентября." << endl;
            break;
        case 5:
            cout << "5 Сентября." << endl;
            break;
        case 6:
            cout << "6 Сентября." << endl;
            break;
        case 7:
            cout << "7 Сентября." << endl;
            break;
        case 8:
            cout << "8 Сентября." << endl;
            break;
        case 9:
            cout << "9 Сентября." << endl;
            break;
        case 10:
            cout << "10 Сентября." << endl;
            break;
        case 11:
            cout << "11 Сентября." << endl;
            break;
        case 12:
            cout << "12 Сентября." << endl;
            break;
        case 13:
            cout << "13 Сентября." << endl;
            break;
        case 14:
            cout << "14 Сентября." << endl;
            break;
        case 15:
            cout << "15 Сентября." << endl;
            break;
        case 16:
            cout << "16 Сентября." << endl;
            break;
        case 17:
            cout << "17 Сентября." << endl;
            break;
        case 18:
            cout << "18 Сентября." << endl;
            break;
        case 19:
            cout << "19 Сентября." << endl;
            break;
        case 20:
            cout << "20 Сентября." << endl;
            break;
        case 21:
            cout << "21 Сентября." << endl;
            break;
        case 22:
            cout << "22 Сентября" << endl;
            break;
        case 23:
            cout << "23 Сентября." << endl;
            break;
        case 24:
            cout << "24 Сентября." << endl;
            break;
        case 25:
            cout << "25 Сентября." << endl;
            break;
        case 26:
            cout << "26 Сентября." << endl;
            break;
        case 27:
            cout << "27 Сентября." << endl;
            break;
        case 28:
            cout << "28 Сентября." << endl;
            break;
        case 29:
            cout << "29 Сентября." << endl;
            break;
        case 30:
            cout << "30 Сентября." << endl;
            break;
        default:
            cout << "такого числа нет." << endl;
            break;
        }
        break;
    case 10:
        cout << "Октябрь. Вообще даже не такой уж и плохой месяц. Назван в честь латинской 8-ки.(қазан)" << endl;
        cout << "Теперь введите число месяца: ";
        cin >> date;
        switch (date)
        {
        case 1:
            cout << "1 Октября." << endl;
            break;
        case 2:
            cout << "2 Октября." << endl;
            break;
        case 3:
            cout << "3 Октября." << endl;
            break;
        case 4:
            cout << "4 Октября." << endl;
            break;
        case 5:
            cout << "5 Октября." << endl;
            break;
        case 6:
            cout << "6 Октября." << endl;
            break;
        case 7:
            cout << "7 Октября." << endl;
            break;
        case 8:
            cout << "8 Октября." << endl;
            break;
        case 9:
            cout << "9 Октября." << endl;
            break;
        case 10:
            cout << "10 Октября." << endl;
            break;
        case 11:
            cout << "11 Октября." << endl;
            break;
        case 12:
            cout << "12 Октября." << endl;
            break;
        case 13:
            cout << "13 Октября." << endl;
            break;
        case 14:
            cout << "14 Октября." << endl;
            break;
        case 15:
            cout << "15 Октября." << endl;
            break;
        case 16:
            cout << "16 Октября." << endl;
            break;
        case 17:
            cout << "17 Октября." << endl;
            break;
        case 18:
            cout << "18 Октября." << endl;
            break;
        case 19:
            cout << "19 Октября." << endl;
            break;
        case 20:
            cout << "20 Октября." << endl;
            break;
        case 21:
            cout << "21 Октября." << endl;
            break;
        case 22:
            cout << "22 Октября" << endl;
            break;
        case 23:
            cout << "23 Октября." << endl;
            break;
        case 24:
            cout << "24 Октября." << endl;
            break;
        case 25:
            cout << "25 Октября." << endl;
            break;
        case 26:
            cout << "26 Октября." << endl;
            break;
        case 27:
            cout << "27 Октября." << endl;
            break;
        case 28:
            cout << "28 Октября." << endl;
            break;
        case 29:
            cout << "29 Октября." << endl;
            break;
        case 30:
            cout << "30 Октября." << endl;
            break;
        case 31:
            cout << "31 Октября." << endl;
            break;
        default:
            cout << "такого числа нет." << endl;
            break;
        }
        break;
    case 11:
        cout << "Ноябрь. Дождь или холод. У некоторых славян листопадом называется." << endl;
        cout << "Теперь введите число месяца: ";
        cin >> date;
        switch (date)
        {
        case 1:
            cout << "1 Ноября." << endl;
            break;
        case 2:
            cout << "2 Ноября." << endl;
            break;
        case 3:
            cout << "3 Ноября." << endl;
            break;
        case 4:
            cout << "4 Ноября." << endl;
            break;
        case 5:
            cout << "5 Ноября." << endl;
            break;
        case 6:
            cout << "6 Ноября." << endl;
            break;
        case 7:
            cout << "7 Ноября." << endl;
            break;
        case 8:
            cout << "8 Ноября." << endl;
            break;
        case 9:
            cout << "9 Ноября." << endl;
            break;
        case 10:
            cout << "10 Ноября." << endl;
            break;
        case 11:
            cout << "11 Ноября." << endl;
            break;
        case 12:
            cout << "12 Ноября." << endl;
            break;
        case 13:
            cout << "13 Ноября." << endl;
            break;
        case 14:
            cout << "14 Ноября." << endl;
            break;
        case 15:
            cout << "15 Ноября." << endl;
            break;
        case 16:
            cout << "16 Ноября." << endl;
            break;
        case 17:
            cout << "17 Ноября." << endl;
            break;
        case 18:
            cout << "18 Ноября." << endl;
            break;
        case 19:
            cout << "19 Ноября." << endl;
            break;
        case 20:
            cout << "20 Ноября." << endl;
            break;
        case 21:
            cout << "21 Ноября." << endl;
            break;
        case 22:
            cout << "22 Ноября" << endl;
            break;
        case 23:
            cout << "23 Ноября." << endl;
            break;
        case 24:
            cout << "24 Ноября." << endl;
            break;
        case 25:
            cout << "25 Ноября." << endl;
            break;
        case 26:
            cout << "26 Ноября." << endl;
            break;
        case 27:
            cout << "27 Ноября." << endl;
            break;
        case 28:
            cout << "28 Ноября." << endl;
            break;
        case 29:
            cout << "29 Ноября." << endl;
            break;
        case 30:
            cout << "30 Ноября." << endl;
            break;
        default:
            cout << "такого числа нет." << endl;
            break;
        }
        break;
    case 12:
        cout << "Декабрь. Год почти заканчивается. У Чехов волчьий месяц почему-то. С новым годом, кстати." << endl;
        cout << "Теперь введите число месяца: ";
        cin >> date;
        switch (date)
        {
        case 1:
            cout << "1 Декабря." << endl;
            break;
        case 2:
            cout << "2 Декабря." << endl;
            break;
        case 3:
            cout << "3 Декабря." << endl;
            break;
        case 4:
            cout << "4 Декабря." << endl;
            break;
        case 5:
            cout << "5 Декабря." << endl;
            break;
        case 6:
            cout << "6 Декабря." << endl;
            break;
        case 7:
            cout << "7 Декабря." << endl;
            break;
        case 8:
            cout << "8 Декабря." << endl;
            break;
        case 9:
            cout << "9 Декабря." << endl;
            break;
        case 10:
            cout << "10 Декабря." << endl;
            break;
        case 11:
            cout << "11 Декабря." << endl;
            break;
        case 12:
            cout << "12 Декабря." << endl;
            break;
        case 13:
            cout << "13 Декабря." << endl;
            break;
        case 14:
            cout << "14 Декабря." << endl;
            break;
        case 15:
            cout << "15 Декабря." << endl;
            break;
        case 16:
            cout << "16 Декабря." << endl;
            break;
        case 17:
            cout << "17 Декабря." << endl;
            break;
        case 18:
            cout << "18 Декабря." << endl;
            break;
        case 19:
            cout << "19 Декабря." << endl;
            break;
        case 20:
            cout << "20 Декабря." << endl;
            break;
        case 21:
            cout << "21 Декабря." << endl;
            break;
        case 22:
            cout << "22 Декабря" << endl;
            break;
        case 23:
            cout << "23 Декабря." << endl;
            break;
        case 24:
            cout << "24 Декабря." << endl;
            break;
        case 25:
            cout << "25 Декабря." << endl;
            break;
        case 26:
            cout << "26 Декабря." << endl;
            break;
        case 27:
            cout << "27 Декабря." << endl;
            break;
        case 28:
            cout << "28 Декабря." << endl;
            break;
        case 29:
            cout << "29 Декабря." << endl;
            break;
        case 30:
            cout << "30 Декабря." << endl;
            break;
        case 31:
            cout << "31 Декабря." << endl;
            break;
        default:
            cout << "такого числа нет." << endl;
            break;
        }
        break;
    default:
        cout << "Неправильно";
        break;
    }
    return 0;
}
