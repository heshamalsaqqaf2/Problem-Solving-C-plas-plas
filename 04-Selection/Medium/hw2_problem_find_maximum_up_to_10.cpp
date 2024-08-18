/*
    # Homework Medium [2] : Problem #2: Find the Maximum of to 10.
    # Code By: Hesham Z. Alsaqqaf.
*/
#include <iostream>
using namespace std;
int main()
{
    int first_number,
        start{2},
        end{10},
        num;

    cout << "Enter Integars Number Please : \n";
    cin >> first_number;
    if (start <= first_number <= end)
    {
        cout << "Enter " << first_number << " Numbers Pleas\n";
    }
    
    if ( 2 <= first_number <= 5) {
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
    }

    if (2 <= first_number <= 10) {
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
        cin >> num; if (num > first_number) first_number = num;
    }

    else cout <<"Sorry Found Largest Numbers !!!\n";

    cout << "\n" << first_number << "\n";

    cout << "\t\"Good bye guys By Hesham\"\n\n";
    return 0;
}