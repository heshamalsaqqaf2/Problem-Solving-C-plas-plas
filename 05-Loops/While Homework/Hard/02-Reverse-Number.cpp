/*
    # Created On 18/08/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Hard [2] : Problem #3: Reverse Number.
    ? Description:
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number{};
    cout << "Enter The Number = ";
    cin >> number;

    int reverseNumber{ 0 };
    while (number > 0) {
        int lastDigit = number % 10;
        number /= 10;
        cout << lastDigit;
        reverseNumber++;
    }

    cout << "\n==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}