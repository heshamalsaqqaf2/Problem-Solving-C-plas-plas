/**
  * @version 0.3
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