#include <iostream>
using namespace std;

int main() {
    int n, numbers[200];
    int max1{}, max2{};
    cout << "Enter Test Case Number = ";
    cin >> n;

    cout << "Enter " << n << " Numbers = ";
    for (int testCase = 0; testCase < n; ++testCase)
        cin >> numbers[testCase];

    if (numbers[0] >= numbers[1])
        max1 = numbers[0], max2 = numbers[1];
    else
        max1 = numbers[1], max2 = numbers[0];

    if (n <= 2) {
        cout << "Max1 = " << max1 << " , " << "Max2 = " << max2;
        return 0;
    }
    for (int i = 2; i < n; ++i) {
        if (max1 <= numbers[i])
            max2 = max1, max1 = numbers[i];
        else if (max2 < numbers[i])
            max2 = numbers[i];
    }
    cout << "Max1 = " << max1 << " , " << "Max2 = " << max2;

    return 0;
}