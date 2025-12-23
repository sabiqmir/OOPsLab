#include <iostream>
#include <string>
#include <cctype>
std::string reverseString(std::string s)
{
    std::string reversed = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        reversed += s[i];
    }
    return reversed;
}

int main()
{
    std::string str, original;
    std::cout << "Enter a string: ";
    std::cin >> str;

    original = str;

    for (char &c : str)
    {
        c = std::tolower(c);
    }

    std::string reversed = reverseString(str);

    if (str == reversed)
    {
        std::cout << "\"" << original << "\" is a palindrome." << std::endl;
    }
    else
    {
        std::cout << "\"" << original << "\" is not a palindrome." << std::endl;
    }

    return 0;
}
