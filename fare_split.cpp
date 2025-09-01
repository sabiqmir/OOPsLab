// Fare per Person Calculator
#include <iostream>
using namespace std;

int main() {
    double distance, farePerKm = 15, baseFare = 50;
    int passengers;

    cout << "Enter distance traveled (in km): ";
    cin >> distance;
    cout << "Enter number of passengers: ";
    cin >> passengers;

    double totalFare = baseFare + (farePerKm * distance);
    double farePerPerson = totalFare / passengers;

    cout << "\nTotal Fare: Rs. " << totalFare << endl;
    cout << "Fare per Person: Rs. " << farePerPerson;

    return 0;
}
