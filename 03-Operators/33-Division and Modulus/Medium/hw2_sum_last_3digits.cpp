/*
    Homework Medium [2] : Problem #2: Sum of the Last 3 Digits.
    - Code By: Hesham Z. Alsaqqaf
*/
#include <iostream>
using namespace std;
int main()
{
    int n1;
    cout << "Enter Any 1 Real Numbers Please : \n";
    cin >> n1;
    cout << "\tThe Result All Program :\n\n";

    // Get 3 Last Digit From The Right = 5656 % 1000 = 656
    int last_digit{n1 % 1000};
    cout << "Last 3 Digit = " << last_digit << "\n";

    // Get 1 Last Digit From The Right = 656 % 10 = 6
    int get__last_digit1{last_digit % 10};
    cout << "[1] Last Diget = " << get__last_digit1 << "\n";
    int remove_last_digit1{last_digit / 10};

    // Get 1 Last Digit From The Right = 65 % 10 = 5
    int get__last_digit2{remove_last_digit1 % 10};
    cout << "[2] Last Diget = " << get__last_digit2 << "\n";
    int remove_last_digit2{get__last_digit2 / 10};

    // Remove 2 Last Digit From The Right = 656 / 100 = 6,  If No such Digit Exists Daynamic Print [0]
    int get__last_digit3{last_digit / 100};
    cout << "[3] Last Diget = " << get__last_digit3 << "\n";

    // Prints Result The Sum Of Its Last 3 Digits
    cout << "Sum All 3 Last Diget = " << get__last_digit1 + get__last_digit2 + get__last_digit3 << "\n\n";
    cout << "\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}