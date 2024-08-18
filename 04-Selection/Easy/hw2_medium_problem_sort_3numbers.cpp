/*
    # Homework Medium [2] : Problem #2: Sort 3 Numbers.
    # Code By: Hesham Z. Alsaqqaf.
    - Given 3 integers, sort (order) them in ascending order, then print them out.
        * Notice how there are precisely 6 possible permutations of 3 numbers.
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 Integars Numbers Please : \n";
    cin >> a >> b >> c;
    cout << "\tThe Result All Program :\n\n";

    int swapTemp;
    // Exm => But 3 2 1
    if (b < a)
    {
        swapTemp = a; // swapTemp = 3
        a = b;        // a = 2
        b = swapTemp; // b = 3
        // First Result Swaping => [ 2 3 1 ]
    }
    // But First Result Swaping => [ 2 3 1 ]
    if (c < b)
    {
        swapTemp = b; // swapTemp = 3
        b = c;        // b = 1
        c = swapTemp; // c = 3
        // Second Result Swaping => [ 2 1 3 ]
    }
    // But Second Result Swaping => [ 2 1 3 ]
    // But a, b may not be again, Becouse a, b are not correct
    if (b < a)
    {
        swapTemp = a; // swapTemp = 2
        a = b;        // a = 1
        b = swapTemp; // b = 2
        // Third Result Swaping => [ 1 2 3 ]
    }
    // Now All Numbers Is Sorted
    cout << "Sorted : " << a << " " << b << " " << c << "\n\n";

    cout << "\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}