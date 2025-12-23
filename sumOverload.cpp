#include <iostream>
#include <string>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

string sum(string a, string b)
{
    return a + b;
}

int main()
{
    int choice;

    cout << "Choose operation:" << endl;
    cout << "1. Add two integers" << endl;
    cout << "2. Add three integers" << endl;
    cout << "3. Add two strings" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int x, y;
        cout << "Enter two integers: ";
        cin >> x >> y;
        cout << "Sum: " << sum(x, y) << endl;
    }
    else if (choice == 2)
    {
        int x, y, z;
        cout << "Enter three integers: ";
        cin >> x >> y >> z;
        cout << "Sum: " << sum(x, y, z) << endl;
    }
    else if (choice == 3)
    {
        string s1, s2;
        cout << "Enter two strings: ";
        cin >> s1 >> s2;
        cout << "Concatenated string: " << sum(s1, s2) << endl;
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
