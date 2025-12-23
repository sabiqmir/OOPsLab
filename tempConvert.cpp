#include <iostream>
using namespace std;

class Temperature
{
private:
    double celsius;
    double fahrenheit;

public:
    Temperature() : celsius(0), fahrenheit(0) {}

    void celsiusToFahrenheit(double c)
    {
        celsius = c;
        fahrenheit = (c * 9.0 / 5.0) + 32.0;
    }

    void fahrenheitToCelsius(double f)
    {
        fahrenheit = f;
        celsius = (f - 32.0) * 5.0 / 9.0;
    }

    void displayCelsiusToFahrenheit()
    {
        cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;
    }

    void displayFahrenheitToCelsius()
    {
        cout << fahrenheit << " Fahrenheit = " << celsius << " Celsius" << endl;
    }
};

int main()
{
    Temperature temp;
    int choice;
    double value;

    cout << "Temperature Conversion" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> value;
        temp.celsiusToFahrenheit(value);
        temp.displayCelsiusToFahrenheit();
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> value;
        temp.fahrenheitToCelsius(value);
        temp.displayFahrenheitToCelsius();
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
