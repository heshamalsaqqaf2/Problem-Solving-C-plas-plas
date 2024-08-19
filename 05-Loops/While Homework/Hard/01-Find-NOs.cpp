/**
 * @version   0.1
 * @date      2024-08-19
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Homework Hard [1] : Problem #1: Find NOs.
 * @details   Description.
                ● Read integer N, then read N strings.
                    ○ Print only the strings (of 2 letters).
                    ○ These 2 letters must be letter ‘N’ and letter ‘O’
                        ■ Regardless of lower or upper case
                        ■ Regardless of the 2 letters order
                        ■ E.g. print “No”, “ON”, “no”    but ignore e.g. “YEs”, “Noooo”
                        ■ That is: a word of 2 letters only N and O
                ● Input
                    ○ //! 9 Yss NO noOO oN Hesham no nN  oOOooo oO
                ● Output
                    ○ //? NO oN no
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number{};
    cout << "Enter The Number = ";
    cin >> number;

    cout << "Enter " << number << " Text Only: ";

    int counterPositionText{ 0 };
    while (number > counterPositionText) {
        string txt{};
        cin >> txt;
        // There Are 8 Different Ways To Make 2 Letters No In Lower / Upper Cases.
        if (txt == "NO" || txt == "ON" || txt == "no" || txt == "on" ||
            txt == "oN" || txt == "No" || txt == "On" || txt == "nO")
            cout << txt << " ";
        else {
            cout << "Sorry, The Word Not Found In The Text You Entered.";
            break;
        }
        ++counterPositionText;
    }

    cout << "\n==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}