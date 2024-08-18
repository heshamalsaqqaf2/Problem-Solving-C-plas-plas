/*
    # Created On 6/19/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Hard [4] : Problem #4: Minimum of Values.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int TEST_CASE{};
    cout << "Enter Number Test Cases :";
    cin >> TEST_CASE;

    // Loop 1 Check Count Number Test Case
    while (TEST_CASE > 0) {
        int number{};
        cin >> number;
        int positions{0};
        int result{};

        // Loop 2 Check Positions Number And Get Value
        while (positions < number) {
            int value{};
            cin >> value;
            // Check Minimum Value
            if (positions == 0) result = value; // NOLINT(*-branch-clone)
            else if (result > value) result = value;
            positions++;
        }
        cout << "The Minimum Numbers This : " << " [ " << result << " ] " << endl;
        --TEST_CASE;
    }

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}