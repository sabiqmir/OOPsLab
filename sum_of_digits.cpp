// Input a number and calculate the sum of its digits
#include <iostream>

int main()
{
    int num, sum = 0, digit;

    std::cout << "Enter a number: ";
    std::cin >> num;

    int original = num;

    // Handle negative numbers
    if (num < 0)
    {
        num = -num;
    }

    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    std::cout << "Sum of digits of " << original << " is: " << sum << std::endl;

    return 0;
}
