#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    double s1, s2, s3;

    cout << "Enter the lengths of three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1) && s1 > 0 && s2 > 0 && s3 > 0)
    {
        cout << "It is a valid triangle." << endl;

        if (s1 == s2 && s2 == s3)
        {
            cout << "Type: Equilateral" << endl;
        }
        else if (s1 == s2 || s1 == s3 || s2 == s3)
        {
            cout << "Type: Isosceles" << endl;
        }
        else
        {
            cout << "Type: Scalene" << endl;
        }

        double sides[] = {s1, s2, s3};
        sort(sides, sides + 3);

        if (pow(sides[0], 2) + pow(sides[1], 2) == pow(sides[2], 2))
        {
            cout << "It is also a Right-angled Triangle." << endl;
        }
    }
    else
    {
        cout << "It is not a valid triangle." << endl;
    }

    return 0;
}
