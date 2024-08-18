#include <iostream>
using namespace std;

int main() {
    int n = {}, number[200];
    int frequency[150 + 1] = { 0 };
    cout << "Enter The Number = ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> number[i];
        frequency[number[i]]++;
    }
    int maxPosition = -1;
    for (int i = 0; i < 151; ++i) {
        if (maxPosition == -1 || frequency[maxPosition] < frequency[i])
            maxPosition = i;
    }
    cout << maxPosition << " Repeated " << frequency[maxPosition] << " Times \n";

    return 0;
}