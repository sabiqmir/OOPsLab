#include <iostream>
#include <cmath>
using namespace std;

double findSmallest(double arr[], int size)
{
    double smallest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

double findLargest(double arr[], int size)
{
    double largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

double findAverage(double arr[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

double findStandardDeviation(double arr[], int size)
{
    double sum_squares = 0;
    double average = findAverage(arr, size);

    for (int i = 0; i < size; i++)
    {
        sum_squares += arr[i] * arr[i];
    }

    return sqrt((sum_squares / size) - (average * average));
}

int main()
{
    double values[] = {12.5, 8.3, 15.7, 4.2, 19.8, 6.1, 11.4, 9.9, 14.3, 7.6, 22.1, 3.8};
    int size = sizeof(values) / sizeof(values[0]);

    double smallest = findSmallest(values, size);
    double largest = findLargest(values, size);
    double average = findAverage(values, size);
    double range = largest - smallest;
    double std_dev = findStandardDeviation(values, size);

    cout << "Smallest value: " << smallest << endl;
    cout << "Largest value: " << largest << endl;
    cout << "Average value: " << average << endl;
    cout << "Range: " << range << endl;
    cout << "Standard deviation: " << std_dev << endl;

    return 0;
}
