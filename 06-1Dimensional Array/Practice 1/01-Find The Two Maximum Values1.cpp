/**
  * @version 0.1
  * @date    01/09/2024
  * @author  Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
  * @file    Practice [1]: Practice #1: Find First And 2nd Maximum Values.
  *
  * @copyright Copyright (c) 2024.
*/

#include <iostream>
using namespace std;

int main() {
    int n, numbers[200];
    cin >> n;

    // For Input Array Of Numbers Of Test Cases Number
    for (int i = 0; i < n; ++i)
        cin >> numbers[i];

    // For Get First Maximum Value
    int maxIndex = 0;
    for (int i = 1; i <= n; ++i) {
        if (numbers[maxIndex] < numbers[i])
            maxIndex = i;
    }

    // Good Idea Assign Less Than MaxValue1 = -100000 
    int maxValue1 = numbers[maxIndex];
    numbers[maxIndex] = -100000;

    // For Get Second Maximum Value
    maxIndex = 0;
    for (int i = 1; i <= n; ++i) {
        if (numbers[maxIndex] < numbers[i])
            maxIndex = i;
    }
    int maxValue2 = numbers[maxIndex];
    cout << "Max Value 1 = " << maxValue1 << "Max Value 2 = " << maxValue2;

    return 0;
}