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
                ● //? Using 3 loops implemented the slow version
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

    // This Is Code Using 3 Nested Loops Very Slower Triples.
    for (int a = 1; a <= n; ++a)
        for (int b = a; b <= m; ++b)
            for (int c = 1; c <= w; ++c)
                if (a + b <= c)
                    count++;
    cout << "Triples = " << count << "\n";

    cout << "==============================================\n";
    cout << "\tGoodbye, End The Program.\n";

    return 0;
}