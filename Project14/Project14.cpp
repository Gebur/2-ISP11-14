#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Массивы\n";
    int first[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    for (int number = 0; number < 10; number++)
    {
        cout << "int " << first[number] << " " << "number " << number << endl;
    }
    short second[10] = { 0, -1, -2, -3, -4, -5, -6, -7, -8, -9, };
    for (int number = 0; number < 10; number++)
    {
        cout << "short " << second[number] << " " << "number " << number << endl;
    }
    long third[10] = { 20090, 4643, 6798689, 1356568, 346, 678, 777, 354656, 666, 9786, };
    for (int number = 0; number < 10; number++)
    {
        cout << "long " << third[number] << " " << "number " << number << endl;
    }
    double fourth[10] = { 123.12, 3456.12, 555.555, 90678.456, 547.6789, 1.1, 45.7, 0.44, 10.01, 10 };
    for (int number = 0; number < 10; number++)
    {
        cout << "double " << fourth[number] << " " << "number " << number << endl;
    }
    float fifth[10] = { 1.1, 2.2, 0.1, 5.6, 7.9, 56.6, 55.5, 60.6, 6.6, 6, };
    for (int number = 0; number < 10; number++)
    {
        cout << "float " << fifth[number] << " " << "number " << number << endl;
    }
    bool six[10] = { true, false, false, false, false, true, false, false, true, false };
    for (int number = 0; number < 10; number++)
    {
        cout << "bool " << six[number] << " " << "number " << number << endl;
    }
    string seventh[10] = { "asdf", "qrewqr", "sfdg", "rtyui", "rdfbsghntyui", "rdgsfdgfhfghfgfgn", "?", "sdfsdgfdsg", "1232354", "gfdghfgh", };
    for (int number = 0; number < 10; number++)
    {
        cout << "string  " << seventh[number] << " " << "number " << number << endl;
    }
    char eight[10] = { '4', 't', '&', ' ', 's', 'q', '$', '@', '1', '!' };
    for (int number = 0; number < 10; number++)
    {
        cout << "char  " << eight[number] << " " << "number " << number << endl;
    }
}
