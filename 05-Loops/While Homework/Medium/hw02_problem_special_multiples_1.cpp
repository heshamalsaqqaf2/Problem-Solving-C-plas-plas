/*
    # Created On 6/12/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Medium [2] : Problem #2: Special Multiples 1.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number;
    cout << "Enter Number = ";
    cin >> number;

    int start = 0;
    while (start <= number) {
        if (start % 8 == 0 || start % 4 == 0 && start % 3 == 0) {
            cout << start << " ";
        }
        start++;
    }
    cout << "\n==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}