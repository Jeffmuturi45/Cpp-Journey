#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    int id;
    float basicSalary;

public:
    void setDetails()
    {
        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void displayDetails()
    {
        cout << "\nEmployee Name : " << name << endl;
        cout << "Employee ID   : " << id << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
    }
};

// The Derived Class1
class PermanentEmployee : public Employee
{
private:
    float allowance;

public:
    void setAllowance()
    {
        cout << "Enter Allowance: ";
        cin >> allowance;
    }

    float calculateSalary()
    {
        return basicSalary + allowance;
    }
};

// Derived Class2
class ContractEmployee : public Employee
{
private:
    int hoursWorked;
    float ratePerHour;

public:
    void setWorkDetails()
    {
        cout << "Enter Hours Worked: ";
        cin >> hoursWorked;

        cout << "Enter Rate Per Hour: ";
        cin >> ratePerHour;
    }

    float calculateSalary()
    {
        return hoursWorked * ratePerHour;
    }
};

int main()
{
    PermanentEmployee p;
    ContractEmployee c;

    cout << "===== Permanent Employee =====" << endl;
    p.setDetails();
    p.setAllowance();

    cout << "\nPermanent Employee Details" << endl;
    p.displayDetails();
    cout << "Total Salary: " << p.calculateSalary() << endl;

    cout << "\n==============================" << endl;

    cout << "\n===== Contract Employee =====" << endl;
    c.setDetails();
    c.setWorkDetails();

    cout << "\nContract Employee Details" << endl;
    c.displayDetails();
    cout << "Total Salary: " << c.calculateSalary() << endl;

    return 0;
}
