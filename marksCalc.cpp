#include <iostream>
using namespace std;

class Marks
{
private:
    double sub1, sub2, sub3, sub4, sub5;

public:
    Marks() : sub1(0), sub2(0), sub3(0), sub4(0), sub5(0) {}

    void inputMarks()
    {
        cout << "Enter marks for subject 1: ";
        cin >> sub1;
        cout << "Enter marks for subject 2: ";
        cin >> sub2;
        cout << "Enter marks for subject 3: ";
        cin >> sub3;
        cout << "Enter marks for subject 4: ";
        cin >> sub4;
        cout << "Enter marks for subject 5: ";
        cin >> sub5;
    }

    double calculateTotal()
    {
        return sub1 + sub2 + sub3 + sub4 + sub5;
    }

    double calculatePercentage()
    {
        return (calculateTotal() / 500.0) * 100.0;
    }

    string calculateGrade()
    {
        double percentage = calculatePercentage();
        if (percentage >= 90)
            return "A+";
        else if (percentage >= 80)
            return "A";
        else if (percentage >= 70)
            return "B";
        else if (percentage >= 60)
            return "C";
        else if (percentage >= 50)
            return "D";
        else
            return "F";
    }

    void display()
    {
        cout << "\nMarks Summary" << endl;
        cout << "Total Marks: " << calculateTotal() << " / 500" << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main()
{
    Marks student;
    student.inputMarks();
    student.display();

    return 0;
}
