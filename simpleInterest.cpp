#include <iostream>
using namespace std;

float simpleInterest(float p, float r = 5.0, float t = 2.0)
{
    return (p * r * t) / 100.0;
}

int main()
{
    float principal, rate, time;
    int choice;

    cout << "Choose option:" << endl;
    cout << "1. Calculate with default rate and time (5.0%, 2.0 years)" << endl;
    cout << "2. Calculate with custom rate (default time 2.0 years)" << endl;
    cout << "3. Calculate with custom rate and time" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter principal amount: ";
    cin >> principal;

    if (choice == 1)
    {
        cout << "Simple Interest: " << simpleInterest(principal) << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter rate: ";
        cin >> rate;
        cout << "Simple Interest: " << simpleInterest(principal, rate) << endl;
    }
    else if (choice == 3)
    {
        cout << "Enter rate: ";
        cin >> rate;
        cout << "Enter time: ";
        cin >> time;
        cout << "Simple Interest: " << simpleInterest(principal, rate, time) << endl;
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
