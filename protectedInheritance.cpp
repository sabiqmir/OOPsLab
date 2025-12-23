#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    string accountNumber;
    string holderName;
    double balance;

public:
    Account(string acc, string name, double bal)
        : accountNumber(acc), holderName(name), balance(bal) {}

    void displayAccount()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << holderName << endl;
        cout << "Balance: Rs " << balance << endl;
    }

    double getBalance()
    {
        return balance;
    }
};

class SavingsAccount : public Account
{
private:
    double interestRate;

public:
    SavingsAccount(string acc, string name, double bal, double rate)
        : Account(acc, name, bal), interestRate(rate) {}

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: Rs " << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: Rs " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayBalance()
    {
        cout << "Current Balance: Rs " << balance << endl;
    }

    void display()
    {
        displayAccount();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main()
{
    string acc, name;
    double bal, rate;

    cout << "Enter account number: ";
    getline(cin, acc);
    cout << "Enter account holder name: ";
    getline(cin, name);
    cout << "Enter initial balance: ";
    cin >> bal;
    cout << "Enter interest rate: ";
    cin >> rate;

    SavingsAccount account(acc, name, bal, rate);
    account.display();

    int choice;
    double amount;

    do
    {
        cout << "\n1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            account.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 3:
            account.displayBalance();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
