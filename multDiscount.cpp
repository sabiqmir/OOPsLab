#include <iostream>
using namespace std;

int main()
{
    double purchaseValue, finalPrice, discount = 0;

    cout << "Enter purchase value: Rs ";
    cin >> purchaseValue;

    finalPrice = (purchaseValue < 100) ? purchaseValue : (purchaseValue >= 100 && purchaseValue < 500) ? (purchaseValue * 0.9)
                                                     : (purchaseValue >= 500 && purchaseValue < 1000)  ? (purchaseValue * 0.85)
                                                                                                       : (purchaseValue * 0.8);

    discount = purchaseValue - finalPrice;

    cout << "Original Amount: Rs " << purchaseValue << endl;
    cout << "Discount: Rs " << discount << endl;
    cout << "Final Price: Rs " << finalPrice << endl;

    if (purchaseValue < 100)
    {
        cout << "No discount applied" << endl;
    }
    else if (purchaseValue < 500)
    {
        cout << "10% discount applied" << endl;
    }
    else if (purchaseValue < 1000)
    {
        cout << "15% discount applied" << endl;
    }
    else
    {
        cout << "20% discount applied" << endl;
    }

    return 0;
}
