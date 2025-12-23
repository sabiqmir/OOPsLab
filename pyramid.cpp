#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows for the pyramid: ";
    cin >> rows;

    cout << "\nNumber Pyramid:" << endl;

    for (int i = 1; i <= rows; i++)
    {
        for (int space = 1; space <= rows - i; space++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int k = i - 1; k >= 1; k--)
        {
            cout << k;
        }

        cout << endl;
    }

    return 0;
}
