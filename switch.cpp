#include <iostream>
using namespace std;

int main() {
    int unitcode;

    cout<<"Enter unit code: ";
    cin>>unitcode;

    switch (unitcode) {
        case 101:
            cout<<"Maths";
            break;
        case 102:
            cout<<"English";
            break;
        case 103:
            cout<<"Programming";
            break;
        case 104:
            cout<<"Agriculture";
            break;

        default:
            cout<<"Error!! Wrong unit code entered";

    }
    return 0;
}