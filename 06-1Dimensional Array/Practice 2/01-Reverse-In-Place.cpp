/**
  * @version 0.1
  * @date    23/08/2024
  * @author  Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
  * @file    Practice [2]: Practice #1: Reverse In Place.
  *
  * @copyright Copyright (c) 2024.
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