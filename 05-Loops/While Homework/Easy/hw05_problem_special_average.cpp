/*
    # Created On 6/12/2024.
    # Code By: Hesham Z. Alsaqqaf
    # Homework Easy [5] : Problem #5: Special Average.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    // Test Case 1 = 6 10 100 20 200 30 600 => [ 10 1st ]
    // Test Case 2 = 7 11 101 21 201 31 602 78 => [ 11 1st ]
    int numbers;
    cout << "Enter Numbers =";
    cin >> numbers;

    double even_sum = 0, odd_sum = 0;
    int even_count = 0, odd_count = 0;

    int counts_number = 1;

    while (counts_number <= numbers) {
        // Best Idea Thinks -> Tack All Input Numbers For Users.👌
        double value;
        cin >> value; // Get Value The Numbers Before Enter User 👆
        if (counts_number % 2 == 0) {
            even_sum += value;
            even_count++;
        } else {
            odd_sum += value;
            odd_count++;
        }
        counts_number++;
    }
    cout << "\nEven Sum =" << even_sum << " , " << "Event Count =" << even_count << "\n";
    cout << "Odd Sum =" << odd_sum << " , " << "Odd Count :" << odd_count << "\n\n";

    cout << "The Average Odd Positions :" << odd_sum / odd_count
         << "\nThe Average Even Positions :" << even_sum / even_count << "\n";

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}