#include <iostream>

int main()
{
    int num, reversed = 0, remainder;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    int original = num;

    bool isNegative = false;
    if (num < 0)
    {
        isNegative = true;
        num = -num;
    }

    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (isNegative)
    {
        reversed = -reversed;
    }

    std::cout << "Original number: " << original << std::endl;
    std::cout << "Reversed number: " << reversed << std::endl;

    return 0;
}
