#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double hourly_wage;
    double hours_worked;

public:
    Employee(int emp_id, double wage, double hours) : id(emp_id), hourly_wage(wage), hours_worked(hours) {}

    int getId() const { return id; }
    double getHourlyWage() const { return hourly_wage; }
    double getHoursWorked() const { return hours_worked; }
    static double calculateGrossPay(double hourly_wage, double hours_worked)
    {
        if (hours_worked <= 40)
        {
            return hours_worked * hourly_wage;
        }
        else
        {
            return (40 * hourly_wage) + ((hours_worked - 40) * hourly_wage * 1.5);
        }
    }

    static double calculateNetPay(double gross_pay)
    {
        double tax = gross_pay * 0.03625;
        return gross_pay - tax;
    }

    static void processPayroll(Employee employees[], int size)
    {
        double total_payroll = 0;

        for (int i = 0; i < size; i++)
        {
            double gross_pay = calculateGrossPay(employees[i].getHourlyWage(), employees[i].getHoursWorked());
            double net_pay = calculateNetPay(gross_pay);

            cout << "Employee " << employees[i].getId() << " - Net Pay: $" << net_pay << endl;
            total_payroll += net_pay;
        }

        double average_pay = total_payroll / size;

        cout << "\nTotal employees: " << size << endl;
        cout << "Total payroll: $" << total_payroll << endl;
        cout << "Average amount paid: $" << average_pay << endl;
    }
};

int main()
{
    Employee employees[] = {
        Employee(101, 15.50, 42),
        Employee(102, 12.75, 38),
        Employee(103, 18.25, 45),
        Employee(104, 14.00, 40),
        Employee(105, 16.80, 47),
        Employee(106, 13.25, 35)};
    int size = sizeof(employees) / sizeof(employees[0]);

    Employee::processPayroll(employees, size);

    return 0;
}
