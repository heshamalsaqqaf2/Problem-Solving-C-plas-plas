/*
    Homework [3]: Guess Program Output.
    - Code By: Hesham Z. Alsaqqaf
    - Result Expression =
        (2 + 3) * (5 - (-3)) / 5 / 8
        (2 + 3) * (15) / 5 / 8
        (5) * (15) / 5 / 8
        75 / 5 / 8
        15 / 8
        Result = 1.875 => 1
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 210;

    a /= 2;
    cout << "Result First a = " << a << "\n";                               // 210 / 2 = 105
    cout << "Result Second a = " << (a /= 3) << "\n";                       // 105 / 3 = 35
    cout << "Result Third a = " << (a /= 5) << "\n";                        // 35 / 5 = 7
    cout << "Result Forth a = " << (a /= 7) << "\n";                        // 7 / 7 = 1
    cout << "Result Expression = " << (2 + 3) * (5 - (-3)) / 5 / 8 << "\n"; // 1.875 =~ 1
    cout << "----------------------------\n";

    a = 10;
    cout << "Result = " << a++ + 10 << "\n"; // 20
    cout << a << "\n";                       // 11
    cout << "Result = " << ++a + 10 << "\n"; // 22
    cout << a << "\n";                       // 12
    cout << "Result = " << a-- + 10 << "\n"; // 22
    cout << a << "\n";                       // 11
    cout << "Result = " << --a + 10 << "\n"; // 20
    cout << a << "\n";                       // 10
    cout << "----------------------------\n";

    int b = 20;
    cout << "Result = " << a++ + ++b << "\n"; // 10 + 21 = 31
    cout << "Result = " << a << "\n";         // 11

    ++a += 10;                        // {1} + {11} += 10
    cout << "Result = " << a << "\n"; // 22

    cout << "----------------------------\n";
    cout << "\t\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}