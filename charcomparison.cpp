#include <iostream>
#include <cctype>
std::string classify(char c)
{
    if (isalpha(c))
    {
        char ch = tolower(c);
        switch (ch)
        {
        case 'a':
            return "Vowel";
        case 'e':
            return "Vowel";
        case 'i':
            return "Vowel";
        case 'o':
            return "Vowel";
        case 'u':
            return "Vowel";
        default:
            return "Consonant";
        }
    }
    else if (!isalnum(c))
    {
        return "Special Character";
    }
    else
        return "Digit";
}
int main()
{
    char ch;
    std::cout << "Enter character: ";
    std::cin >> ch;
    std::cout << "The entered character is a: " << classify(ch) << std::endl;
}
