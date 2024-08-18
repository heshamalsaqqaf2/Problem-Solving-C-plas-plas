/*
    # Created On 16/08/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Medium [3] : Problem #3: Is It Prime.
    ? Description:
        ● Read in a positive integer N (< 500), and print YES if it is prime, otherwise print NO
            ○ A prime number is greater than 1 AND cannot be formed by multiplying two smaller numbers.
                ■ In other words, number % whatever != 0
                ■ The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23, and 29.
        ● Example input ⇒ output
            ○ 13 ⇒ YES  (only 1 * 13)
            ○ 12 ⇒ NO   (e.g. 12 = 2 *6, so 12 can be divided by 2 or 6)
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number{};
    cout << "Enter The Number Less Than [500] = ";
    cin >> number;

    if (number <= 1)
        cout << number << "NO, Is Not Prime\n";
    else {
        bool isPrime{ true };
        for (int i = 2; i < number; ++i) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << number << " YES, Is Prime\n";
        else
            cout << number << " NO, Is Not Prime\n";
    }

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}