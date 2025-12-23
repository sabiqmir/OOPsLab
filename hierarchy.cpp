#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
protected:
    string name;

public:
    Shape(string n) : name(n) {}

    virtual double calculateArea() = 0;

    virtual void display()
    {
        cout << "Shape: " << name << endl;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : Shape("Circle"), radius(r) {}

    double calculateArea()
    {
        return 3.14159265359 * radius * radius;
    }

    void display()
    {
        Shape::display();
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w) {}

    double calculateArea()
    {
        return length * width;
    }

    void display()
    {
        Shape::display();
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h) : Shape("Triangle"), base(b), height(h) {}

    double calculateArea()
    {
        return 0.5 * base * height;
    }

    void display()
    {
        Shape::display();
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main()
{
    int choice;
    cout << "Select shape:" << endl;
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
        Circle c(r);
        c.display();
    }
    else if (choice == 2)
    {
        double l, w;
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter width: ";
        cin >> w;
        Rectangle rect(l, w);
        rect.display();
    }
    else if (choice == 3)
    {
        double b, h;
        cout << "Enter base: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;
        Triangle tri(b, h);
        tri.display();
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
