#include <iostream>
using namespace std;

class Distance
{
private:
    double meters;

public:
    Distance(double m) : meters(m) {}

    void setMeters(double m)
    {
        meters = m;
    }

    double getMeters()
    {
        return meters;
    }

    double toKilometers()
    {
        return meters / 1000.0;
    }

    double toCentimeters()
    {
        return meters * 100.0;
    }

    double toMillimeters()
    {
        return meters * 1000.0;
    }

    void display()
    {
        cout << "Distance in meters: " << meters << endl;
        cout << "Distance in kilometers: " << toKilometers() << endl;
        cout << "Distance in centimeters: " << toCentimeters() << endl;
        cout << "Distance in millimeters: " << toMillimeters() << endl;
    }
};

int main()
{
    double m;
    cout << "Enter distance in meters: ";
    cin >> m;

    Distance distance(m);
    distance.display();

    return 0;
}
