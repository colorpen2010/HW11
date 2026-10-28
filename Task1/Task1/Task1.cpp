#include <iostream>
#include <windows.h>
using namespace std;

int myStrcmp(const char str1[], const char str2[])
{
    int i = 0;

    while (str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char str1[100];
    char str2[100];

    cout << "Введіть перший рядок: ";
    cin.getline(str1, 100);

    cout << "Введіть другий рядок: ";
    cin.getline(str2, 100);

    if (myStrcmp(str1, str2) == 0)
    {
        cout << "Рядки однакові." << endl;
    }
    else
    {
        cout << "Рядки різні." << endl;
    }

    return 0;
}
