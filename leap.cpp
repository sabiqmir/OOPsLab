#include <iostream>
bool checkLeap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    return false;
}
int main()
{
    int year;
    std::cout << "Enter year: ";
    std::cin >> year;
    if (checkLeap(year) == true)
        std::cout << year << " is a leap year.";
    else
    {
        std::cout << year << " is not a leap year.\nNext 5 leap years are: \n";
        float start = year / 4;
        for (int i = start + 1; i <= start + 5; i++)
        {
            if (checkLeap(i * 4) == true)
                std::cout << i * 4 << std::endl;
            else
                start++;
        }
    }
}
