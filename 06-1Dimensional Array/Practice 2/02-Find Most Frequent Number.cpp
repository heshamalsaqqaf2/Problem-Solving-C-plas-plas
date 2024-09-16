/**
  * @version 0.1
  * @date    23/08/2024
  * @author  Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
  * @file    Practice [2]: Practice #2: Find Most Frequent Number.
  *
  * @copyright Copyright (c) 2024.
*/

#include <iostream>
using namespace std;

int main() {
    int n{}, number[200];
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> number[i];

    int value{ 0 }, maxRepeat{ 0 };
    for (int i = 0; i < n; ++i) {
        int repeated = 0; // Count
        for (int j = 0; j < n; ++j) {
            repeated += number[i] == number[j];
            if (maxRepeat == -1 || maxRepeat < repeated) {
                maxRepeat = repeated;
                value = number[i];
            }
        }
    }
    cout << value << " Repeated " << maxRepeat << " Times";
    return 0;
}