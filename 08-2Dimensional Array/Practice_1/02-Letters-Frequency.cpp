/*
    # Created On 15/08/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Practice [2] : Practice #2: Letters Frequency.
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    string str;
    cin >> str;
    int frequency[150] = { 0 };
    for (int i = 0; i < str.size(); ++i)
        frequency[str[i]]++;
    for (int i = 'a'; i <= 'z'; ++i)
    {
        if (frequency[i])
            cout << (char)i << " " << frequency[i] << "\n";
    }

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}