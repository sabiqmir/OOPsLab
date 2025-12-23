#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n > 0)
        n & 1 ? cout << n << " is  positive odd." : cout << n << " is positive even.";
    else if (n < 0)
        n & 1 ? cout << n << " is  negative odd." : cout << n << " is negative even.";
    else
        cout << n << " = 0";
}
