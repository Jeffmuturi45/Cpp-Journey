#include <iostream>
using namespace std;

// rectangle
int area(int length, int width){
	return length * width;
}

// circle
float area(float radius){
	return 3.142 * radius * radius;
}

// triangle
float area(float base, int height){
	return 0.5 * base * height;
}

int main(){
	int choice;
	int l, w, h;
	float b, r;
	
	cout<<"Choose shape \n";
	cout<<"1. Rectangle \n";
	cout<<"2. Circle \n";
	cout<<"3. Triangle \n";
	
	cin>>choice;
	
	switch(choice){
		case 1:
			cout << "Enter length: ";
            cin >> l;

            cout << "Enter width: ";
            cin >> w;

            cout << "Area of rectangle = " << area(l, w) << endl;
            break;

        case 2:
            cout << "Enter radius: ";
            cin >> r;

            cout << "Area of circle = " << area(r) << endl;
            break;

        case 3:
            cout << "Enter base: ";
            cin >> b;

            cout << "Enter height: ";
            cin >> h;

            cout << "Area of triangle = " << area(b, h) << endl;
            break;
	}
	return 0;
}
