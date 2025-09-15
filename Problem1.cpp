// A semiconductor manufacturer sells three types of
// microprocessors: 8-bit, 16-bit and 32-bit. It differentiates between three types of customers: industry, government, and
// university. It has the following discount policy that depends on
// the type of microprocessor, the amount of order, and the type
// of customer:
// For 32-bit microprocessor, if the order is for less .han Rs.
// 50,000, allow 5 % discount to industrial customers and 6.5 %
// discount to the government agencies. If the order is Rs. 50,000
// or more, a discount of 7.5 % and 8.5 % respectively is given
// to the industrial customers and the government agencies. A discount of 10 % is given to both industrial customers and
// government agencies if the order is more than Rs. 1,00,000.
// Universities get a discount of 7.5 % irrespective of the amount
// of order.
// For 16-bh microprocessors, no discount is given for orders less
// than Rs 10,000. For orders of Rs 10,000 or more, 5 % discount
// is given to the industrial customers and universities, and 6 %
// discount is given to the government agencies.
// For 8-bit microprocessors, a flat discount of 10 % is given to
// all the three types of customers for any order.
// Write a program that reads the type of the customer, the type
// of the product, the amount of the order, and prints the net
// amount payable by the customer.
#include <iostream>
using namespace std;
int main()
{
    int op, microp, amount;
    cout << "Enter User Type: " << endl;
    cout << "1.Industry" << endl;
    cout << "2.Government" << endl;
    cout << "3.University" << endl;
    cin >> op;
    cout << "Enter Product Type: " << endl;
    cout << "1.32-bit microprocessor" << endl;
    cout << "2.16-bit microprocessor" << endl;
    cout << "3.8-bit microprocessor" << endl;
    cin >> microp;
    cout << "Enter Amount :" << endl;
    cin >> amount;
    switch (microp)
    {
    case 1:
        if (amount < 50000)
        {
            if (op == 1)
            {
                cout << "Total : " << amount - (amount * 0.05);
            }
            if (op == 2)
            {
                cout << "Total : " << amount - (amount * 0.065);
            }
            if (op == 3)
            {
                cout << "Total : " << amount - (amount * 0.075);
            }
        }
        if (amount >= 50000 && amount < 100000)
        {
            if (op == 1)
            {
                cout << "Total : " << amount - (amount * 0.075);
            }
            if (op == 2)
            {
                cout << "Total : " << amount - (amount * 0.085);
            }
            if (op == 3)
            {
                cout << "Total : " << amount - (amount * 0.075);
            }
        }
        if (amount >= 100000)
        {
            if (op == 1)
            {
                cout << "Total : " << amount - (amount * 0.1);
            }
            if (op == 2)
            {
                cout << "Total : " << amount - (amount * 0.1);
            }
            if (op == 3)
            {
                cout << "Total : " << amount - (amount * 0.075);
            }
        }
        break;
    case 2:
        if (amount < 10000)
        {
            if (op == 1)
            {
                cout << "Total : " << amount;
            }
            if (op == 2)
            {
                cout << "Total : " << amount;
            }
            if (op == 3)
            {
                cout << "Total : " << amount;
            }
        }
        if (amount >= 10000 && amount < 100000)
        {
            if (op == 1)
            {
                cout << "Total : " << amount - (amount * 0.05);
            }
            if (op == 2)
            {
                cout << "Total : " << amount - (amount * 0.06);
            }
            if (op == 3)
            {
                cout << "Total : " << amount - (amount * 0.05);
            }
        }

        break;
    case 3:
        cout << "Total : " << amount - (amount * 0.1);
        break;

    default:
        break;
    }
}
