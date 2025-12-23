#include <iostream>
#include <limits>
using namespace std;
void calculateInt()
{
    int a, b;
    char op;
    cout << "Enter integer expression (e.g., 2 + 3): ";
    cin >> a >> op >> b;

    long long result_check;
    switch (op)
    {
    case '+':
        result_check = (long long)a + b;
        break;
    case '-':
        result_check = (long long)a - b;
        break;
    case '*':
        result_check = (long long)a * b;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Error: Division by zero." << endl;
            return;
        }
        result_check = a / b;
        break;
    default:
        cout << "Invalid operator." << endl;
        return;
    }

    if (result_check > numeric_limits<int>::max())
    {
        cout << "Warning: Integer overflow detected!" << endl;
    }
    else if (result_check < numeric_limits<int>::min())
    {
        cout << "Warning: Integer underflow detected!" << endl;
    }
    else
    {
        cout << "Result: " << (int)result_check << endl;
    }
}

void calculateFloat()
{
    float a, b;
    char op;
    cout << "Enter float expression (e.g., 2.5 * 1.5): ";
    cin >> a >> op >> b;

    double result_check;
    switch (op)
    {
    case '+':
        result_check = (double)a + b;
        break;
    case '-':
        result_check = (double)a - b;
        break;
    case '*':
        result_check = (double)a * b;
        break;
    case '/':
        if (b == 0)
        {
            cout << "Error: Division by zero." << endl;
            return;
        }
        result_check = a / b;
        break;
    default:
        cout << "Invalid operator." << endl;
        return;
    }

    if (result_check > numeric_limits<float>::max())
    {
        cout << "Warning: Float overflow detected!" << endl;
    }
    else if (result_check > 0 && result_check < numeric_limits<float>::min())
    {
        cout << "Warning: Float underflow detected (result too close to zero)!" << endl;
    }
    else
    {
        cout << "Result: " << (float)result_check << endl;
    }
}

int main()
{
    int choice;
    cout << "Select data type for calculator:" << endl;
    cout << "1. Integer" << endl;
    cout << "2. Float" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        calculateInt();
    }
    else if (choice == 2)
    {
        calculateFloat();
    }
    else
    {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
