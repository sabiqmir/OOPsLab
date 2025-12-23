#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class BankAccount {
protected:
    double balance;
public:
    BankAccount(double bal) : balance(bal) {}
    virtual double interest() {
        return 0.0;
    }
    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount {
private:
    const double rate = 0.04;
public:
    SavingsAccount(double bal) : BankAccount(bal) {}
    double interest() {
        return balance * rate;
    }
};

class FixedDeposit : public BankAccount {
private:
    const double rate = 0.07;
public:
    FixedDeposit(double bal) : BankAccount(bal) {}
    double interest() {
        return balance * rate;
    }
};

class RecurringDeposit : public BankAccount {
private:
    const double rate = 0.06;
public:
    RecurringDeposit(double bal) : BankAccount(bal) {}
    double interest() {
        return balance * rate;
    }
};

int main() {
    vector<BankAccount*> accounts;
    accounts.push_back(new SavingsAccount(10000.0));
    accounts.push_back(new FixedDeposit(50000.0));
    accounts.push_back(new RecurringDeposit(12000.0));

    cout << fixed << setprecision(2);
    for (const auto& acc : accounts) {
        cout << "Calculated Interest: " << acc->interest() << endl;
    }

    for (auto& acc : accounts) {
        delete acc;
    }
    return 0;
}
