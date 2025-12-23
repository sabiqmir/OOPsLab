#include <iostream>

char assignGrade(int perc)
{
    if (perc >= 90 && perc <= 100)
        return 'A';
    else if (perc >= 80 && perc < 90)
        return 'B';
    else if (perc >= 70 && perc < 80)
        return 'C';
    else if (perc >= 60 && perc < 70)
        return 'D';
    else
        return 'F';
}

int main()
{
    int subjects[5];
    int failcount = 0;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter percentage for subject: " << i + 1 << std::endl;
        std::cin >> subjects[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (assignGrade(subjects[i]) == 'F')
            failcount++;
        if (failcount > 1)
        {
            std::cout << "Repeat Year.";
            return 0;
        }
        std::cout << "Grade in subject " << i + 1 << " is " << assignGrade(subjects[i]);
    }
}
