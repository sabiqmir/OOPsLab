#include <iostream>
#include <string>
using namespace std;

class ElectricityBill
{
private:
    string consumerName;
    int unitsConsumed;
    double chargePerUnit;

public:
    ElectricityBill() : consumerName(""), unitsConsumed(0), chargePerUnit(0) {}

    void inputDetails()
    {
        cout << "Enter consumer name: ";
        cin.ignore();
        getline(cin, consumerName);
        cout << "Enter units consumed: ";
        cin >> unitsConsumed;
        cout << "Enter charge per unit: Rs ";
        cin >> chargePerUnit;
    }

    double calculateBill()
    {
        double totalBill = unitsConsumed * chargePerUnit;

        if (unitsConsumed > 300)
        {
            totalBill += totalBill * 0.15;
        }
        else if (unitsConsumed > 200)
        {
            totalBill += totalBill * 0.10;
        }
        else if (unitsConsumed > 100)
        {
            totalBill += totalBill * 0.05;
        }

        return totalBill;
    }

    void display()
    {
        cout << "\n--- Electricity Bill ---" << endl;
        cout << "Consumer Name: " << consumerName << endl;
        cout << "Units Consumed: " << unitsConsumed << endl;
        cout << "Charge per Unit: Rs " << chargePerUnit << endl;
        cout << "Total Bill Amount: Rs " << calculateBill() << endl;
    }
};

int main()
{
    ElectricityBill bill;
    bill.inputDetails();
    bill.display();

    return 0;
}
