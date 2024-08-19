/**
 * @version   0.1
 * @date      2024-08-19
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Homework Hard [3] : Problem #3: Multiplication Table.
 * @details   Description.
                ● Read an integer N and M, then print NxM lines
                  for their multiplication table.
                ● Input
                    ○ //? 3 4
                ● Output
                    ○ 1 x 1 = 1
                    ○ 1 x 2 = 2
                    ○ 1 x 3 = 3
                    ○ 1 x 4 = 4
                    ○ 2 x 1 = 2
                    ○ 2 x 2 = 4
                    ○ 2 x 3 = 6
                    ○ 2 x 4 = 8
                    ○ 3 x 1 = 3
                    ○ 3 x 2 = 6
                    ○ 3 x 3 = 9
                    ○ 3 x 4 = 12
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int n, m{};
    cout << "Enter Tow Numbers N * M = ";
    cin >> n >> m;

    int counterNumber_I{ 1 };
    while (counterNumber_I <= n)
    {
        int counterNumber_J = { 1 };
        while (counterNumber_J <= m)
        {
            cout << counterNumber_I << " * " << counterNumber_J << " = "
                << counterNumber_I * counterNumber_J << "\n";
            ++counterNumber_J;
        }
        ++counterNumber_I;
    }
    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}