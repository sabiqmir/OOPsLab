#include <iostream>
using namespace std;

class Interest
{
private:
    double principal;
    double rate;
    double time;

public:
    Interest(double p, double r, double t) : principal(p), rate(r), time(t) {}

    void setValues(double p, double r, double t)
    {
        principal = p;
        rate = r;
        time = t;
    }

    double calculateSimpleInterest()
    {
        return (principal * rate * time) / 100.0;
    }

    void display()
    {
        cout << "Principal: Rs " << principal << endl;
        cout << "Rate: " << rate << "%" << endl;
        cout << "Time: " << time << " years" << endl;
        cout << "Simple Interest: Rs " << calculateSimpleInterest() << endl;
        cout << "Total Amount: Rs " << (principal + calculateSimpleInterest()) << endl;
    }
};

int main()
{
    double p, r, t;
    cout << "Enter principal amount: ";
    cin >> p;
    cout << "Enter rate of interest: ";
    cin >> r;
    cout << "Enter time period (years): ";
    cin >> t;

    Interest interest(p, r, t);
    interest.display();

    return 0;
}
