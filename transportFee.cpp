#include <iostream>
#include <vector>

using namespace std;

class Transport {
public:
    virtual double fare(int distance) = 0;
    virtual ~Transport() {}
};

class Bus : public Transport {
private:
    const double baseFare = 50.0;
    const double ratePerKm = 2.5;
public:
    double fare(int distance) {
        return baseFare + (distance * ratePerKm);
    }
};

class Train : public Transport {
private:
    const double ratePerKm = 1.8;
public:
    double fare(int distance) {
        return distance * ratePerKm + 10.0;
    }
};

class Flight : public Transport {
private:
    const double baseFare = 1500.0;
    const double ratePerKm = 5.0;
public:
    double fare(int distance) {
        return baseFare + (distance * ratePerKm * 1.5);
    }
};

int main() {
    vector<Transport*> transports;
    transports.push_back(new Bus());
    transports.push_back(new Train());
    transports.push_back(new Flight());

    int distance = 300; 

    cout << "Distance: " << distance << " km" << endl;
    cout << "Bus Fare: " << transports[0]->fare(distance) << endl;
    cout << "Train Fare: " << transports[1]->fare(distance) << endl;
    cout << "Flight Fare: " << transports[2]->fare(distance) << endl;

    for (auto& tr : transports) {
        delete tr;
    }
    return 0;
}
