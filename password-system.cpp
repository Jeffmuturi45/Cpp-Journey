#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "admin123";  // You can change this password
    string enteredPassword;
    int attempts = 0;
    int maxAttempts = 3;
    bool accessGranted = false;

    do {
        attempts++;
        cout << "Enter password: ";
        cin >> enteredPassword;

        if (enteredPassword == correctPassword) {
            accessGranted = true;
            cout << "Access granted!" << endl;
            cout << "Number of attempts taken: " << attempts << endl;
        } else {
            cout << "Wrong password. ";
            if (attempts < maxAttempts) {
                cout << "Try again." << endl;
            }
        }

    } while (!accessGranted && attempts < maxAttempts);

    if (!accessGranted) {
        cout << "Contact the Admin!" << endl;
    }

    return 0;
}
