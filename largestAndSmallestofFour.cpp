#include <iostream>
using namespace std;

int main()
{
    int x, y, z, w;
    cout << "Enter the four numbers: ";
    cin >> x >> y >> z >> w;
    x > y   ? x > z ? x > w ? cout << x << " is the greatest.\n" : cout << w << " is the greatest.\n" : z > w ? cout << z << " is the greatest.\n"
                                                                                                              : cout << w << " is the greatest.\n"
    : y > z ? y > w ? cout << y << " is the greatest" : cout << w << " is the greatest.\n"
    : z > w ? cout << z << " is the greatest.\n"
            : cout << w << " is the greatest.\n";
    x < y   ? x < z ? x < w ? cout << x << " is the smallest.\n" : cout << w << " is the smallest.\n" : z < w ? cout << z << " is the smallest.\n"
                                                                                                              : cout << w << " is the smallest.\n"
    : y < z ? y < w ? cout << y << " is the smallest" : cout << w << " is the smallest.\n"
    : z < w ? cout << z << " is the smallest.\n"
            : cout << w << " is the smallest.\n";
}
