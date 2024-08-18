/*
    Homework [4]: Guess the output.
    - Code By: Hesham Z. Alsaqqaf
    - Soluotions All Cout Line :

        // (10 + 20 == 30);
        // (30 == 30);
        // (True);

        // (10 + 20 + 30 >= 2 * 40);
        // (60 >= 80);
        // (False);

        // (10 > 5 || 40 < 30);
        // (True || False);
        // (True);

        // (10 > 5 && 40 < 30);
        // (True && False);
        // (False);

        // (10 <= 20 && 20 <= 30);
        // (True && True);
        // (True);

        // (10 > 5 && 40 < 30 || 30 - 20 == 10);
        // (10 > 5 && 40 < 30 || 10 == 10);
        // (True && False || True);
        // (True || True);
        // (True);

        // (10 <= 20 && 20 <= 30 && 30 <= 40);
        // (True && True && True);
        // (True);

        // (10 > 5 && 40 < 30 || 30 > 40 || 40 % 2 == 0);
        // (True && False || False || True);
        // (False || True);
        // (True);

        // (10 > 5 && 40 < 30 || 30 > 40 && 40 % 2 == 0);
        // (True && False || False && True);
        // (False || False);
        // (False);

        // (10 == 10 || 20 != 20 && 30 != 30 || 40 != 40);
        // (True || False && False || False);
        // (True || False || False);
        // (True || False);
        // (True);

        // ((10 == 10 || 20 != 20) && 30 != 30 || 40 != 40);
        // ((True || False) && False || False);
        // (True && False);
        // (False);

*/
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20, c = 30, d = 40;

    cout << "Result = " << (a + b == c) << "\n"; // True [1]
    // (10 + 20 == 30);
    // (30 == 30);
    // (True);

    cout << "Result = " << (a + b + c >= 2 * d) << "\n"; // False [0]
    // (10 + 20 + 30 >= 2 * 40);
    // (60 >= 80);
    // (False);

    cout << "Result = " << (a > 5 || d < 30) << "\n"; // True [1]
    // (10 > 5 || 40 < 30);
    // (True || False);
    // (True);

    cout << "Result = " << (a > 5 && d < 30) << "\n"; // False [0]
    // (10 > 5 && 40 < 30);
    // (True && False);
    // (False);

    cout << "Result = " << (a <= b && b <= c) << "\n"; // True [1]
    // (10 <= 20 && 20 <= 30);
    // (True && True);
    // (True);

    cout << "Result = " << (a > 5 && d < 30 || c - b == 10) << "\n"; // True [1]
    // (10 > 5 && 40 < 30 || 30 - 20 == 10);
    // (10 > 5 && 40 < 30 || 10 == 10);
    // (True && False || True);
    // (True || True);
    // (True);

    cout << "Result = " << (a <= b && b <= c && c <= d) << "\n"; // True [1]
    // (10 <= 20 && 20 <= 30 && 30 <= 40);
    // (True && True && True);
    // (True);

    cout << "Result = " << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n"; // True [1]
    // (10 > 5 && 40 < 30 || 30 > 40 || 40 % 2 == 0);
    // (True && False || False || True);
    // (False || True);
    // (True);

    cout << "Result = " << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n"; // False [0]
    // (10 > 5 && 40 < 30 || 30 > 40 && 40 % 2 == 0);
    // (True && False || False && True);
    // (False || False);
    // (False);

    cout << "Result = " << (a == 10 || b != 20 && c != 30 || d != 40) << "\n"; // True [1]
    // (10 == 10 || 20 != 20 && 30 != 30 || 40 != 40);
    // (True || False && False || False);
    // (True || False || False);
    // (True || False);
    // (True);

    cout << "Result = " << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n"; // False [0]
    // ((10 == 10 || 20 != 20) && 30 != 30 || 40 != 40);
    // ((True || False) && False || False);
    // (True && False);
    // (False);

    cout << "\t\t\"Good bye guys | By Hesham\"\n\n";
    return 0;
}
