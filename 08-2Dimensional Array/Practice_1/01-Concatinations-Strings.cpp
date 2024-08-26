/*
    # Created On 15/08/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Practice [1] : Practice #1: Concatinations Strings.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    string first, second;
    cin >> first >> second;


    int maxSize = first.size();
    if (maxSize < second.size())
        maxSize = second.size();

    for (int i = 0; i < maxSize; ++i) {
        cout << first[i] << second[i];
    }
    cout << "\n";

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}