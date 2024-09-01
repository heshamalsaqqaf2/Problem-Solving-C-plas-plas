#include <iostream>
using namespace std;

int main() {
    int n, numbers[200];
    cout << "Enter Test Case Number = ";
    cin >> n;

    cout << "Enter " << n << " Numbers = ";
    for (int testCase = 0; testCase < n; ++testCase)
        cin >> numbers[testCase];

    /**
     * @details Nested Loops Account =
     *          Equation:  => N1 + N2 + N3 + .... +  N ====> Summations N * (N - 1)
     *                     => ( N * ((N-1)/1) ) / 2
     *                     => 4 * ((4-1)/1) / 2
     *                     => (4 * 3) / 2 = 12 / 2
     *                     => 6
     */
    int maxIndex1{ -1 }, maxIndex2{ -1 }; // TODO: Variables Not Initialize
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (maxIndex1 == -1)
                maxIndex1 = i, maxIndex2 = j; // TODO: Initialize Now
            else if (numbers[maxIndex1] + numbers[maxIndex2] < numbers[i] + numbers[j])
                maxIndex1 = i, maxIndex2 = j;
        }
    }
    cout << numbers[maxIndex1] << " , " << numbers[maxIndex2];
    return 0;
}