/*
    # Homework Easy [4] : Problem #4: Conditional Count.
    # Code By: Hesham Z. Alsaqqaf
    - Write a program that reads in a number X, and then other 5 numbers. Print
        out two values:
            1- How many numbers <= X
            2- How many numbers > X
    - Can you see any relationship between these two outputs?
        * The sum of the number of numbers (N) minus the sum of the number of correct occurrences (count).
            It gives us the total number of incorrect occurrences.
        * The relationship is that the sum of the number of repetitions gives us the number of numbers entered.
*/
#include <iostream>
using namespace std;
int main()
{
    int x, n1, n2, n3, n4, n5;
    cout << "Enter Any 1 Number Please : \n";
    cin >> x;
    cout << "Enter 5 Numbers Please : \n";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    cout << "\n\tThe Result All Program :\n\n";

    int count{0};
    count += (x >= n1);
    count += (x >= n2);
    count += (x >= n3);
    count += (x >= n4);
    count += (x >= n5);
    cout << "The Numbers <= " << x << " = " << count << "\n";
    cout << "The Numbers > " << x << " = " << (5 - count) << "\n\n";
    cout << "\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}