#include <iostream>
#include <cmath>

std::string classifyRoots(int a, int b, int c)
{
    if (a == 0)
        return "Invalid Equation";
    float disc = pow(b, 2) - 4 * a * c;
    if (disc == 0)
        return "Equal Roots.";
    else if (disc < 0)
        return "Imaginary Roots.";
    else
        return "Real Roots.";
}
int main()
{
    int a, b, c;
    std::cout << "Enter a, b and c: ";
    std::cin >> a >> b >> c;
    std::cout << classifyRoots(a, b, c);
}
