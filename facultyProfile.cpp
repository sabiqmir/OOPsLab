#include <iostream>
#include <string>
using namespace std;

class Faculty
{
protected:
    string name;
    int id;
    string department;

public:
    Faculty(string n, int i, string d) : name(n), id(i), department(d) {}

    void displayFaculty()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
    }
};

class Teacher : public Faculty
{
private:
    string subject;
    int yearsOfExperience;

public:
    Teacher(string n, int i, string d, string s, int y)
        : Faculty(n, i, d), subject(s), yearsOfExperience(y) {}

    void displayTeacher()
    {
        displayFaculty();
        cout << "Subject: " << subject << endl;
        cout << "Experience: " << yearsOfExperience << " years" << endl;
    }
};

class Researcher : public Faculty
{
private:
    string researchArea;
    int publications;

public:
    Researcher(string n, int i, string d, string r, int p)
        : Faculty(n, i, d), researchArea(r), publications(p) {}

    void displayResearcher()
    {
        displayFaculty();
        cout << "Research Area: " << researchArea << endl;
        cout << "Publications: " << publications << endl;
    }
};

int main()
{
    string name, dept, subject, research;
    int id, years, pubs, choice;

    cout << "Select type:" << endl;
    cout << "1. Teacher" << endl;
    cout << "2. Researcher" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();

    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter department: ";
    getline(cin, dept);

    if (choice == 1)
    {
        cout << "Enter subject: ";
        getline(cin, subject);
        cout << "Enter years of experience: ";
        cin >> years;

        Teacher t(name, id, dept, subject, years);
        cout << "\n--- Teacher Profile ---" << endl;
        t.displayTeacher();
    }
    else if (choice == 2)
    {
        cout << "Enter research area: ";
        getline(cin, research);
        cout << "Enter number of publications: ";
        cin >> pubs;

        Researcher r(name, id, dept, research, pubs);
        r.displayResearcher();
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
