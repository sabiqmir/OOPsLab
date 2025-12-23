#include <iostream>
int main()
{
    float a, b, res;
    char op;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter Operation you want to perform: ";
    std::cin >> op;
    std::cout << "Enter second number ";
    std::cin >> b;
    switch (op)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = (float)a / b;
        break;
    default:
        std::cout << "Invalid Operation";
        return 0;
    }
    std::cout << "The result of " << a << op << b << " is " << res << std::endl;
}
