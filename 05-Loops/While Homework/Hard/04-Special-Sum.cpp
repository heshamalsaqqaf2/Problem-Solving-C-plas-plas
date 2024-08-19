/**
 * @version   0.1
 * @date      2024-08-19
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Homework Hard [4] : Problem #4: Special Sum.
 * @details   Description.
                ● Read integer T for number of test cases.
                ● For each test case read integer N. Then read N integers a, b, c
                ● Output: Compute the sum of the following expression:
                    ○ //? a, b*b, c*c*c, d*d*d*d, e*e*e*e*e……
                        ■ //! That is the k-th number is repeated k times
                ● Input:
                    ○ 2
                    ○ 3   5 7 2
                    ○ 4  1 2 3 4
                ● Output
                    ○ 62    [as (5 + 7*7 + 2*2*2)  = 62]
                    ○ 288   [as (1+2*2+3*3*3+4*4*4*4) = 288]
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int testCase{ };
    cout << "Enter Number Of Test Cases = ";
    cin >> testCase;

    while (testCase > 0) {
        int numberTestCase_2{};
        cin >> numberTestCase_2;

        int counterOfNumber{ 1 };
        int summation{ 0 };

        while (counterOfNumber <= numberTestCase_2) {
            int value{};
            cin >> value;

            //! Start Code Special Sum
            int counterDeep = counterOfNumber;
            int result{ 1 };
            while (counterDeep > 0) {
                result *= value;
                --counterDeep;
            }
            summation += result;
            ++counterOfNumber;
        }
        cout << "Result Summation = " << summation << "\n";
        --testCase;
    }

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}