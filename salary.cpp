#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int salary;

public:
    string name;
    int pin;

    void setSalary(int s) {
        salary = s;
    }

    int getSalary() {
        return salary;
    }
};

int main() {
    Employee emp;

    emp.setSalary(10000);
    emp.name = "Jane";
    emp.pin = 5400;

    cout << "Salary: " << emp.getSalary() << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Pin: " << emp.pin << endl;

    return 0;
}
