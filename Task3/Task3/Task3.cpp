#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    char str[200];
    int words = 0;
    bool inWord = false;

    cout << "Введіть рядок: ";
    cin.getline(str, 200);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && str[i] != '\t')
        {
            if (inWord == false)
            {
                words++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << "Кількість слів: " << words << endl;

    return 0;
}
