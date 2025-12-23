#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    int uppercase = 0;
    int lowercase = 0;
    int digits = 0;
    int whitespace = 0;
    int special = 0;

    for (int i = 0; text[i] != '\0'; ++i)
    {
        char c = text[i];
        if (c >= 'A' && c <= 'Z')
        {
            uppercase++;
        }
        else if (c >= 'a' && c <= 'z')
        {
            lowercase++;
        }
        else if (c >= '0' && c <= '9')
        {
            digits++;
        }
        else if (c == ' ' || c == '\t' || c == '\n')
        {
            whitespace++;
        }
        else
        {
            special++;
        }
    }

    cout << "Uppercase letters: " << uppercase << endl;
    cout << "Lowercase letters: " << lowercase << endl;
    cout << "Digits:            " << digits << endl;
    cout << "Whitespace:        " << whitespace << endl;
    cout << "Special characters:" << special << endl;

    return 0;
}
