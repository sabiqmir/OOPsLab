#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    Rectangle(double side) : length(side), width(side) {}

    double calculateArea()
    {
        return length * width;
    }

    double calculatePerimeter()
    {
        return 2 * (length + width);
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main()
{
    int choice;
    cout << "1. Rectangle (length and width)" << endl;
    cout << "2. Square (side)" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        double l, w;
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
        Rectangle rect(l, w);
        rect.display();
    }
    else if (choice == 2)
    {
        double side;
        cout << "Enter side: ";
        cin >> side;
        Rectangle square(side);
        square.display();
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
