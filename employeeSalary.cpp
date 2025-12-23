#include <iostream>
#include <vector>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() {
        return 0.0;
    }
    virtual ~Employee() {}
};
  
class FullTimeEmployee : public Employee {
private:
    double monthlySalary;
public:
    FullTimeEmployee(double salary) : monthlySalary(salary) {}
    double calculateSalary() {
        return monthlySalary;
    }
};

class PartTimeEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    PartTimeEmployee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}
    double calculateSalary() {
        return hourlyRate * hoursWorked;
    }
};

class Intern : public Employee {
private:
    double stipend;
public:
    Intern(double st) : stipend(st) {}
    double calculateSalary() {
        return stipend;
    }
};

int main() {
    vector<Employee*> employees;
    employees.push_back(new FullTimeEmployee(50000.0));
    employees.push_back(new PartTimeEmployee(25.0, 160));
    employees.push_back(new Intern(15000.0));

    for (const auto& emp : employees) {
        cout << "Salary: " << emp->calculateSalary() << endl;
    }

    for (auto& emp : employees) {
        delete emp;
    }
    return 0;
}
