#include <iostream>
using namespace std;

int main()
{
    double balance = 1000.0;
    int choice;
    double amount;

    cout << "Welcome to Simple Banking System" << endl;
    cout << "Initial Balance: Rs " << balance << endl
         << endl;

    do
    {
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Balance Inquiry" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: Rs ";
            cin >> amount;

            if (amount > 0)
            {
                balance += amount;
                cout << "Deposit successful!" << endl;
                cout << "New balance: Rs " << balance << endl;
            }
            else
            {
                cout << "Invalid amount! Please enter a positive value." << endl;
            }
            break;

        case 2:
            cout << "Enter amount to withdraw: Rs ";
            cin >> amount;

            if (amount <= 0)
            {
                cout << "Invalid amount! Please enter a positive value." << endl;
            }
            else if (amount > balance)
            {
                cout << "Insufficient balance! Current balance: Rs " << balance << endl;
            }
            else
            {
                balance -= amount;
                cout << "Withdrawal successful!" << endl;
                cout << "Remaining balance: Rs " << balance << endl;
            }
            break;

        case 3:
            cout << "Current balance: Rs " << balance << endl;
            break;

        case 4:
            cout << "Thank you for using our banking system!" << endl;
            break;

        default:
            cout << "Invalid choice! Please enter a valid option (1-4)." << endl;
        }

    } while (choice != 4);

    return 0;
}
