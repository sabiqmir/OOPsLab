#include <iostream>
#include <string>
using namespace std;

void accept(int &value)
{
    cout << "Enter an integer: ";
    cin >> value;
    cout << "You entered integer: " << value << endl;
}

void accept(float &value)
{
    cout << "Enter a float: ";
    cin >> value;
    cout << "You entered float: " << value << endl;
}

void accept(string &value)
{
    cout << "Enter a string: ";
    cin >> value;
    cout << "You entered string: " << value << endl;
}

int main()
{
    int choice;

    cout << "Choose data type to accept:" << endl;
    cout << "1. Integer" << endl;
    cout << "2. Float" << endl;
    cout << "3. String" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        int intVal;
        accept(intVal);
    }
    else if (choice == 2)
    {
        float floatVal;
        accept(floatVal);
    }
    else if (choice == 3)
    {
        string strVal;
        accept(strVal);
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
