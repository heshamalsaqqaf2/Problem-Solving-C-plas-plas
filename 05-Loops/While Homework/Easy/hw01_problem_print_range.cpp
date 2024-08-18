/*
    # Created On 6/11/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Easy [1] : Problem #1: Print Range.
*/

#include <iostream>

using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int end_number, start_number;

    cout << "Enter Start Number =";
    cin >> start_number;
    cout << "Enter End Number =";
    cin >> end_number;

    int print_range = start_number; // Initialize Variable While Loop
    if (print_range >= end_number) { // Test Case
        cout << "\nError! Value Start Number Is Greater Than OR Equal Value End Number: " << print_range << " , "
             << end_number << endl;
    } else {
        while (print_range <= end_number)
            cout << print_range++ << endl;
    }

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}