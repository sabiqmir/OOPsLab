#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    void setRadius(double r)
    {
        radius = r;
    }

    double getRadius()
    {
        return radius;
    }

    double calculateArea()
    {
        return 3.14159265359 * radius * radius;
    }

    double calculateCircumference()
    {
        return 2 * 3.14159265359 * radius;
    }

    void display()
    {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Circumference: " << calculateCircumference() << endl;
    }
};

int main()
{
    double r;
    cout << "Enter radius of circle: ";
    cin >> r;

    Circle circle(r);
    circle.display();

    return 0;
}
