#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string name;
    int rollNumber;

public:
    Student(string n, int r) : name(n), rollNumber(r) {}

    void displayStudent()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Marks : public Student
{
private:
    double sub1, sub2, sub3;

public:
    Marks(string n, int r, double s1, double s2, double s3)
        : Student(n, r), sub1(s1), sub2(s2), sub3(s3) {}

    double calculateTotal()
    {
        return sub1 + sub2 + sub3;
    }

    double calculatePercentage()
    {
        return (calculateTotal() / 300.0) * 100.0;
    }

    void displayReport()
    {
        displayStudent();
        cout << "Subject 1: " << sub1 << endl;
        cout << "Subject 2: " << sub2 << endl;
        cout << "Subject 3: " << sub3 << endl;
        cout << "Total: " << calculateTotal() << " / 300" << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
    }
};

int main()
{
    string name;
    int roll;
    double s1, s2, s3;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter marks for subject 1: ";
    cin >> s1;
    cout << "Enter marks for subject 2: ";
    cin >> s2;
    cout << "Enter marks for subject 3: ";
    cin >> s3;

    Marks student(name, roll, s1, s2, s3);
    student.displayReport();

    return 0;
}
