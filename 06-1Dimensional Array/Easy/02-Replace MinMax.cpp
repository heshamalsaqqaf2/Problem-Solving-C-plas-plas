/**
  * @version 0.1
  * @date    15/09/2024
  * @author  Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
  * @file    Homework Easy [2]: Problem #2: Replace MinMax Numbers.
  *
  * @copyright Copyright (c) 2024
*/

#include <iostream>
using namespace std;

int main() {
    const int N{ 199 }; // [(0 -> 199) == 200];  
    int array[N];

    // Initialize Minumum,Maximum Numbers => [Minumum = Max Value] && [Maximum = Min Value].
    int n, maximum{ INT_MIN }, minumum{ INT_MAX };

    cout << "Enter Number Of Test Case = ";
    cin >> n;

    // This Loops => Enter Numbers Of Arrays && Check Maximum && Minumum Numbers.
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
        if (array[i] < minumum)
            minumum = array[i];
        if (array[i] > maximum)
            maximum = array[i];
    }
    // This Loops Replace Each Minimum Number With The Maximum Number, And Vice Versa.
    for (int i = 0; i < n; ++i) {
        if (array[i] == minumum)
            array[i] = maximum;
        else if (array[i] == maximum)
            array[i] = minumum;
    }
    // This Loops Print The Array After Doing Find MinMux Numbers. 
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";

    return 0;
}