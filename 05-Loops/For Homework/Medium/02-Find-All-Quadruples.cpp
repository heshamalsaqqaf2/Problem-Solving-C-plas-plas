/*
    # Created On 14/08/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Medium [2] : Problem #2: Find All Quadruples.
    ? Description:
        ● Count how many positive integers (a, b, c, d) are of the following properties:
            ○ 1 <= a, b, c, d <= 200
            ○ a + b = c + d
        ● Output:
            ○ 5333400
        ● Code it once using 4 nested loops //!(very slow!)
        ● Code it once using only 3 nested loops  (same thinking line as lectures)
        ● When you learn (Data Structures), you can do it using just nested loops!
        */

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int count{ 0 };
    int maxRang{ 200 };
    // TODO This Is Code Version 1 Using 4 Loops
    for (int a = 1; a <= maxRang; ++a) {
        for (int b = 1; b <= maxRang; ++b) {
            for (int c = 1; c <= maxRang; ++c) {
                for (int d = 1; d <= maxRang; ++d)
                    count += (a + b == c + d);
            }
        }
    }
    cout << "The Result Version 1 = " << count << "\n";

    // TODO This Is Code Version 2 Using 3 Loops
    count = 0;
    for (int a = 1; a <= maxRang; ++a) {
        for (int b = 1; b <= maxRang; ++b) {
            for (int c = 1; c <= maxRang; ++c) {
                // TODO: This Equations Find D 
                int d = a + b - c;
                if (1 <= d && d <= 200)
                    count++;
            }
        }
    }
    cout << "The Result Version 2 = " << count << "\n";

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}