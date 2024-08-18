/*
    # Homework Medium [1] : Problem #1: Find the Maximum of 10.
    # Code By: Hesham Z. Alsaqqaf.
    - Read 10 integers, then find which of them has the biggest value, and print it.
        * Restriction: avoid defining 10 separate integer variables to do this.  Try to use
        a maximum of TWO integer variables!.
*/
#include <iostream>
using namespace std;
int main()
{
    int first_number, num;
    cout << "Enter 10 Integers Number Please : \n";

    // 1st Check Comparison Number
    cin >> first_number;
    // 2nd
    cin >> num;
    if (num > first_number)
        first_number = num;
    // 3rd
    cin >> num;
    if (num > first_number)
        first_number = num;
    // 4th
    cin >> num;
    if (num > first_number)
        first_number = num;
    // // 5th
    cin >> num;
    if (num > first_number)
        first_number = num;
    // 6th
    cin >> num;
    if (num > first_number)
        first_number = num;
    // 7th
    cin >> num;
    if (num > first_number)
        first_number = num;
    // 8th
    cin >> num;
    if (num > first_number)
        first_number = num;
    // 9th
    cin >> num;
    if (num > first_number)
        first_number = num;
    // 10th
    cin >> num;
    if (num > first_number)
        first_number = num;

    cout << "\n\tThe Result All Program :\n";

    cout << "\nThe Maximum Numbers This : " << first_number << "\n\n";

    cout << "\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}