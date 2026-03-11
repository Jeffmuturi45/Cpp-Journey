#include <iostream>
using namespace std;

int main(){
int a, b, c;

cout<<"Enter first number: \n";
cin>>a;

cout<<"Enter second number: \n";
cin>>b;

cout<<"Enter third number: \n";
cin>>c;

if(a>b && b>c){
    cout<<"a is the largest";
}else if(b>a && b>c){
    cout<<"b is the largest";
}else{
cout<<"c is the largest";
}
return 0;
}
