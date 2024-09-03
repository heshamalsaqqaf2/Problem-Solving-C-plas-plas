/**
 * @version   0.1
 * @date      2024-09-1
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Practice [1] : Practice #2 : Find Pair Values Of Maximum Sum
 * @details   Description.
                ●   Read an Integer N, then read N <= 200 (distinct) integers.
                        Find a pair of numbers (e.g. 2 different indices) whose sum is maximum.
                ●   Input: 5  => 2 10 3 50 15   ⇒ 65  (from 50 + 15).
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    int n, numbers[200];
    cout << "Enter Test Case Number = ";
    cin >> n;

    cout << "Enter " << n << " Numbers = ";
    for (int testCase = 0; testCase < n; ++testCase)
        cin >> numbers[testCase];

    /**
     * @details Nested Loops Account =
     *          Equation:  => N1 + N2 + N3 + .... +  N ====> Summations N * (N - 1)
     *                     => ( N * ((N-1)/1) ) / 2
     *                     => 4 * ((4-1)/1) / 2
     *                     => (4 * 3) / 2 = 12 / 2
     *                     => 6
     */
    int maxIndex1{ -1 }, maxIndex2{ -1 }; // TODO: Variables Not Initialize
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (maxIndex1 == -1)
                maxIndex1 = i, maxIndex2 = j; // TODO: Initialize Now
            else if (numbers[maxIndex1] + numbers[maxIndex2] < numbers[i] + numbers[j])
                maxIndex1 = i, maxIndex2 = j;
        }
    }
    cout << numbers[maxIndex1] << " , " << numbers[maxIndex2];
    return 0;
}


