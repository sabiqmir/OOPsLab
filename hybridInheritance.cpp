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

class Sports
{
protected:
    int sportsScore;

public:
    Sports(int s) : sportsScore(s) {}

    void displaySports()
    {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

class Academics
{
protected:
    int academicScore;

public:
    Academics(int a) : academicScore(a) {}

    void displayAcademics()
    {
        cout << "Academic Score: " << academicScore << endl;
    }
};

class Result : public Student, public Sports, public Academics
{
public:
    Result(string n, int r, int s, int a)
        : Student(n, r), Sports(s), Academics(a) {}

    int calculateTotal()
    {
        return sportsScore + academicScore;
    }

    void displayResult()
    {
        displayStudent();
        displaySports();
        displayAcademics();
        cout << "Total Score: " << calculateTotal() << endl;
    }
};

int main()
{
    string name;
    int roll, sports, academic;

    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter sports score: ";
    cin >> sports;
    cout << "Enter academic score: ";
    cin >> academic;

    Result student(name, roll, sports, academic);
    student.displayResult();

    return 0;
}
