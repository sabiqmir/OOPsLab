#include <iostream>
#include <cmath>
using namespace std;

double area(double radius)
{
    return 3.14159265359 * radius * radius;
}

double area(double length, double breadth)
{
    return length * breadth;
}

double area(double base, double height, bool isTriangle)
{
    if (isTriangle)
    {
        return 0.5 * base * height;
    }
    return base * height;
}

int main()
{
    int choice;

    cout << "Choose shape:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        double r;
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area of circle: " << area(r) << endl;
    }
    else if (choice == 2)
    {
        double l, b;
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        cout << "Area of rectangle: " << area(l, b) << endl;
    }
    else if (choice == 3)
    {
        double base, height;
        cout << "Enter base and height: ";
        cin >> base >> height;
        cout << "Area of triangle: " << area(base, height, true) << endl;
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
