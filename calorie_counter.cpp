// Calorie Counter with alerts
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of meals eaten today: ";
    cin >> n;

    double calories, totalCalories = 0;

    for (int i = 1; i <= n; i++) {
        cout << "Enter calories for meal " << i << ": ";
        cin >> calories;
        totalCalories += calories;
    }

    cout << "\nTotal Calories Consumed = " << totalCalories << " kcal" << endl;

    if (totalCalories > 2500)
        cout << "Warning: You have exceeded the recommended 2500 kcal limit!" << endl;
    else
        cout << "Within healthy daily limit." << endl;

    return 0;
}
