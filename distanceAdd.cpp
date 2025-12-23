#include <iostream>
using namespace std;

class Distance
{
private:
    double meters;
    double centimeters;

public:
    Distance(double m) : meters(m), centimeters(0) {}

    Distance(double m, double cm) : meters(m), centimeters(cm) {}

    double getTotalMeters()
    {
        return meters + (centimeters / 100.0);
    }

    Distance add(Distance d)
    {
        double total = getTotalMeters() + d.getTotalMeters();
        return Distance(total);
    }

    void display()
    {
        int m = (int)getTotalMeters();
        double cm = (getTotalMeters() - m) * 100.0;
        cout << m << " meters " << cm << " centimeters" << endl;
    }
};

int main()
{
    int choice;
    cout << "First Distance:" << endl;
    cout << "1. Enter meters only" << endl;
    cout << "2. Enter meters and centimeters" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    Distance d1(0);
    if (choice == 1)
    {
        double m;
        cout << "Enter meters: ";
        cin >> m;
        d1 = Distance(m);
    }
    else if (choice == 2)
    {
        double m, cm;
        cout << "Enter meters: ";
        cin >> m;
        cout << "Enter centimeters: ";
        cin >> cm;
        d1 = Distance(m, cm);
    }

    cout << "\nSecond Distance:" << endl;
    cout << "1. Enter meters only" << endl;
    cout << "2. Enter meters and centimeters" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    Distance d2(0);
    if (choice == 1)
    {
        double m;
        cout << "Enter meters: ";
        cin >> m;
        d2 = Distance(m);
    }
    else if (choice == 2)
    {
        double m, cm;
        cout << "Enter meters: ";
        cin >> m;
        cout << "Enter centimeters: ";
        cin >> cm;
        d2 = Distance(m, cm);
    }

    Distance total = d1.add(d2);
    cout << "\nTotal Distance: ";
    total.display();

    return 0;
}
