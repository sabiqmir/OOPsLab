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
    op == '+' ? res = a + b : op == '-' ? res = a - b
                          : op == '*'   ? res = a *b
                          : op == '/'   ? res = (float)a / b
                          : op == '%'   ? res = (int)a % (int)b
                                        : res = -1;

    std::cout << "The result of " << a << op << b << " is " << res << std::endl;
}
