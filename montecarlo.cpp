#include <iostream>
#include <random>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    cout << "Enter the points you want to test with: ";
    long long total_points;
    cin >> total_points;
    long long points_in_circle = 0;

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(-1.0, 1.0);

    for (long long i = 0; i < total_points; ++i)
    {
        double x = dis(gen);
        double y = dis(gen);

        if (x * x + y * y <= 1.0)
        {
            points_in_circle++;
        }
    }

    double pi_estimate = 4.0 * points_in_circle / total_points;

    std::cout << "Estimated value of Pi: " << std::fixed << std::setprecision(10) << pi_estimate << std::endl;

    return 0;
}
