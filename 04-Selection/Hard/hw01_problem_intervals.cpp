/*
    # Created On 6/14/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Hard [1] : Problem #1: Intervals.
*/
#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number{};
    int start1{}, end1{}, start2{}, end2{}, start3{}, end3{};
    cout << "Enter The Number =";
    cin >> number;

    int count{};
    // Test Case 01 : Input [ 0 OR (-) ].
    if (number > 0) {
        cout << "Enter Start, End Number For [ 1 To 6 ] =";
        cin >> start1 >> end1 >> start2 >> end2 >> start3 >> end3;

        if (number >= start1 && number <= end1) count++;
        if (number >= start2 && number <= end2) count++;
        if (number >= start3 && number <= end3) count++;

        // Test Case 02 : // Finish Program Because The Value Of [ Count = 0 ].
        if (count == 0) {
            cout << "[ " << number << " ] " << "Number Does Not Exist Within Any Interval.\n";
            return 0; // Finish Program [ Cut Run Code ].
        }
        cout << "Number " << number << "Exists Within Of The Intervals : " << count << "\n";
    } else cout << "Sorry! The Number Is Less Than OR Equal [ Zero ]. \n";

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}