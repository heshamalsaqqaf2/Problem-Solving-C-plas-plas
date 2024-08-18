/*
    # Homework Easy [1] : Problem #1: Arithmetic.
    # Code By: Hesham Z. Alsaqqaf.
    - Read 2 integers, A and B, and print out statements based on the following cases:
        * If both are odd, print out their product,  A*B.
        * If both are even, print out the result of the following division:  A/B   (assume B != 0).
        * If the first number is odd, and the second is even, then print the sum of A and B: A+B.
        * If the first number is even, and the second is odd, then print out: A-B.
    - Test Cases The Program :
        * First Test Case => Input Number2 = 0
        * Second Test Case => Input Number1 = 0 => 0 / 1000000 = 0
*/
#include <iostream>
using namespace std;
int main()
{
    int number1, number2;
    cout << "Enter 2 Integars Numbers Please : \n";
    cin >> number1 >> number2;
    cout << "\tThe Result All Program :\n\n";

    // Both 2 Numbers Is = ODD
    if (number1 % 2 != 0 && number2 % 2 != 0)
        cout << number1 << " * " << number2 << " = " << number1 * number2 << "\n\n";

    // Both 2 Numbers Is = Even
    else if (number1 % 2 == 0 && number2 % 2 == 0)
        cout << number1 << " / " << number2 << " = " << number1 / number2 << "\n\n";

    // First Test Case => Input Number2 = 0
    else if (number2 == 0)
        cout << "Can't Divigen By Zeros\n\n";

    // Second Test Case => Input Number1 = 0 => 0 / 1000000 = 0
    else if (number1 == 0)
        cout << number1 << " / " << number2 << " = " << false << "\n\n";

    // Numbers 1th Is = ODD and Numbers 2th Is = Even
    else if (number1 % 2 != 0 && number2 % 2 == 0)
        cout << number1 << " + " << number2 << " = " << number1 + number2 << "\n\n";

    // Numbers 1th Is = Even and Numbers 2th Is = ODD
    else
        cout << number1 << " - " << number2 << " = " << number1 - number2 << "\n\n";
    cout << "\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}