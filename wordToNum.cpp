#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    cout << "Enter a two-digit number (0-99): ";
    cin >> num;

    if (num < 0 || num > 99)
    {
        cout << "Invalid input. Please enter a number between 0 and 99." << endl;
        return 1;
    }

    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num == 0)
    {
        cout << "Zero" << endl;
    }
    else if (num >= 10 && num <= 19)
    {
        cout << teens[num - 10] << endl;
    }
    else
    {
        cout << tens[num / 10] << " " << ones[num % 10] << endl;
    }

    return 0;
}
