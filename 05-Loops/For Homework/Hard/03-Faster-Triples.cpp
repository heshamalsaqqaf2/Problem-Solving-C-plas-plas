/*
    # Created On 18/08/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Hard [3] : Problem #3: Faster Triples.
    ? Description:
*/

#include <iostream>
using namespace std;

// int countPrimes(int n) {
//     bool isPrime{ true };
//     int counter{ 0 };
//     if (n <= 1) {
//         cout << 0;
//         return 0;
//     }
//     else {
//         for (int number = 2; number < n; ++number) {
//             for (int i = 2; i < number; ++i) {
//                 if (number % i == 0) {
//                     isPrime = false;
//                     break;
//                 }
//                 isPrime = true;
//             }
//             if (isPrime) {
//                 counter++;
//             }
//         }
//     }
//     cout << "Count = " << counter;
//     return counter;
// }
int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";
    int n, m, w;
    cout << "Enter Three Numbers = ";
    cin >> n >> m >> w;
    int count{ 0 };
    for (int a = 1; a <= n; ++a)
        for (int b = a; b <= m; ++b)
            for (int c = 1; c <= w; ++c)
                if (a + b <= c)
                    count++;
    cout << count << "\n";
    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}