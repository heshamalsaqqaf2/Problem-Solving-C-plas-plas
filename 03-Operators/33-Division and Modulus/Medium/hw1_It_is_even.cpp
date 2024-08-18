/*
    Homework Medium [1] : Problem #1: Problem #1: Is it Even?
    - Code By: Hesham Z. Alsaqqaf
    - Find at least 3 different ways for this task:
        1 - Using only %2
        2 - Using only /2
        3 - Using only %10

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Positive Integer Number Please : \n";
    cin >> n;
    cout << "\tThe Result All Program :\n\n";

    // Using % 2
    bool isEven1 = (n % 2 == 0);
    cout << "Using % 2 = " << isEven1 << "\n";

    // Using / 2
    double div = (double)n / 2.0;
    div = div - (int)div;
    bool isEven2 = div == 0;
    cout << "Using / 2 = " << isEven2 << "\n";

    // Using % 10
    int last_digit = n % 10; // Get Last Digit For Seqouncs Numbers
    bool isEven3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;
    cout << "Using % 10 = " << isEven3 << "\n\n";

    cout << "\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}