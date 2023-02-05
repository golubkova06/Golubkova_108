#include <iostream>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, c, x;
    double f;

    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input c: ";
    cin >> c;
    cout << "Input x: ";
    cin >> x;

    if (x - 1 < 0 && b - x != 0)
    { 
        f = a * pow(x, 4) + b;
    }
    if (x - 1 > 0 && b + x == 0 && x != 0)
    {
        f = (x - a) / x;
    }
    else
    {
        f = (x / c);
    }

    cout << setprecision(2) << "f = " << f << endl;
    }
