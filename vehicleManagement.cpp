#include <iostream>
#include <vector>

using namespace std;

class Vehicle {
public:
    virtual double maintenanceCost() = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    double maintenanceCost() {
        return 5000.0;
    }
};

class Bike : public Vehicle {
public:
    double maintenanceCost() {
        return 2000.0;
    }
};

class Truck : public Vehicle {
public:
    double maintenanceCost() {
        return 15000.0;
    }
};

int main() {
    vector<Vehicle*> vehicles;
    vehicles.push_back(new Car());
    vehicles.push_back(new Bike());
    vehicles.push_back(new Truck());

    cout << "Calculating Maintenance Costs:" << endl;
    cout << "Car Cost: " << vehicles[0]->maintenanceCost() << endl;
    cout << "Bike Cost: " << vehicles[1]->maintenanceCost() << endl;
    cout << "Truck Cost: " << vehicles[2]->maintenanceCost() << endl;

    for (auto& v : vehicles) {
        delete v;
    }
    return 0;
}
