/*
    Homework Easy [1] : Problem #1: Math Operations
    - Code By: Hesham Z. Alsaqqaf
*/
#include <iostream>
using namespace std;
int main()
{
    double number1, number2;
    cout << "Enter 2 Real Numbers Please : \n";
    cin >> number1 >> number2;
    cout << "\tThe Result All Program :\n\n";

    cout << number1 << " + " << number2 << " = " << number1 + number2 << "\n";
    cout << number1 << " - " << number2 << " = " << number1 - number2 << "\n";
    cout << number1 << " * " << number2 << " = " << number1 * number2 << "\n";
    cout << number1 << " / " << number2 << " = " << number1 / number2 << "\n\n";

    cout << "\t\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}