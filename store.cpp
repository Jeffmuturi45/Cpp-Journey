// Small Store System that ask the user for: customer name, item bought, price, quantity

#include <iostream>
using namespace std;

int main() {

    string customer, item;
    int price, quantity, totalCost, discount, finalAmount;

    cout << "Enter customer name: ";
    cin >> customer;

    cout << "Item: ";
    cin >> item;

    cout << "Price: ";
    cin >> price;

    cout << "Quantity: ";
    cin >> quantity;

    totalCost = price * quantity;
    

    cout << "\n------RECEIPT------";

    cout << "\nCustomer:\t" << customer;
    cout << "\nItem:\t\t" << item;
    cout << "\nPrice:\t\t" << price;
    cout << "\nQuantity:\t" << quantity;
    cout << "\nTotal Cost:\t" << totalCost;
    
    if (totalCost>=10000){
    	discount = totalCost * 0.10;
    	finalAmount = totalCost - discount;
		cout<<"\n You qualify for a 10% discount!! \n";
		cout << "\n Final Amount: \t" << finalAmount;	
	}else{
		finalAmount = totalCost;
		cout <<"\n No discount available. \n";
		cout << "\n Final Amount: \t" << finalAmount;
	}

    cout << "\n\nThank you for shopping with us!";

    return 0;
}
