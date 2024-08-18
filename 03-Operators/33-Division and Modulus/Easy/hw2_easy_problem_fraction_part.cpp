/*
    Homework Easy [2] : Problem #2: Fractional Part.
    - Code By: Hesham Z. Alsaqqaf
    - First Programming thinkings
    - Second Mathematical thinkings
*/
#include <iostream>
using namespace std;
int main()
{
    double n1, n2;
    cout << "Enter Any 2 Real Numbers Please : \n";
    cin >> n1 >> n2;
    cout << "\tThe Result All Program :\n\n";

    double result = n1 / n2;
    cout << "Real part = " << result << "\n";                   // Real Numbers.Fraction Numbers
    cout << "Fraction Part = " << result - int(result) << "\n"; // Real Numbers - Part Left or aftar character [.]

    double modulus = (int)n1 % (int)n2;                                 // Casting Input Numbers
    cout << "Real part Using Modulus = " << modulus << "\n";            // 1
    cout << "Fraction Part Using Modulus = " << modulus / n2 << "\n\n"; // 1 / Number2 = Fraction Numbers

    cout << "\t\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}