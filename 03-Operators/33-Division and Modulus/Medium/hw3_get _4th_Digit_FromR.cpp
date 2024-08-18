/*
    Homework Medium [3] : Problem #3: Get the 4th Digit From the Right.
    - Code By: Hesham Z. Alsaqqaf
    - prints out the 4th digit.
    - from the right side of that integer. If no such digit exists, print 0
*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter 1 Positive Integer Please : \n";
    cin >> number;
    cout << "\tThe Result All Program :\n\n";

    // First Get Four Last Digit In Input Numbers
    int last_digit{number % 10000};
    cout << "Last 3 Digit = " << last_digit << "\n";

    // Second Get The 4th Digit From the [[4] <<<<< 654321] Right, If No such Digit Exists Daynamic Print [0]
    int get_last_digit_fromNewNumbers{last_digit / 1000};
    cout << "[4th] Last Digit = " << get_last_digit_fromNewNumbers << "\n\n";

    cout << "\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}