#include <iostream>
#include "frac.h"

using namespace std;
int main()
{
    int n, d, n1, d1;
    cout << "Числитель: ";
    cin >> n;
    cout << endl << "Знаменатель: ";
    cin >> d;
    cout << endl;
    cout << "Числитель: ";
    cin >> n1;
    cout << endl << "Знаменатель: ";
    cin >> d1;
    cout << endl;
    frac f1 = frac(n, d);
    frac f2 = frac(n1, d1);
    f1.printfrac();
    cout << endl;
    f2.printfrac();
    cout << endl;
    (f1 + f2).printfrac();
    cout << endl;
    (f1 - f2).printfrac();
    cout << endl;
    (f1 * f2).printfrac();
    cout << endl;
    (f1 / f2).printfrac();
    cout << endl;
    (f1 + 2).printfrac();
    cout << endl;
    (f1 - 2).printfrac();
    cout << endl;
    (f1 * 2).printfrac();
    cout << endl;
    (f1 / 2).printfrac();
    cout << endl;
    (2 + f2).printfrac();
    cout << endl;
    (2 - f2).printfrac();
    cout << endl;
    (2 * f2).printfrac();
    cout << endl;
    (2 / f2).printfrac();
    return 0;
}