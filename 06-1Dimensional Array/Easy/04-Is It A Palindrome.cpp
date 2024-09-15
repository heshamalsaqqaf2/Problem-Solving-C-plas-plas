/**
  * @version   0.1
  * @date      15/09/2024
  * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
  * @file      Homework Easy [4] : Problem #4: Is It A Palindrome.
  * @details   Description.
  *
  * @copyright Copyright Programmer/Hesham (c) 2024.
*/

#include <iostream>
using namespace std;

int main() {
    const int sizeArray{ 999 };
    int number, arr[sizeArray];

    cout << "Enter Test Case Number = ";
    cin >> number;

    for (int i = 0; i < number; ++i)
        cin >> arr[i];

    for (int i = 0; i < number / 2; ++i) {
        if (arr[i] != arr[number - 1 - i]) {
            cout << "NO";
            return 0; // Stop Program
        }
    }
    cout << "YES";
    return 0;
}