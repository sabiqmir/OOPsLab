#include <iostream>
using namespace std;
int main()
{
    int month, year;

    cout << "Enter month (1-12) and year: ";
    cin >> month >> year;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "Number of days: 31" << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "Number of days: 30" << endl;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout << "Number of days: 29" << endl;
        }
        else
        {
            cout << "Number of days: 28" << endl;
        }
        break;
    default:
        cout << "Invalid month input." << endl;
        break;
    }
    return 0;
}
