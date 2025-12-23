#include <iostream>
using namespace std;

int sumOfDigits(int number)
{
    int sum = 0;
    int temp = number;

    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    return sum;
}

int productOfDigits(int number)
{
    int product = 1;
    int temp = number;

    while (temp > 0)
    {
        product *= temp % 10;
        temp /= 10;
    }

    return product;
}

int main()
{
    int number, choice;

    cout << "Enter an integer: ";
    cin >> number;

    if (number < 0)
    {
        number = -number;
        cout << "Working with absolute value: " << number << endl;
    }

    cout << "\nChoose operation:" << endl;
    cout << "1. Sum of digits" << endl;
    cout << "2. Product of digits" << endl;
    cout << "3. Both" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Sum of digits: " << sumOfDigits(number) << endl;
        break;

    case 2:
        cout << "Product of digits: " << productOfDigits(number) << endl;
        break;

    case 3:
        cout << "Sum of digits: " << sumOfDigits(number) << endl;
        cout << "Product of digits: " << productOfDigits(number) << endl;
        break;

    default:
        cout << "Invalid choice! Showing both results:" << endl;
        cout << "Sum of digits: " << sumOfDigits(number) << endl;
        cout << "Product of digits: " << productOfDigits(number) << endl;
    }

    return 0;
}
