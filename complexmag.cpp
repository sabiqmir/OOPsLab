#include <iostream>
#include <cmath>
int main()
{
    float real, imag, c_real, c_imag;
    std::cout << "Enter 1st Number Real Part: ";
    std::cin >> real;
    std::cout << "Enter 1st Number Imaginary Part: ";
    std::cin >> imag;
    std::cout << "Enter 2nd Number Real Part: ";
    std::cin >> c_real;
    std::cout << "Enter 2nd Number Imaginary Part: ";
    std::cin >> c_imag;

    float mag1 = sqrt(pow(real, 2) + pow(imag, 2));
    float mag2 = sqrt(pow(c_real, 2) + pow(c_imag, 2));

    if (mag1 == mag2)
        std::cout << "Equal";
    else if (mag1 > mag2)
        std::cout << "Magnitude of " << real << " + (" << imag << ")i is greater than magnitude of " << c_real << " + (" << c_imag << ")i\n";
    else
        std::cout << "Magnitude of " << c_real << " + (" << c_imag << ")i is greater than magnitude of " << real << " + (" << imag << ")i\n";
}
