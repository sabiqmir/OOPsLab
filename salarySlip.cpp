#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    int id;
    double baseSalary;

public:
    Employee(string n, int i, double bs) : name(n), id(i), baseSalary(bs) {}

    void displayEmployee()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Base Salary: Rs " << baseSalary << endl;
    }
};

class Salary : public Employee
{
private:
    double allowances;
    double deductions;

public:
    Salary(string n, int i, double bs, double a, double d)
        : Employee(n, i, bs), allowances(a), deductions(d) {}

    double calculateNetSalary()
    {
        return baseSalary + allowances - deductions;
    }

    void displaySalarySlip()
    {
        displayEmployee();
        cout << "Allowances: Rs " << allowances << endl;
        cout << "Deductions: Rs " << deductions << endl;
        cout << "Net Salary: Rs " << calculateNetSalary() << endl;
    }
};

int main()
{
    string name;
    int id;
    double base, allow, deduct;

    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter base salary: ";
    cin >> base;
    cout << "Enter allowances: ";
    cin >> allow;
    cout << "Enter deductions: ";
    cin >> deduct;

    Salary emp(name, id, base, allow, deduct);
    cout << "\nSalary Slip" << endl;
    emp.displaySalarySlip();

    return 0;
}
