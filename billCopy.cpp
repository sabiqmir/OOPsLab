#include <iostream>
using namespace std;

class Bill
{
private:
    int units;

public:
    Bill(int u) : units(u) {}

    Bill(const Bill &b)
    {
        units = b.units;
    }

    double calculateBill()
    {
        return units * 5.0;
    }

    void display()
    {
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill: Rs " << calculateBill() << endl;
    }
};

int main()
{
    int u;
    cout << "Enter units consumed: ";
    cin >> u;

    Bill original(u);
    cout << "\nOriginal Bill:" << endl;
    original.display();

    Bill copied = original;
    cout << "\nCopied Bill:" << endl;
    copied.display();

    return 0;
}
