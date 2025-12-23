#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double balance = 50000.00;
    int choice;
    double amount;

    do
    {
        cout << "1. Balance Inquiry\n";
        cout << "2. Cash Withdrawal\n";
        cout << "3. Cash Deposit\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cout << fixed << setprecision(2);

        switch (choice)
        {
        case 1:
            cout << "Your current balance is: Rs. " << balance << endl;
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawal successful. Current balance: Rs. " << balance << endl;
            }
            else if (amount > balance)
            {
                cout << "Insufficient balance." << endl;
            }
            else
            {
                cout << "Invalid withdrawal amount." << endl;
            }
            break;
        case 3:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0)
            {
                balance += amount;
                cout << "Deposit successful. Current balance: Rs. " << balance << endl;
            }
            else
            {
                cout << "Invalid deposit amount." << endl;
            }
            break;
        case 4:
            cout << "Thank you for using the ATM." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
