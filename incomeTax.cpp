#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double income, tax = 0.0;

    cout << "Enter annual income: ";
    cin >> income;

    if (income > 1000000)
    {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
    }
    else if (income > 500000)
    {
        tax = (250000 * 0.05) + (income - 500000) * 0.20;
    }
    else if (income > 250000)
    {
        tax = (income - 250000) * 0.05;
    }

    cout << fixed << setprecision(2);
    cout << "Taxable Income: Rs. " << income << endl;
    cout << "Calculated Tax: Rs. " << tax << endl;

    return 0;
}
