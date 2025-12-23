#include <iostream>
using namespace std;

void analyzeTemperatures(int temps[], int size)
{
    int hot_days = 0, pleasant_days = 0, cold_days = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "Day " << (i + 1) << ": " << temps[i] << "° - ";

        if (temps[i] >= 85)
        {
            hot_days++;
            cout << "Hot day" << endl;
        }
        else if (temps[i] >= 60)
        {
            pleasant_days++;
            cout << "Pleasant day" << endl;
        }
        else
        {
            cold_days++;
            cout << "Cold day" << endl;
        }
    }

    cout << "\nHot days (85° or higher): " << hot_days << endl;
    cout << "Pleasant days (60°-84°): " << pleasant_days << endl;
    cout << "Cold days (below 60°): " << cold_days << endl;
    cout << "Total days: " << size << endl;
}

int main()
{
    int temperatures[] = {55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 65, 78, 82, 88, 91, 92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59};
    int size = sizeof(temperatures) / sizeof(temperatures[0]);
    analyzeTemperatures(temperatures, size);

    return 0;
}
