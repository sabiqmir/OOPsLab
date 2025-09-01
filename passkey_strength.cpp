// Simple Password Checker
#include <iostream>
#include <cctype>
using namespace std;

bool isStrong(string password) {
    if (password.length() < 8) return false;

    bool hasDigit = false, hasLetter = false;

    for (char c : password) {
        if (isdigit(c)) hasDigit = true;
        if (isalpha(c)) hasLetter = true;
    }

    return hasDigit && hasLetter;
}

int main() {
    string password;
    cout << "Enter a password: ";
    cin >> password;

    if (isStrong(password)) {
        cout << "Password is STRONG \n";
    } else {
        cout << "Password is WEAK  (must be at least 8 chars, contain letters & digits)\n";
    }

    return 0;
}
