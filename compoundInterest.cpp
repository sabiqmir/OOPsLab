#include <iostream>
#include <cmath>
using namespace std;

class CompoundInterest
{
private:
    double principal;
    double rate;
    double time;
    int n;

public:
    CompoundInterest(double p, double r, double t, int compounding = 1)
        : principal(p), rate(r), time(t), n(compounding) {}

    double calculateAmount()
    {
        return principal * pow((1 + rate / (n * 100.0)), n * time);
    }

    double calculateCompoundInterest()
    {
        return calculateAmount() - principal;
    }

    void display()
    {
        cout << "Principal: Rs " << principal << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Time: " << time << " years" << endl;
        cout << "Compounding frequency: " << n << " times per year" << endl;
        cout << "Compound Interest: Rs " << calculateCompoundInterest() << endl;
        cout << "Total Amount: Rs " << calculateAmount() << endl;
    }
};

int main()
{
    double p, r, t;
    int n, choice;

    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time period (years): ";
    cin >> t;

    cout << "\n1. Annual compounding (default)" << endl;
    cout << "2. Custom compounding frequency" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        CompoundInterest ci(p, r, t);
        ci.display();
    }
    else if (choice == 2)
    {
        cout << "Enter compounding frequency (per year): ";
        cin >> n;
        CompoundInterest ci(p, r, t, n);
        ci.display();
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
