/*
    Homework [5] : Create your own Logic!.
    - Code By: Hesham Z. Alsaqqaf
    
    - Write a program :
    ● that reads in integers for 3 classroom-related variables:
        ○ Number of boys (nb), number of girls (ng), number of teachers (nt).
    ● Prepare and print a boolean variable for these cases:
    ● nb greater than 25.
    ● ng less than or equal to 30.
    ● nb > 20 and nt > 2, or ng > 30 and nt > 4.
    ● Either nb < 60 or ng < 70.
    ● Neither nb >= 60 nor ng >= 70.
    ● nb is 10 more than ng.
    ● The difference between nb and ng is more than 10 or nt > 5.
    ● Either nb is 10 more than ng, or ng is 15 more than nb.
*/
#include <iostream>
using namespace std;

int main()
{
    int nb, ng, nt;
    cout << "Enter number of boys = ";
    cin >> nb;
    cout << "Enter number of girls = ";
    cin >> ng;
    cout << "Enter number of teachers = ";
    cin >> nt;
    cout << "\n\t   Result All Questions This\n";

    // nb greater than 25
    cout << "- [A] = " << (nb > 25) << "\n";

    // ng less than or equal to 30
    cout << "- [B] = " << (ng <= 30) << "\n";

    // nb > 20 and nt > 2 or ng > 30 and nt > 4
    cout << "- [C] = " << (nb > 20 && nt > 2 || ng > 30 && nt > 4) << "\n";

    // Either nb < 60 or ng < 70
    cout << "- [D] = " << (nb < 60 || ng > 70) << "\n";

    // Neither nb >= 60 nor ng >= 70
    cout << "- [E] = " << (!(nb >= 60) || !(ng > 70)) << "\n";

    // nb is 10 more students than ng
    cout << "- [F] = " << (nb == ng + 10) << "\n";

    // Difference between nb and ng is more than 10 or nt > 5
    cout << "- [G] = " << (nb - ng > 10 || nt > 5) << "\n";

    // Either nb is 10 more students than ng or ng is 15 more students than nb
    cout << "- [H] = " << (nb == ng + 10 || ng == nb + 15) << "\n";

    cout << "\t\t\"Good bye guys\"\n\n";
    return 0;
}