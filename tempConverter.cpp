#include <iostream>
#include <iomanip>
using namespace std;

template <typename T>
void convertAndCompare(T tempCelsius)
{
    T tempFahrenheit = (tempCelsius * 9.0 / 5.0) + 32.0;
    T tempKelvin = tempCelsius + 273.15;

    cout << fixed << setprecision(10);
    cout << "Celsius: " << tempCelsius << endl;
    cout << "Fahrenheit: " << tempFahrenheit << endl;
    cout << "Kelvin: " << tempKelvin << endl;
}

int main()
{
    float celsius_f = 37.5f;
    double celsius_d = 37.5;

    cout << "\nUsing float:" << endl;
    convertAndCompare(celsius_f);
    cout << "\nUsing double:" << endl;
    convertAndCompare(celsius_d);

    float small_f = 0.000000123456789f;
    double small_d = 0.000000123456789;

    cout << "\nUsing float:" << endl;
    convertAndCompare(small_f);
    cout << "\nUsing double:" << endl;
    convertAndCompare(small_d);

    return 0;
}
