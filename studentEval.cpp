#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
protected:
    string name;
    double score;
public:
    Student(const string& n, double s) : name(n), score(s) {}
    virtual string calculateResult() {
        return "Not evaluated";
    }
    virtual ~Student() {}
};

class Undergraduate : public Student {
public:
    Undergraduate(const string& n, double s) : Student(n, s) {}
    string calculateResult() {
        return (score >= 40.0) ? "Pass (UG)" : "Fail (UG)";
    }
};

class Postgraduate : public Student {
public:
    Postgraduate(const string& n, double s) : Student(n, s) {}
    string calculateResult() {
        return (score >= 50.0) ? "Pass (PG)" : "Fail (PG)";
    }
};

int main() {
    vector<Student*> students;
    students.push_back(new Undergraduate("Alice", 65.5));
    students.push_back(new Postgraduate("Bob", 48.0));
    students.push_back(new Undergraduate("Charlie", 38.0));

    for (const auto& student : students) {
        cout << "Result: " << student->calculateResult() << endl;
    }

    for (auto& student : students) {
        delete student;
    }
    return 0;
}
