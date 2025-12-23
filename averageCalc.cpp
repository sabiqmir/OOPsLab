#include <iostream>
using namespace std;

class Average
{
private:
    int num1;
    int num2;
    int num3;

public:
    Average() : num1(0), num2(0), num3(0) {}

    void inputNumbers()
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "Enter third number: ";
        cin >> num3;
    }

    double calculateAverage()
    {
        return (num1 + num2 + num3) / 3.0;
    }

    int findMax()
    {
        int max = num1;
        if (num2 > max)
            max = num2;
        if (num3 > max)
            max = num3;
        return max;
    }

    int findMin()
    {
        int min = num1;
        if (num2 < min)
            min = num2;
        if (num3 < min)
            min = num3;
        return min;
    }

    void display()
    {
        cout << "Numbers: " << num1 << ", " << num2 << ", " << num3 << endl;
        cout << "Average: " << calculateAverage() << endl;
        cout << "Maximum: " << findMax() << endl;
        cout << "Minimum: " << findMin() << endl;
    }
};

int main()
{
    Average avg;
    avg.inputNumbers();
    avg.display();

    return 0;
}
