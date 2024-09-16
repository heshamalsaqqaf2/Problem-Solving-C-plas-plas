/**
  * @version 0.1
  * @date    16/09/2024
  * @author  Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
  * @file    Practice [1]: Problem #2: Letters Frequency.
  *
  * @copyright Copyright (c) 2024
*/

#include <iostream>
using namespace std;

int main() {
    string str;
    int frequency[26] = { 0 }; // Initialized By Zeros

    cout << "Enter String : ";
    cin >> str;

    for (int i = 0; i < str.size(); ++i) {
        frequency[str[i]]++;
    }
    for (int i = 'a'; i <= 'z'; ++i) {
        if (frequency[i]) {
            cout << (char)i << " " << frequency[i] << "\n";
        }
    }

    return 0;
}