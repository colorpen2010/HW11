#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char str[200];
    bool palindrome = true;

    cout << "Введіть рядок: ";
    cin.getline(str, 200);

    int length = strlen(str);

    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
    {
        cout << "Рядок є паліндромом." << endl;
    }
    else
    {
        cout << "Рядок не є паліндромом." << endl;
    }

    return 0;
}
