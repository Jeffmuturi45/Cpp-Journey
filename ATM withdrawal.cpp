#include <iostream>
using namespace std;

int main() {
    double balance = 10000.00;  // Starting balance
    double amount;
    bool withdrawn = false;

    cout << "Welcome to the ATM!" << endl;
    cout << "Current balance: Ksh " << balance << endl;
    cout << endl;

    while (!withdrawn) {
        cout << "Enter amount to withdraw: Ksh ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid amount. Please enter a positive number." << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance. Your balance is Ksh " << balance << ". Try again." << endl;
        } else {
            balance = balance - amount;
            cout << "Withdrawal successful!" << endl;
            cout << "New balance: Ksh " << balance << endl;
            withdrawn = true;
        }
    }

    return 0;
}
