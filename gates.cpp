#include <iostream>
using namespace std;

int main()
{
    bool a, b, c;
    cout << "Enter 3 bits, separated by a space: ";
    cin >> a >> b >> c;
    cout << "AND: " << ((a & b) & c) << endl;
    cout << "OR: " << ((a | b) | c) << endl;
    cout << "XOR: " << ((a ^ b) ^ c) << endl;
    cout << "NOT (First Bit): " << (!a) << endl;
}
