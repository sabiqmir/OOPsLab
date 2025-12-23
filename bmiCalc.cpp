#include <iostream>
using namespace std;

class BMI
{
private:
    double weight;
    double height;

public:
    BMI(double w, double h) : weight(w), height(h) {}

    double calculateBMI()
    {
        return weight / (height * height);
    }

    string getCategory()
    {
        double bmi = calculateBMI();
        if (bmi < 18.5)
            return "Underweight";
        else if (bmi < 25.0)
            return "Normal";
        else if (bmi < 30.0)
            return "Overweight";
        else
            return "Obese";
    }

    void display()
    {
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Height: " << height << " m" << endl;
        cout << "BMI: " << calculateBMI() << endl;
        cout << "Category: " << getCategory() << endl;
    }
};

int main()
{
    double w, h;
    cout << "Enter weight (kg): ";
    cin >> w;
    cout << "Enter height (m): ";
    cin >> h;

    BMI bmi(w, h);
    bmi.display();

    return 0;
}
