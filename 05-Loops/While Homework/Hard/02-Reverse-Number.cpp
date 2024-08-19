/**
 * @version   0.1
 * @date      2024-08-19
 * @author    Hesham Z. Alsaqqaf | heshamdev2@gmail.com.
 * @file      Homework Hard [2] : Problem #2: Reverse Number.
 * @details   Description.
                ● Read an integer N, then find its reverse integer R
                  ○ //! Print R R * 3
                ● input ⇒ Output
                  ○ //? 2567  ⇒ 7652 22956
 *
 * @copyright Copyright Programmer/Hesham (c) 2024.
 */

#include <iostream>
using namespace std;

int main() {
  cout << "\n\tHello, Start The Program.\n";
  cout << "==============================================\n";

  int number{};
  cout << "Enter The Number = ";
  cin >> number;

  int reverseNumber{ 0 };
  while (number > 0) {

    int lastDigit = number % 10; // Get Last Digit
    number /= 10; // Remove Last Digit

    /**
     * @details Now Can You Convert In [ 7652 ] Digit To [ 7652 ] Real Number.
     *
     * @protocol = [ 7 * 10 + 6 = 76 ], [ 76 * 10 + 5 = 765 ], [ 765 * 10 + 2 = 7652 ]
     *                reverseNumber = reverseNumber * 10 + lastDigit;
     */
    reverseNumber = reverseNumber * 10 + lastDigit;
  }
  cout << "Result:(R R * 3)= " << reverseNumber << " => " << reverseNumber * 3; // 22956

  cout << "\n==============================================\n";
  cout << "\tGoodbye, End The Program.\n";

  return 0;
}