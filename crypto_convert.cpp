// Multi-Crypto Currency Converter to Usd/Inr
#include <iostream>
using namespace std;

int main() {
    double amount;
    int cryptoChoice, currencyChoice;

    // fixed conversion rates (example values)
    double btc_to_usd = 110000,   btc_to_inr = 9585477;   // Bitcoin
    double eth_to_usd = 4358,    eth_to_inr = 383652;    // Ethereum
    double doge_to_usd = 0.21,   doge_to_inr = 18.63;      // Dogecoin
    double ada_to_usd = 0.81,    ada_to_inr = 71.15;        // Cardano
    double sol_to_usd = 202.84,      sol_to_inr = 17586.67;      // Solana

    cout << "--- Crypto Converter ---" << endl;
    cout << "1. Bitcoin (BTC)\n2. Ethereum (ETH)\n3. Dogecoin (DOGE)\n4. Cardano (ADA)\n5. Solana (SOL)\n";
    cout << "Select cryptocurrency: ";
    cin >> cryptoChoice;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "Convert to:\n1. USD\n2. INR\nEnter choice: ";
    cin >> currencyChoice;

    double result = 0;

    switch (cryptoChoice) {
        case 1: // Bitcoin
            result = (currencyChoice == 1) ? amount * btc_to_usd : amount * btc_to_inr;
            break;
        case 2: // Ethereum
            result = (currencyChoice == 1) ? amount * eth_to_usd : amount * eth_to_inr;
            break;
        case 3: // Dogecoin
            result = (currencyChoice == 1) ? amount * doge_to_usd : amount * doge_to_inr;
            break;
        case 4: // Cardano
            result = (currencyChoice == 1) ? amount * ada_to_usd : amount * ada_to_inr;
            break;
        case 5: // Solana
            result = (currencyChoice == 1) ? amount * sol_to_usd : amount * sol_to_inr;
            break;
        default:
            cout << "Invalid crypto choice!" << endl;
            return 0;
    }

    if (currencyChoice == 1)
        cout << "Converted Amount = $" << result << endl;
    else if (currencyChoice == 2)
        cout << "Converted Amount = Rs " << result << endl;
    else
        cout << "Invalid currency choice!" << endl;

    return 0;
}
