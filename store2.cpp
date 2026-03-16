// tax system

#include <iostream>
using namespace std;

int main() {

    string customer, item;
    int price, quantity, totalCost;
    float discount, tax, finalAmount;

    cout << "Enter customer name: ";
    cin >> customer;

    cout << "Item: ";
    cin >> item;

    cout << "Price: ";
    cin >> price;

    cout << "Quantity: ";
    cin >> quantity;

    totalCost = price * quantity;

    // Discount Logic
    if (totalCost >= 20000) {
        discount = totalCost * 0.20;
    }
    else if (totalCost >= 10000) {
        discount = totalCost * 0.10;
    }
    else {
        discount = 0;
    }

    // After discount
    finalAmount = totalCost - discount;

    // Tax (5%)
    if (finalAmount > 0) {
        tax = finalAmount * 0.05;
        finalAmount = finalAmount + tax;
    }

    cout << "\n------ RECEIPT ------";

    cout << "\nCustomer:\t" << customer;
    cout << "\nItem:\t\t" << item;
    cout << "\nPrice:\t\t" << price;
    cout << "\nQuantity:\t" << quantity;
    cout << "\nTotal Cost:\t" << totalCost;
    cout << "\nFinal Amount:\t" << finalAmount;

    cout << "\n\nThank you for shopping with us!";

    return 0;
}
