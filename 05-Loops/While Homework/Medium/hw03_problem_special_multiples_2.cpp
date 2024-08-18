/*
    # Created On 6/12/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Medium [3] : Problem #3: Special Multiples 2.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number;
    cout << "Enter Number =";
    cin >> number;

    int counter = 0;
    int current_number = 3;

    while (counter <= number) {
        if (current_number % 4 != 0) {
            cout << current_number << " ";
            counter++;
        }
        current_number += 3;
    }
    cout << "\n==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}