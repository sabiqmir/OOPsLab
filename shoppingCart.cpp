#include <iostream>
using namespace std;

class Item
{
private:
    double *price;
    int *quantity;

public:
    Item(double p, int q)
    {
        price = new double;
        quantity = new int;
        *price = p;
        *quantity = q;
    }

    ~Item()
    {
        delete price;
        delete quantity;
        cout << "Memory freed" << endl;
    }

    double calculateTotal()
    {
        return (*price) * (*quantity);
    }

    void display()
    {
        cout << "Price: Rs " << *price << endl;
        cout << "Quantity: " << *quantity << endl;
        cout << "Total Cost: Rs " << calculateTotal() << endl;
    }
};

int main()
{
    double p;
    int q;
    cout << "Enter price of item: ";
    cin >> p;
    cout << "Enter quantity: ";
    cin >> q;

    Item item(p, q);
    item.display();

    return 0;
}
