/**
 * @version   0.4
 * @date      2024-09-1
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Practice [1] : Practice #4 : Find First And 2nd Maximum Values.
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
    int max1{}, max2{};
    cout << "Enter Test Case Number = ";
    cin >> n;

    cout << "Enter " << n << " Numbers = ";
    for (int testCase = 0; testCase < n; ++testCase)
        cin >> numbers[testCase];

    if (numbers[0] >= numbers[1])
        max1 = numbers[0], max2 = numbers[1];
    else
        max1 = numbers[1], max2 = numbers[0];

    if (n <= 2) {
        cout << "Max1 = " << max1 << " , " << "Max2 = " << max2;
        return 0;
    }
    for (int i = 2; i < n; ++i) {
        if (max1 <= numbers[i])
            max2 = max1, max1 = numbers[i];
        else if (max2 < numbers[i])
            max2 = numbers[i];
    }
    cout << "Max1 = " << max1 << " , " << "Max2 = " << max2;

    return 0;
}