#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int day, int month, int year)
{
    if (year < 1)
        return false;
    if (month < 1 || month > 12)
        return false;

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear(year))
    {
        daysInMonth[1] = 29;
    }

    if (day < 1 || day > daysInMonth[month - 1])
        return false;

    return true;
}

int getDayOfWeek(int day, int month, int year)
{
    if (month < 3)
    {
        month += 12;
        year--;
    }

    int k = year % 100;
    int j = year / 100;

    int h = (day + ((13 * (month + 1)) / 5) + k + (k / 4) + (j / 4) - 2 * j) % 7;

    return (h + 5) % 7;
}

int main()
{
    int day, month, year;
    char dash1, dash2;

    cout << "Enter date in DD-MM-YYYY format: ";
    cin >> day >> dash1 >> month >> dash2 >> year;

    if (isValidDate(day, month, year))
    {
        cout << "Valid date!" << endl;

        int dayOfWeek = getDayOfWeek(day, month, year);

        switch (dayOfWeek)
        {
        case 0:
            cout << "Day of the week: Sunday" << endl;
            break;
        case 1:
            cout << "Day of the week: Monday" << endl;
            break;
        case 2:
            cout << "Day of the week: Tuesday" << endl;
            break;
        case 3:
            cout << "Day of the week: Wednesday" << endl;
            break;
        case 4:
            cout << "Day of the week: Thursday" << endl;
            break;
        case 5:
            cout << "Day of the week: Friday" << endl;
            break;
        case 6:
            cout << "Day of the week: Saturday" << endl;
            break;
        }
    }
    else
    {
        cout << "Invalid date!" << endl;
    }

    return 0;
}
