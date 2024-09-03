/**
 * @version   0.1
 * @date      2024-09-1
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Practice [1] : Practice #1 : Find First And 2nd Maximum Values.
 * @details   Description.
                ●   Read an Integer N ( 2 <= N <= 200), then read N (distinct) integers.
                        Find the maximum and 2nd maximum values
                ●   Input: 5 => 10 20 3 30 7 ⇒ Output 30 20
                        ○ 30 is the maximum in the array
                        ○ If we removed it, the next maximum is 20
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
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