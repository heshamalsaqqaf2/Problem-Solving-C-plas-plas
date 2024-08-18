/*
    # Created On 6/14/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Hard [2] : Problem #2: Intersection Of Two Intervals.
*/
#include <iostream>

using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int start_number1{}, end_number1{}, start_number2{}, end_number2{};
    cout << "Enter Four 4 Number =";
    cin >> start_number1 >> end_number1 >> start_number2 >> end_number2;

    if (end_number1 < start_number2 || end_number2 < start_number1)
        cout << "Sorry! Not Intersection Two Intervals : " << -1 << "\n";
    else {
        if (start_number1 < start_number2) start_number1 = start_number2; // Maximum OF [ S1 , S2 ]
        if (end_number1 > end_number2) end_number1 = end_number2; // Minimum OF [ E1 , E2 ]
        cout << "Intersection Two Intervals : " << " [ " << start_number1 << " , " << end_number1 << " ] " << "\n";
    }

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}