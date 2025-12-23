#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i & 1)
                cout << "X";
        }
        if (i & 1)
        {
            cout << "\n";
            n++;
        }
    }
}
