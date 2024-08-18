/*
    # Created On 6/11/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Easy [2] : Problem #2: Line Of Characters.
*/
#include <iostream>

using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number;
    char character;

    cout << "Enter Integer Number =";
    cin >> number;
    cout << "Enter Single Character :";
    cin >> character;

    int count_character = 1; // Initialize Variable While Loop
    if (number <= 0) { // Test Case
        cout << "\nThe Number Less Than or Equal Zero.\n";
    } else {
        while (count_character <= number) {
            cout << character << ",";
            count_character++;
        }
    }

    cout << "\n==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}