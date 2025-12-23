#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;

    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = factorial(num);
    if (result == -1)
    {
        cout << "Factorial not defined for negative numbers" << endl;
    }
    else
    {
        cout << "Factorial of " << num << " is " << result << endl;
    }

    return 0;
}
