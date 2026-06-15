#include <iostream>
using namespace std;

int area(int l, int w){
    int z;
    z = l * w;
    return z;
}

float area(float l, float w){
    float z;
    z = l * w;
    return z;
}

int main(){

    int l1, w1;
    float l2, w2;

    // Integer area
    cout << "Enter integer length: \n";
    cin >> l1;

    cout << "Enter integer width: \n";
    cin >> w1;

    cout << "Integer area is: " << area(l1, w1) << "\n\n";

    // Float area
    cout << "Enter float length: \n";
    cin >> l2;

    cout << "Enter float width: \n";
    cin >> w2;

    cout << "Float area is: " << area(l2, w2) << "\n";

    return 0;
}
