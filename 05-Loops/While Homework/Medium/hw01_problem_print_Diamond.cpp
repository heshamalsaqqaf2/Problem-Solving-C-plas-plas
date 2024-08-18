/*
    # Created On 6/12/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Medium [1] : Problem #1: Print Diamond.
*/
#include <iostream>
using namespace std;

int main()
{
    //    int a = 0;
    //    cout<<(a++, ++a, a++, ++a, a++)<<"\n";
    // ============================
    //    int a = 2;
    //    a *= 3;
    //    int b = 1;
    //    b += a;
    //    a += b;
    //    cout << a + b;
    // ============================
    //    int b = 10;
    //    int a = -2 - (-5) - --b;
    //    cout << a;
    // ============================
    //    int x = 4;
    //    x += x * 2 + 1;
    //    cout << x / 3;
    // ============================
    //    int a = 0;
    //    cout << (a = 10)++ << " ";
    //    cout << a << "\n";
    // ============================

    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int number;
    cout << "Enter Number =";
    cin >> number;

    int row = 1;
    while (row <= number)
    {
        // Print Diamond Spaces [ Number - Index ]
        int stars_count = 1;
        while (stars_count <= number - row)
        {
            cout << " ";
            stars_count++;
        }
        // Print Diamond Stars [ 2(Index) - 1 ]
        stars_count = 1;
        while (stars_count <= 2 * row - 1)
        {
            cout << "*";
            stars_count++;
        }
        cout << "\n";
        ++row;
    }
    // ==============================================================
    // Print Diamond Reverse
    row = number; // Inti Index = Number
    while (row >= 1)
    { // Case Looping From N To 1
        // Print Diamond Stars [ 2(Index) - 1 ] Reverse
        int stars_count = 1;
        while (stars_count <= number - row)
        {
            cout << " ";
            ++stars_count;
        }
        // Print Diamond Stars [ 2(Index) - 1 ] Reverse
        stars_count = 1;
        while (stars_count <= 2 * row - 1)
        {
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