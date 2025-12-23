#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    do
    {
        cout << "1. Factorial\n";
        cout << "2. Prime Number Check\n";
        cout << "3. Armstrong Number Check\n";
        cout << "4. Palindrome Number Check\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        int n, originalN, digit, reversedN = 0;
        long long factorial = 1;
        bool isPrime = true;
        int sum = 0;

        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter a positive integer: ";
            cin >> n;
            originalN = n;
        }

        switch (choice)
        {
        case 1:
            if (n < 0)
            {
                cout << "Factorial not defined for negative numbers." << endl;
            }
            else
            {
                for (int i = 1; i <= n; ++i)
                {
                    factorial *= i;
                }
                cout << "Factorial of " << n << " is " << factorial << endl;
            }
            break;
        case 2:
            if (n <= 1)
            {
                isPrime = false;
            }
            else
            {
                for (int i = 2; i * i <= n; ++i)
                {
                    if (n % i == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }
            }
            if (isPrime)
                cout << n << " is a prime number." << endl;
            else
                cout << n << " is not a prime number." << endl;
            break;
        case 3:
            while (n > 0)
            {
                digit = n % 10;
                sum += pow(digit, 3);
                n /= 10;
            }
            if (sum == originalN)
                cout << originalN << " is an Armstrong number." << endl;
            else
                cout << originalN << " is not an Armstrong number." << endl;
            break;
        case 4:
            while (n > 0)
            {
                digit = n % 10;
                reversedN = reversedN * 10 + digit;
                n /= 10;
            }
            if (originalN == reversedN)
                cout << originalN << " is a palindrome." << endl;
            else
                cout << originalN << " is not a palindrome." << endl;
            break;
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}
