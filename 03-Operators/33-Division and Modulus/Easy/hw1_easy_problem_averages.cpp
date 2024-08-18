/*
    Homework Easy [1] : Problem #1: Averages.
    - Code By: Hesham Z. Alsaqqaf
        - What is the mathematical relationship between B and C?
            6 / 9 * 2.0 / 3.0;
            0.666667 * 2.0 / 3.0;
            1.333333 / 3.0;
            0.444444;
*/
#include <iostream>
using namespace std;
int main()
{

    int n1, n2, n3, n4, n5;
    cout << "Enter Any 5 Real Numbers Please : \n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << "\tThe Result All Program :\n\n";

    // Their average
    cout << "Sum Result = " << n1 + n2 + n3 + n4 + n5 << "\n";
    cout << "Averages Result = " << double(n1 + n2 + n3 + n4 + n5) / 5 << "\n\n";

    // The sum of the first 3 numbers divided by the sum of the last 2 numbers
    double sum_First3_Numbers = n1 + n2 + n3;
    double sum_Last2_Numbers = n4 + n5;
    cout << "Sum First 3 Numbers = " << sum_First3_Numbers << "\n";
    cout << "Sum Last 2 Numbers = " << sum_Last2_Numbers << "\n";
    cout << "Divided Sum First 3, Last 2 Numbers = " << sum_First3_Numbers / sum_Last2_Numbers << "\n\n";

    // The average of the first 3 numbers divided by the average of the last 2 numbers
    double averages_First3_Numbers = sum_First3_Numbers / 3.0;
    double averages_Last2_Numbers = sum_Last2_Numbers / 2.0;
    cout << "Averages Sum First 3 Numbers = " << averages_First3_Numbers << "\n";
    cout << "Averages Sum Last 2 Numbers = " << averages_Last2_Numbers << "\n";
    cout << "Divided Averages First 3, Last 2 Numbers = " << averages_First3_Numbers / averages_Last2_Numbers << "\n\n";

    // What is the mathematical relationship between B and C?
    // 6 / 9 * 2.0 / 3.0;
    // 0.666667 * 2.0 / 3.0;
    // 1.333333 / 3.0;
    // 0.444444;
    cout << "Mathematical Relationship between B and C = " << sum_First3_Numbers / sum_Last2_Numbers * 2.0 / 3.0 << "\n\n";

    cout << "\t\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}