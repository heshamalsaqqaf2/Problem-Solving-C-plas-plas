/**
 * @version   0.3
 * @date      2024-09-1
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Practice [1] : Practice #3 : Find First And 2nd Maximum Values.
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
    int maxIndex1 = 0;
    for (int i = 1; i < n; ++i) {
        if (numbers[maxIndex1] < numbers[i])
            maxIndex1 = i;
    }

    // For Get Second Maximum Value Solution Bug After File 02-Code.cpp 
    int maxIndex2 = -1;
    for (int i = 0; i < n; ++i) {
        if (i == maxIndex1)
            continue;
        if (numbers[maxIndex2] < numbers[i])
            maxIndex2 = i;
    }

    cout << "Max Value 1 = " << numbers[maxIndex1] << "Max Value 2 = " << numbers[maxIndex2];

    return 0;
}