#include <iostream>
using namespace std;

int main(){
//	variable declaration
	int average;
	
//	prompt user to input marks
	cout<<"Input average marks: \n";
	cin>>average;
	
//	if statement logic to tally marks
	if(average>=60 && average<=100){
		cout<<"Credit";
	}else if(average>=40 && average<=60){
		cout<<"pass";
	}else if(average>=0 && average<=40){
		cout<<"fail";
	}else{
//		otherwise outputs invalid marks 
		cout<<"Invalid marks"; 
	}
	return 0;
}
