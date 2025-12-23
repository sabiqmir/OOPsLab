#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double m1, m2, m3, m4, m5;

    cout << "Enter marks for 5 subjects (out of 100): ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    double total = m1 + m2 + m3 + m4 + m5;
    double percentage = (total / 500.0) * 100;

    cout << fixed << setprecision(2);
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 90)
    {
        cout << "Grade A (Distinction)" << endl;
    }
    else if (percentage >= 75)
    {
        cout << "Grade B (First Division)" << endl;
    }
    else if (percentage >= 60)
    {
        cout << "Grade C (Second Division)" << endl;
    }
    else if (percentage >= 40)
    {
        cout << "Grade D (Pass)" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }

    return 0;
}
