#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    void setDimensions(double l, double b)
    {
        length = l;
        breadth = b;
    }

    double calculateArea()
    {
        return length * breadth;
    }

    double calculatePerimeter()
    {
        return 2 * (length + breadth);
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main()
{
    double l, b;
    cout << "Enter length of rectangle: ";
    cin >> l;
    cout << "Enter breadth of rectangle: ";
    cin >> b;

    Rectangle rect(l, b);
    rect.display();

    return 0;
}
