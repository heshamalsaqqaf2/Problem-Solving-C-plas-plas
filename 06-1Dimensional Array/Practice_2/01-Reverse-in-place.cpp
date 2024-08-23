/**
 * @version   0.1
 * @date      2024-08-23
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Practice [2] : Practice #1: Reverse In Place.
 * @details   Description.
                ● Read an Integer N, then read N <= 200 integers.
                    ○ In-place: Change the current array, don’t use 2 arrays
                ● Simple idea: Iterate from the begin and end in same time
                    ○ Swap the 2 positions
                    ○ Do this tell the middle only
                ● Let say array is 1 2 3 4 5 6 7 8
                    ○ Step 1: swap (1, 8) ⇒ 8 2 3 4 5 6 7 1
                    ○ Step 2: swap (2, 7) ⇒ 8 7 3 4 5 6 2 1
                    ○ Step 3: swap (3, 6) ⇒ 8 7 6 4 5 3 2 1
                    ○ Step 4: swap (4, 6) ⇒ 8 7 6 5 4 3 2 1
                        ■ Stop after n/2 steps
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int numberOfTestCase{}, numbers[200];
    cout << "Enter Number Test Case = ";
    cin >> numberOfTestCase;

    // This Is Loops Reading Number Of Test Cases.
    cout << "Enter Array Of \"" << numberOfTestCase << "\" Numbers = ";
    for (int i = 0; i < numberOfTestCase; ++i)
        cin >> numbers[i];

    // This Is Loops Swapping Number In Array First Index => Last Index.
    for (int i = 0; i < numberOfTestCase / 2; ++i) {

        int lastIndexNumberOfArray = numberOfTestCase - i - 1; //! Get Last Index.

        /* TODO: Swapping First Index[i] => Last Index[n-i-1]. */
        int temp = numbers[i];
        numbers[i] = numbers[lastIndexNumberOfArray];
        numbers[lastIndexNumberOfArray] = temp;
    }
    // This Is Loops Print Reverse Array
    cout << "Reverse In Place Array = ";
    for (int i = 0; i < numberOfTestCase; ++i)
        cout << numbers[i] << " ";

    cout << "\n==============================================\n";
    cout << "\tGoodbye, End The Program.\n\n";
    return 0;
}