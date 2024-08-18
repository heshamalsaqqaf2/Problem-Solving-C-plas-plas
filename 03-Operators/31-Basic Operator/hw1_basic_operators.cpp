/*
    Homework [1] : Guess Program Output.
    - Code By: Hesham Z. Alsaqqaf
    - First Expression =
        a = 12 + a / 3 / 2 - 2 * 2
        --------------------------
        a = 12 + 6 / 3 / 2 - 2 * 2
        a = 12 + 2 / 2 - 2 * 2
        a = 12 + 1 - 2 * 2
        a = 12 + 1 - 4
        a = 13 - 4
    - Final Result a = 9 #

    - Secoud Expression =
        ((12 + a) / 3 / 2 - 2) * 2
        --------------------------
        ((12 + 9) / 3 / 2 - 2) * 2
        ((21) / 3 / 2 - 2) * 2
        (7 / 2 - 2) * 2
        (3.5 - 2) * 2
        (3 - 2) * 2
        (1) * 2
        1 * 2
    - Final Result a = 2 #
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1;
    cout << "Value Postfix {a} = " << a++ << endl; // 0
    cout << "Value Prefix {a} = " << ++a << endl;  // 2

    a += 2 * b + 1; // a += 3
    b = ++a * 2;    // b = 12
    cout << "Value a = " << a << "   "
         << "Value b = " << b << endl; // [a = 6] [b = 12]

    b = a;                             // b = 6
    a = 12 + a / 3 / 2 - 2 * 2;        // a = 9
    cout << "Value a = " << a << endl; // 9

    a = b;                             // 6
    a = ((12 + a) / 3 / 2 - 2) * 2;    // a = 2
    cout << "Value a = " << a << endl; // 2

    cout << "\t\t\"Good bye guys\"\n\n";
    return 0;
}