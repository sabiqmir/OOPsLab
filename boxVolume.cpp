#include <iostream>
using namespace std;

class Box
{
private:
    double length;
    double width;
    double height;

public:
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    void setDimensions(double l, double w, double h)
    {
        length = l;
        width = w;
        height = h;
    }

    double calculateVolume()
    {
        return length * width * height;
    }

    double calculateSurfaceArea()
    {
        return 2 * (length * width + width * height + height * length);
    }

    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Volume: " << calculateVolume() << endl;
        cout << "Surface Area: " << calculateSurfaceArea() << endl;
    }
};

int main()
{
    double l, w, h;
    cout << "Enter length of box: ";
    cin >> l;
    cout << "Enter width of box: ";
    cin >> w;
    cout << "Enter height of box: ";
    cin >> h;

    Box box(l, w, h);
    box.display();

    return 0;
}
