#include <iostream>

int main()
{
    float marks[5];
    float total = 0, average, percentage;
    char grade;

    std::cout << "Enter marks for 5 subjects (out of 100):" << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Subject " << (i + 1) << ": ";
        std::cin >> marks[i];

        if (marks[i] < 0 || marks[i] > 100)
        {
            std::cout << "Invalid marks! Please enter marks between 0 and 100." << std::endl;
            i--;
            continue;
        }

        total += marks[i];
    }

    average = total / 5;
    percentage = (total / 500) * 100;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 50)
        grade = 'E';
    else
        grade = 'F';

    std::cout << "Total Marks: " << total << "/500" << std::endl;
    std::cout << "Average Marks: " << average << std::endl;
    std::cout << "Percentage: " << percentage << "%" << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    return 0;
}
