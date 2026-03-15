#include <iostream>
using namespace std;

int main() {
    int code;

    cout<<"Enter a number (1-7): ";
    cin>>code;

    switch (code) {
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
            
        case 5:
            cout<<"Friday";
            break;
            
        case 6:
            cout<<"Saturday";
            break;
            
        case 7:
            cout<<"Sunday";
            break;
					
        default:
            cout<<"Inavalid input! Please input a number between 1-7";

    }
    return 0;
}
