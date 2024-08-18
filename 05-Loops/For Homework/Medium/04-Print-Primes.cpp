/*
    # Created On 16/08/2024.
    # Code By: Hesham Z. Alsaqqaf.
    # Homework Medium [4] : Problem #4: Print Primes.
    ? Description:
        ● Read in a positive integer N (< 500), then print all prime numbers <= N
            ○ The output should be separated by commas, as below
                !■ Don’t print a comma after the last number
        ● Example input ⇒ output
            ○ TODO: 18 ⇒ 2,3,5,7,11,13,17
                ■ Note how there is NO comma after the last number!
*/

#include <iostream>
using namespace std;

int main() {
    cout << "\n\tHello, Start The Program.\n";
    cout << "==============================================\n";

    int target{};
    cout << "Enter The Number Less Than 500 = ";
    cin >> target;

    bool isPrime{ true };
    bool isFirstNumber{ true };

    //* This Is The Loop Print All Prime Number Of Target Number 
    if (target <= 1)
        cout << 0 << "\n";
    else {
        for (int number = 2; number < target; ++number) {
            //* This Is The Loop Check Is This Prime Or Not Prime 
            for (int i = 2; i < number; ++i) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
                else
                    isPrime = true;
            }
            if (isPrime) {
                // TODO This Conditions First Times Only Ignore Comma
                if (!isFirstNumber)
                    cout << ",";
                cout << number;
                isFirstNumber = false;
            }
        }
    }
    cout << "\n==============================================\n";
    cout << "\tGoodbye, End The Program.\n";
    return 0;
}