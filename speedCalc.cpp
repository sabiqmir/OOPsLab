#include <iostream>
using namespace std;

class Speed
{
private:
    double distance;
    double time;

public:
    Speed(double d, double t) : distance(d), time(t) {}

    double calculateSpeed()
    {
        return distance / time;
    }

    void display()
    {
        cout << "Distance: " << distance << " km" << endl;
        cout << "Time: " << time << " hours" << endl;
        cout << "Speed: " << calculateSpeed() << " km/hr" << endl;
    }
};

int main()
{
    double d, t;
    cout << "Enter distance (km): ";
    cin >> d;
    cout << "Enter time (hours): ";
    cin >> t;

    Speed speed(d, t);
    speed.display();

    return 0;
}
