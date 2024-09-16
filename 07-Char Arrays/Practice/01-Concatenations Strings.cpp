/**
  * @version 0.1
  * @date    16/09/2024
  * @author  Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
  * @file    Practice [1]: Problem #1: Concatenations Strings
  *
  * @copyright Copyright (c) 2024
*/

#include <iostream>
using namespace std;

int main() {
    string first, second;
    cout << "Enter Tow String : ";
    cin >> first >> second;

    int maxSize = first.size();
    if (maxSize < second.size()) {
        maxSize = second.size();
    }

    for (int i = 0; i < maxSize; ++i) {
        cout << first[i] << second[i];
    }
    return 0;
}