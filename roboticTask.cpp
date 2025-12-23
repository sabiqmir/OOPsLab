#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Robot {
protected:
    string id;
public:
    Robot(const string& i) : id(i) {}
    virtual void performTask() = 0;
    virtual ~Robot() {}
};

class CleaningRobot : public Robot {
public:
    CleaningRobot(const string& i) : Robot(i) {}
    void performTask() {
        cout << id << " is performing: Vacuuming and Mopping." << endl;
    }
};

class SecurityRobot : public Robot {
public:
    SecurityRobot(const string& i) : Robot(i) {}
    void performTask() {
        cout << id << " is performing: Patrolling and Surveillance." << endl;
    }
};

class DeliveryRobot : public Robot {
public:
    DeliveryRobot(const string& i) : Robot(i) {}
    void performTask() {
        cout << id << " is performing: Package Delivery to assigned location." << endl;
    }
};

int main() {
    vector<Robot*> robots;
    robots.push_back(new CleaningRobot("C-101"));
    robots.push_back(new SecurityRobot("S-205"));
    robots.push_back(new DeliveryRobot("D-312"));

    cout << "Initiating all robot tasks polymorphically:" << endl;
    for (const auto& robot : robots) {
        robot->performTask();
    }

    for (auto& robot : robots) {
        delete robot;
    }
    return 0;
}
