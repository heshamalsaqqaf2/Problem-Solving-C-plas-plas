/*
    Homework [1] : Guess the run-time output :
    - Pass over the code line by line by yourself = true
    - Decide What is the output of this code? = writing
    - Then run it and compare against yours! = true
*/
#include <iostream>
using namespace std;

// Output all programm :
/*


Guess the output
---
25
7
7


Practice makes perfect
*/

int main()
{
    /*
        The output this line :
        - First => Print : 2 empty line
        - Second => Print message && empty space last after word "the" : Guess the output
        - thrid => print char - 3 : ---
    */
    cout << "\n\nGuess the "
        << "output\n---\n";

    /*
        The output this line :
        - First => Print result value operation [+] && [-] : 25
    */
    cout << 10 + 20 - 5 << endl;

    /*
        The output this line :
        - First => Print result value operation [/] : 7
    */
    cout << 14 / 2 << endl;

    /*
        The output this line :
        - First => Print result value operation [-] : 7
    */
    cout << 17 - 10 << endl;

    /*
        The output this line :
        - First => Print empty line
    */
    cout << endl;

    /*
        The output this line :
        - First => Print empty line
        - Second => Print message
    */
    cout << "\nPractice makes perfect";

    return 0; // This finshed programm runing.

    /*
        The output this line :
        - First => can't print this line becouse keyword [ return 0 ] its is finshing programm
            after [ return 0] not a compilar c++ not found
    */
    cout << "\n\nBye\n\n";
}