#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
template <typename T>
void calculateStats(const vector<T> &data, const string &typeName)
{
    if (data.empty())
    {
        cout << "Data set is empty." << endl;
        return;
    }

    int n = data.size();

    // Mean
    T sum = 0;
    for (T val : data)
        sum += val;
    T mean = sum / n;

    // Median
    vector<T> sortedData = data;
    sort(sortedData.begin(), sortedData.end());
    T median;
    if (n % 2 == 0)
    {
        median = (sortedData[n / 2 - 1] + sortedData[n / 2]) / 2.0;
    }
    else
    {
        median = sortedData[n / 2];
    }

    // Mode
    T mode = data[0];
    int maxCount = 0;
    for (int i = 0; i < n; ++i)
    {
        int count = 0;
        for (int j = 0; j < n; ++j)
        {
            if (data[j] == data[i])
                count++;
        }
        if (count > maxCount)
        {
            maxCount = count;
            mode = data[i];
        }
    }

    T variance = 0;
    for (T val : data)
    {
        variance += (val - mean) * (val - mean);
    }
    variance /= n;
    T stddev = sqrt(variance);

    cout << fixed << setprecision(6);
    cout << "Mean:              " << mean << endl;
    cout << "Median:            " << median << endl;
    cout << "Mode:              " << mode << endl;
    cout << "Variance:          " << variance << endl;
    cout << "Standard Deviation:" << stddev << endl;
}

int main()
{
    vector<double> data_d = {2.5, 3.1, 2.5, 4.8, 3.1, 5.2, 2.5};
    vector<float> data_f;

    for (double val : data_d)
    {
        data_f.push_back(static_cast<float>(val));
    }

    calculateStats(data_d, "double");
    calculateStats(data_f, "float");

    return 0;
}
