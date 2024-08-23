/**
 * @version   0.1
 * @date      2024-08-23
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Homework Hard [2] : Problem #2: Special Sum.
 * @details   Description.
                ● This problem was homework in while loops
                    ○ Given a, b, c, …., etc ⇒ compute (a, b*b, c*c*c, d*d*d*d, e*e*e*e*e……)
                ● Now, solve with for-loops
                ● Input:
                    ○ 2
                    ○ 3  5 7 2
                    ○ 4  1 2 3 4
                ● Output
                    ○ 62   =>  [as (5 + 7*7 + 2*2*2)  = 62]
                    ○ 288  =>  [as (1+2*2+3*3*3+4*4*4*4) = 288]
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int testCase{};
    cout << "Enter Number Test Case = ";
    cin >> testCase;

    for (int t = 0; t < testCase; ++t) {
        int number{};
        cin >> number;

        int summation{ 0 };
        for (int i = 0; i < number; ++i) {
            int value{};
            cin >> value;

            int result{ 1 };
            for (int j = 0; j < i + 1; ++j)
                result *= value;
            summation += result;
        }
        cout << summation << "\n";
    }

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}