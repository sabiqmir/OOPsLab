#include <iostream>
using namespace std;
int main()
{
    float units, bill = 0.0, surcharge = 0.0, total_bill;
    cout << "Enter total units consumed: ";
    cin >> units;

    if (units <= 100)
    {
        bill = units * 1.5;
    }
    else if (units <= 200)
    {
        bill = 100 * 1.5 + (units - 100) * 2.5;
    }
    else
    {
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;
    }

    if (bill > 500)
    {
        surcharge = bill * 0.10;
    }

    total_bill = bill + surcharge;
    cout << "Electricity Bill = Rs. " << total_bill << endl;

    return 0;
}
