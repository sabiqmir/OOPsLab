// Check whether a given number is prime or not
#include <iostream>
#include <cmath>

int main()
{
    int num;
    bool isPrime = true;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num <= 1)
    {
        isPrime = false;
    }
    else if (num == 2)
    {
        isPrime = true;
    }
    else if (num % 2 == 0)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 3; i <= sqrt(num); i += 2)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        std::cout << num << " is a prime number." << std::endl;
    }
    else
    {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}
