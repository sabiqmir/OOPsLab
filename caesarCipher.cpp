#include <iostream>
#include <string>
#include <vector>
using namespace std;

void printAscii(const string &label, const string &text)
{
    cout << label;
    for (char c : text)
    {
        cout << static_cast<int>(c) << " ";
    }
    cout << endl;
}

string caesarCipher(string text, int shift)
{
    string result = "";
    for (char &c : text)
    {
        if (isalpha(c))
        {
            char base = isupper(c) ? 'A' : 'a';
            result += (c - base + shift) % 26 + base;
        }
        else
        {
            result += c;
        }
    }
    return result;
}

string xorCipher(string text, char key)
{
    string result = text;
    for (char &c : result)
    {
        c = c ^ key;
    }
    return result;
}

int main()
{
    string inputText;
    cout << "Enter text to encrypt: ";
    getline(cin, inputText);

    cout << "Text: " << inputText << endl;
    printAscii("ASCII: ", inputText);

    int shift = 3;
    string caesarEncrypted = caesarCipher(inputText, shift);
    cout << "Encrypted: " << caesarEncrypted << endl;
    printAscii("ASCII:     ", caesarEncrypted);
    string caesarDecrypted = caesarCipher(caesarEncrypted, 26 - shift);
    cout << "Decrypted: " << caesarDecrypted << endl;

    char xorKey = 'K';
    string xorEncrypted = xorCipher(inputText, xorKey);
    cout << "Encrypted: " << xorEncrypted << endl;
    printAscii("ASCII:     ", xorEncrypted);
    string xorDecrypted = xorCipher(xorEncrypted, xorKey);
    cout << "Decrypted: " << xorDecrypted << endl;

    return 0;
}
