#include <iostream>
using namespace std;

int main() {
    int n{}, number[200];
    cout << "Enter The Number = ";
    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> number[i];
    for (int i = 0; i < n / 2; ++i) {
        int lastItemsInArray = n - i - 1; // Get Last Index
        int swap = number[i];
        number[i] = number[lastItemsInArray];
        number[lastItemsInArray] = swap;
    }
    for (int i = 0; i < n; ++i)
        cout << number[i] << " ";
    return 0;
}