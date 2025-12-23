#include <iostream>
using namespace std;

bool isPalindrome(int number)
{
    int original = number;
    int reversed = 0;

    while (number > 0)
    {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    return original == reversed;
}

void printPalindromesInRange(int start, int end)
{
    cout << "Palindrome numbers between " << start << " and " << end << ":" << endl;
    bool found = false;

    for (int i = start; i <= end; i++)
    {
        if (isPalindrome(i))
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << "No palindromes found in this range.";
    }
    cout << endl;
}

int main()
{
    int choice, number, start, end;

    cout << "Palindrome Number Checker" << endl;
    cout << "1. Check if a number is palindrome" << endl;
    cout << "2. Find palindromes in a range" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter a number: ";
        cin >> number;

        if (isPalindrome(number))
        {
            cout << number << " is a palindrome!" << endl;
        }
        else
        {
            cout << number << " is not a palindrome." << endl;
        }
        break;

    case 2:
        cout << "Enter start of range: ";
        cin >> start;
        cout << "Enter end of range: ";
        cin >> end;

        printPalindromesInRange(start, end);
        break;

    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
