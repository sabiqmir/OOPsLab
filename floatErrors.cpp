#include <iostream>
#include <iomanip>
using namespace std;
void errorsInFloat()
{
    float a_f = 10.0f, b_f = 0.3f, c_f = 3.0f;
    double a_d = 10.0, b_d = 0.3, c_d = 3.0;

    float result1_f = (a_f * b_f) / c_f;
    float result2_f = (a_f / c_f) * b_f;

    double result1_d = (a_d * b_d) / c_d;
    double result2_d = (a_d / c_d) * b_d;

    cout << fixed << setprecision(20);
    cout << "Using float:" << endl;
    cout << "(10.0f * 0.3f) / 3.0f = " << result1_f << endl;
    cout << "(10.0f / 3.0f) * 0.3f = " << result2_f << endl;
    cout << "Difference (float): " << (result1_f - result2_f) << endl;

    cout << "\nUsing double:" << endl;
    cout << "(10.0 * 0.3) / 3.0 = " << result1_d << endl;
    cout << "(10.0 / 3.0) * 0.3 = " << result2_d << endl;
    cout << "Difference (double): " << (result1_d - result2_d) << endl;
}

void findEpsilon()
{
    float floatEpsilon = 1.0f;
    while ((1.0f + floatEpsilon / 2.0f) != 1.0f)
    {
        floatEpsilon /= 2.0f;
    }
    cout << "Epsilon for float: " << floatEpsilon << endl;

    double doubleEpsilon = 1.0;
    while ((1.0 + doubleEpsilon / 2.0) != 1.0)
    {
        doubleEpsilon /= 2.0;
    }
    cout << "Epsilon for double: " << doubleEpsilon << endl;
}

int main()
{
    errorsInFloat();
    findEpsilon();
    return 0;
}
