#include <iostream>
long long fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int n;
    std::cout << "Enter Number: ";
    std::cin >> n;
    std::cout << "Factorial of " << n << " is " << fact(n) << std::endl;
}
