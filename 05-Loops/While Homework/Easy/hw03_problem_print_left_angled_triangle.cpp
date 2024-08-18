/*
    # Created On 6/12/2024.
    # Code By: Hesham Z. Alsaqqaf
    # Homework Easy [3] : Problem #3: Print left angled triangle.
*/
#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number;
    cin >> number;
    string print_stars;
    int count = 1;

    while (count <= number) {
        print_stars += "*";
        count++;
        cout << print_stars << endl;
    }

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}