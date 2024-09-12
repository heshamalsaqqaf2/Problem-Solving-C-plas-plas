/*
    # Created On 14/08/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Easy [1] : Problem #1: Is The Array Increasing.
*/

#include <iostream>
using namespace std;

int main() {
    const int SizeArray{ 200 };
    int n, number[SizeArray];

    cout << "Enter The Number Of Test Cases = ";
    cin >> n;

    cout << "Now Enter The " << n << " Number = ";
    for (int i = 0; i < n; ++i)
        cin >> number[i];

    bool isThisIncreasing{ true };
    for (int i = 1; i < n; i++) {
        if (number[i] <= number[i - 1]) {
            isThisIncreasing = false;
            break;
        }
    }
    if (isThisIncreasing)
        cout << "YES, The Array Is Increasing. \n";
    else
        cout << "NO, The Array Is Not Increasing.\n";

    return 0;
}