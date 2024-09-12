#include <iostream>
using namespace std;
int main()
{
	const int sizeArray = 200;
	int numbers[sizeArray], n;

	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	bool isIncreasing{ true };
	for (int i = 1; i < n; ++i) {
		if (numbers[i] < numbers[i - 1]) { // First = 20 < 10
			isIncreasing = false;
			break;
		}
	}
	if (isIncreasing)
		cout << "YES\n";
	else
		cout << "NO\n";

}
