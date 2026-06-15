#include <iostream>
using namespace std;

int sum(int a, int b){
    int add;
    add = a + b;

    return add;
}

int main(){
    int a, b;

    cout << "Enter a: \n";
    cin >> a;

    cout << "Enter b: \n";
    cin >> b;

    int result = sum(a, b);

    cout << "The sum is: " << result << "\n";

    return 0;
}
