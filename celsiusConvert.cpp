#include <iostream>
using namespace std;

class Temperature
{
private:
    double celsius;

public:
    Temperature(double c) : celsius(c) {}

    double toFahrenheit()
    {
        return (celsius * 9.0 / 5.0) + 32.0;
    }

    void display()
    {
        cout << "Celsius: " << celsius << endl;
        cout << "Fahrenheit: " << toFahrenheit() << endl;
    }
};

int main()
{
    double c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    Temperature temp(c);
    temp.display();

    return 0;
}
