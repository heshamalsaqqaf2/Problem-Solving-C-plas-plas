/*
    # Created On 15/08/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Hard [1] : Problem #1: Years.
    ? Description:
        *● Assume a year is 12 months, but each month is 30 days.
            ○ TODO: So, a year has 360 (12*30) days
        *● Read in a positive integer.  This will be a whole number of days,
            representing someone’s age in days. Print 3 numbers:
            ○ TODO: Total years     total months    total remaining days
        *● Input ⇒ output examples:
            ○ TODO: Output:
            ○ 360   1 0 0   360 days total 1 year exactly
            ○ 30    0 1 0   30 days make up 1 month precisely
            ○ 10    0 0 10  This is just days: a 10-day old infant!
            ○ 391   1 1 1   391 = 360 + 30 + 1 = 1 year, 1 month, 1 day
            ○ 61    0 2 1   61 = 2*30 + 1
            ○ 200   0 6 20  200 = 30*6 + 20
            ○ 1000  2 9 10  1000 = 2*360 + 9*30 + 10
            ○ 5000  13 10 20
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int year{};
    int month{};
    int days{};

    int number{};
    cin >> number;

    // number == year;
    int result = number % 360;
    year = result % 10;
    month = result / 30;
    days = result % 30;

    cout << "Year = " << year << "\n";
    cout << "Month = " << month % 100 << "\n";
    cout << "Days = " << days << "\n";


    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}