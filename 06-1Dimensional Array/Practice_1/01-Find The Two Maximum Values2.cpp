#include <iostream>
using namespace std;

int main() {
    int n, numbers[200];
    cin >> n;

    // For Input Array Of Numbers Of Test Cases Number
    for (int i = 0; i < n; ++i)
        cin >> numbers[i];

    // For Get First Maximum Value
    int maxIndex1 = 0;
    for (int i = 1; i < n; ++i) {
        if (numbers[maxIndex1] < numbers[i])
            maxIndex1 = i;
    }

    /**
     * @author For Get Second Maximum Value.
     * @code
     *       int maxIndex2 = 0;
             for (int i = 1; i < n; ++i) {
                 if (numbers[i] != maxIndex1 && numbers[maxIndex2] < numbers[i])
                     maxIndex2 = i;
             }
     * @endcode
     *
     * @bug After Code Find Bug If MaxIndex1 This Is Maximum Value For Index[0].
     *          Array Of Numbers = 70 60 50 40 => [ MaxIndex1 = 0 ] == 70.
     *      Start MaxIndex2 Initialize For Index[0]
     *          Array Of Numbers = 70 60 50 40 => [ MaxIndex2 = 0 ] == 70.
     * @exception Exception-Object 03-Find The Two Maximum Values Solution Bug.cpp
     */
    int maxIndex2 = 0;
    for (int i = 1; i < n; ++i) {
        if (numbers[i] != maxIndex1 && numbers[maxIndex2] < numbers[i])
            maxIndex2 = i;
    }
    cout << "Max Value 1 = " << numbers[maxIndex1] << "Max Value 2 = " << numbers[maxIndex2];
    return 0;
}