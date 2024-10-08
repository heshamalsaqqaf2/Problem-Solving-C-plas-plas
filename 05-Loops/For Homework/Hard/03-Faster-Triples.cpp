/**
 * @version   0.1
 * @date      2024-08-19
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Homework Hard [3] : Problem #3: Faster Triples.
 * @details   Description.
                ● Read positive n, m, w, Find all triples where A + B <= C, and:
                    ○ 1 <= A <= n
                    ○ A <= B <= m
                    ○ 1 <= C <= w
                ● Example:
                    ○ 100 200 20 ⇒ 715
                ● After File Using 3 loops implemented the slow version
                ● Find a condition that allows us remove the last loop
                    ○ //? Overall 2 nested loops only
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int n, m, w;
    cout << "Enter Three Numbers = ";
    cin >> n >> m >> w;
    int count{ 0 };

    // TODO: This Is Code Using 2 Nested Loops Very Faster Triples.
    for (int a = 1; a <= n; ++a)
        for (int b = a; b <= m; ++b) {
            int c = a + b;
            if (1 <= c && c <= w)
                /**
                 * @protocol
                 *    ? count += w - c + 1;
                 *
                 *    W - C = 0 -> Zero-Based
                 *    Zero-Based - Zero-Based = Zero-Based
                 *    Zero-Based - Zero-Based = Zero-Based + 1
                 *    W - C + 1 = 1 -> One-Based
                 */
                count += w - c + 1;
        }
    cout << "Items Triples = " << count << "\n";


    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}