/**
 * @version   0.1
 * @date      2024-08-19
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Homework Hard [3] : Problem #3: Printing X Shape.
 * @details   Description.
                ● Read in a odd Integer N, then print an X using * as follows:
                    ○ Hint: Given i-th line at j-th digit, find the 2 conditions to print a star
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number{};
    cout << "Enter ODD Number = ";
    cin >> number;

    if (number % 2 != 0) {
        for (int row = 0; row < number; ++row) {
            for (int column = 0; column < number; ++column) {
                if (row == column || number - row - 1 == column)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << "\n";
        }
    }
    else
        cout << "Sorry, Number Is Even.\n";

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}