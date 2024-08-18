/*
    # Created On 6/12/2024.
    # Code By: Hesham Z. Alsaqqaf
    # Homework Easy [4] : Problem #4: Print face down left angled triangle.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number;
    cin >> number;

    int row = number;
    // Check Rows Counts
    while (row >= 1) {
        // Print face down left angled triangle.
        int stars_count = 1;
        while (stars_count <= row) {
            cout << "*";
            ++stars_count;
        }
        cout << "\n";
        --row;
    }

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}