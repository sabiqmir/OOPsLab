// Print the Fibonacci series up to n terms
#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Number of terms should be positive!" << std::endl;
        return 1;
    }

    int first = 0, second = 1, next;

    std::cout << "Fibonacci series: ";

    if (n >= 1)
    {
        std::cout << first;
    }
    if (n >= 2)
    {
        std::cout << ", " << second;
    }

    for (int i = 3; i <= n; i++)
    {
        next = first + second;
        std::cout << ", " << next;
        first = second;
        second = next;
    }

    std::cout << std::endl;

    return 0;
}
