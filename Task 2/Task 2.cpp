#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");
    int b, c;
    cout << "Введите переменные b и c: ";
    cin >> b >> c;
    if (b == 0)
    {
        if (c == 0)
        {
            cout << "x любое число";
        }
        else
        {
            cout << "Ошибка";
        }
    }
    else
    {
        cout << "x = " << -c / b;
    }
}
