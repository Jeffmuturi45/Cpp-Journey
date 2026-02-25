// a c++ program that inputs name,  admission, class course and prints all
#include <iostream>
using namespace std;

int main() {
    string name, StudentClass, course;
    int admission;

    cout<<"Enter your name: ";
    cin>>name;

    cout<<"Enter your admission: ";
    cin>>admission;

    cout<<"Enter your Studentclass: ";
    cin>>StudentClass;

    cout<<"Enter your course: ";
    cin>>course;

    cout<< "\n =====STUDENT PROFILE====== \n";
    cout<<"Name: "<<name <<"\n";
    cout<<"Admission: "<<admission <<"\n";
    cout<<"Studentclass: "<<StudentClass <<"\n";
    cout<<"Course: "<<course <<"\n";

    return 0;
}