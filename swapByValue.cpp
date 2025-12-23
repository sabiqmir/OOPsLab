#include <iostream>
using namespace std;

void swapValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside function after swap: a = " << a << ", b = " << b << endl;
}

int main()
{
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "Before swap in main: x = " << x << ", y = " << y << endl;
    swapValue(x, y);
    cout << "After swap in main: x = " << x << ", y = " << y << endl;

    return 0;
}
