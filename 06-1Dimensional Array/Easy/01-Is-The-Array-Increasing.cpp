/**
  * @version 0.1
  * @date    15/09/2024
  * @author  Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
  * @file    Homework Easy [1]: Problem #1: Is The Array Increasing.
  *
  * @copyright Copyright (c) 2024
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