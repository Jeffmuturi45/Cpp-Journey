#include <iostream>
using namespace std;
int main() {
    int i = 1, j;
    int n = 4;
    while (i <= n) {
        j = 1;
        while (j <= n) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

