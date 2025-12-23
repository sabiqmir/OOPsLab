#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string str;
    int vowels = 0, consonants = 0;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    for (char c : str)
    {
        if (std::isalpha(c))
        {
            char lower_c = std::tolower(c);
            if (lower_c == 'a' || lower_c == 'e' || lower_c == 'i' ||
                lower_c == 'o' || lower_c == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    std::cout << "Number of vowels: " << vowels << std::endl;
    std::cout << "Number of consonants: " << consonants << std::endl;
    return 0;
}
