/**
  * @version 0.1
  * @date    15/09/2024
  * @author  Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
  * @file    Homework Easy [5]: Problem #5: Smallest Pair.
  *
  * @copyright Copyright (c) 2024.
*/

#include <iostream>
using namespace std;
int main() {
    const int sizeArray{ 200 };
    int number, arr[sizeArray];

    cout << "Enter Test Case Number = ";
    cin >> number;

    for (int i = 0; i < number; ++i)
        cin >> arr[i];

    int result{ INT_MAX };
    for (int i = 0; i < number; i++) {
        for (int j = i + 1; j < number; j++) {
            int smallestPair = arr[i] + arr[j] + j - i;
            if (smallestPair < result) {
                result = smallestPair;
                /**
                 * @note This cout just to see how the smallest sum of two pairs is chosen by value or index.
                 *       This shows that the smallest sum of a pair of numbers is calculated
                 *       in the array is calculated based on the smallest index even
                 *       if the values of the pairs are larger than some numbers.
                 *
                 * @test Test Case :
                 *          - Input : 8  => 10 12 13 14 15 16 17 11
                 *
                 *          - Output: 23 =>
                 *                          Index[i] = 0 , Value[i] = 10
                 *                          Index[j] = 1 , Value[j] = 12
                 *                          V[i] + V[j] + j - i = 10 + 12 + 1 - 0 => 23
                 *
                 *          - Output: 23 => // !This Output It's Wrong.
                 *                          Index[i] = 0 , Value[i] = 10
                 *                          Index[j] = 7 , Value[j] = 11
                 *                          V[i] + V[j] + j - i = 10 + 11 + 7 - 0 => 28
                 *
                 */
                cout
                    << "Value [i] = " << arr[i] << " , " << "Index [i] = " << i << "\n"
                    << "Value [j] = " << arr[j] << " , " << "Index [j] = " << j << "\n"
                    << "\nSmallest Pair = " << smallestPair << "\n";
            }
        }
    }
    cout << result;

    return 0;
}