#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
protected:
    int rollNumber;
    string course;

public:
    Student(string n, int a, int r, string c)
        : Person(n, a), rollNumber(r), course(c) {}

    void displayStudent()
    {
        displayPerson();
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
    }
};

class Result : public Student
{
private:
    double marks1, marks2, marks3;

public:
    Result(string n, int a, int r, string c, double m1, double m2, double m3)
        : Student(n, a, r, c), marks1(m1), marks2(m2), marks3(m3) {}

    double calculateTotal()
    {
        return marks1 + marks2 + marks3;
    }

    double calculatePercentage()
    {
        return (calculateTotal() / 300.0) * 100.0;
    }

    void displayResult()
    {
        displayStudent();
        cout << "Subject 1: " << marks1 << endl;
        cout << "Subject 2: " << marks2 << endl;
        cout << "Subject 3: " << marks3 << endl;
        cout << "Total: " << calculateTotal() << " / 300" << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
    }
};

int main()
{
    string name, course;
    int age, roll;
    double m1, m2, m3;

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter roll number: ";
    cin >> roll;
    cin.ignore();
    cout << "Enter course: ";
    getline(cin, course);
    cout << "Enter marks for subject 1: ";
    cin >> m1;
    cout << "Enter marks for subject 2: ";
    cin >> m2;
    cout << "Enter marks for subject 3: ";
    cin >> m3;

    Result student(name, age, roll, course, m1, m2, m3);
    student.displayResult();

    return 0;
}
