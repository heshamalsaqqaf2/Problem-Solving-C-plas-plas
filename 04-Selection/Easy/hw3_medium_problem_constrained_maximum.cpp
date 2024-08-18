/*
    # Homework Medium [3] : Problem #3: Constrained Maximum.
    # Code By: Hesham Z. Alsaqqaf.
    - Given 3 integers, you have to find the largest one - but, it must be < 100.
        Print -1 if there is no such number.
*/
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int x, y, z;
    int result = INT_MIN;
    bool updata = false;
    cout << "Enter 3 Integars Numbers Please : \n";
    cin >> x >> y >> z;
    cout << "\tThe Result All Program :\n\n";

    if (x < 100)
        result = x, updata = 1;
    if (y < 100 && y > result)
        result = y, updata = 1;
    if (z < 100 && z > result)
        result = z, updata = 1;
    if (updata)
        cout << "Largest = " << result << "\n\n";
    else
        cout << "Not Found = " << -1 << "\n\n";

    cout << "\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}