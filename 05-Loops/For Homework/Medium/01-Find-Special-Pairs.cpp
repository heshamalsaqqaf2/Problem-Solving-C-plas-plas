/*
    # Created On 16/08/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Medium [1] : Problem #1: Find Special Pairs.
    ? Description:
        ● Count how many positive integers (X and Y) meet the following criteria:
            ○ X in the range [50-300]
            ○ Y in the range [70-400]
            ○ X < Y
            ○ (X+Y) divisible by 7
        ● Output
            ○ 8040
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int minNumberX{ 50 }, maxNumberX{ 300 };
    int minNumberY{ 70 }, maxNumberY{ 400 };
    int counter{ 0 };

    for (int x = minNumberX; x < maxNumberX + 1; ++x) {
        for (int y = minNumberY; y < maxNumberY + 1; ++y) {
            if (x < y && (x + y) % 7 == 0)
                ++counter;
        }
    }
    cout << " The Positive Integers = " << counter << "\n";

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}