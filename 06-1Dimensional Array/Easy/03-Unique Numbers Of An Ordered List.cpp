/**
 * @version 0.1
 * @date    15/09/2024
 * @author  Hesham Z. Alsaqqaf.
 * @file    03-Unique Numbers Of An Ordered List.cpp
 * @details Homework Easy [3] : Problem #3: Unique Numbers Of An Ordered List..
 *
 * @copyright Copyright (c) 2024
 */

#include <iostream>
using namespace std;
int main() {
    /**
     * @details
     *        Observe: The Input Remains A Sorted List
     *        Constraints:
     *              - Don’t Use Nested Loops!.
     *              - Using Only 1 Array.
     */
    const int sizArray{ 999 };
    int number, arr[sizArray]; // number > 0

    cout << "Enter Test Case Number = ";
    cin >> number;

    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
        if (arr[i] != arr[i - 1])
            cout << arr[i] << " ";
    }

    /**
     * @details
     *        Observe : The Input Remains A Sorted List
     *        Constraints :
     *              - Don’t Use Nested Loops!.
     *              - Try Doing It Without Any Arrays At All.
     */
    int number;
    cout << "Enter Number = ";
    cin >> number; // number > 0

    int lastValue{ -1 }; // Empty Value Initialized 
    for (int i = 0; i < number; ++i) {
        int value;
        cin >> value;
        if (value != lastValue)
            cout << value << " ";
        lastValue = value;
    }
    return 0;
}