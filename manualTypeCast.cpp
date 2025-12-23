#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Enter an arithmetic expression: ";
    double num1, num2, num3;
    char op1, op2;
    cin >> num1 >> op1 >> num2 >> op2 >> num3;

    double result;

    if (op2 == '*' || op2 == '/')
    {
        if (op2 == '*')
        {
            result = num2 * num3;
        }
        else
        {
            result = num2 / num3;
        }
        if (op1 == '+')
        {
            result = num1 + result;
        }
        else
        {
            result = num1 - result;
        }
    }
    else
    {
        if (op1 == '+')
        {
            result = num1 + num2;
        }
        else
        {
            result = num1 - num2;
        }
        if (op2 == '+')
        {
            result = result + num3;
        }
        else
        {
            result = result - num3;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Applying manual type promotion (evaluating as double):" << endl;
    cout << "Result: " << result << endl;

    return 0;
}
