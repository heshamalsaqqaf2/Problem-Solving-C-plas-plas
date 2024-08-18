/*
    Homework [2]: Guess Program Output.
    - Code By: Hesham Z. Alsaqqaf

    - First Result =
        c = a1 + b1,   a1 = b1,    b1 = c0
        c = 1 + 1,      1 = 1,      1 = 0
        c = 2,          a = 1,      b = 0
        c = 2
    - Second Result =
        c = a + b,     a = b,     b = c
        c = 1 + 2,    a1 = b2,   b2 = c3
        c = 3,         a = 2,     b = 3
        c = 3
    - Third Result =
        c = a + b,       a = b,      b = c
        c = 2 + 3,      a2 = b3,    b3 = c5
        c = 5,           a = 3,      b = 5
        c = 5
    - Forth Result =
        c = a + b,       a = b,      b = c
        c = 3 + 5,      a3 = b5,    b5 = c8
        c = 8,           a = 5,      b = 8
        c = 8
    - Final Result C = 8 #
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 1, c;

    cout << " C = " << (c = a + b, a = b, b = c, c = a + b, a = b, b = c, c = a + b, a = b, b = c, c = a + b, a = b, b = c)
        << endl; // C = 8

    cout << "\t\t\"Good bye guys\"\n\n";
    return 0;
}