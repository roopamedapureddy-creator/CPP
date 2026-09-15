#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int empID;
    string name;
    float basicSalary, allowances;

public:
    Employee(int id, string n, float basic, float allow)
    {
        empID = id;
        name = n;
        basicSalary = basic;
        allowances = allow;
    }
    float grossSalary()
    {
        return basicSalary + allowances;
    }
    void display()
    {
        cout << "Employee ID   : " << empID << endl;
        cout << "Name          : " << name << endl;
        cout << "Basic Salary  : " << basicSalary << endl;
        cout << "Allowances    : " << allowances << endl;
        cout << "Gross Salary  : " << grossSalary() << endl;
    }

    friend void compareSalary(Employee e1, Employee e2);

    ~Employee()
    {
        cout << "Destructor called for " << name << endl;
    }
};

void compareSalary(Employee e1, Employee e2)
{
    cout << "\nSalary Comparison" << endl;
    cout << "-----------------" << endl;

    if (e1.grossSalary() > e2.grossSalary())
        cout << e1.name << " has the higher salary." << endl;
    else if (e2.grossSalary() > e1.grossSalary())
        cout << e2.name << " has the higher salary." << endl;
    else
        cout << "Both employees have the same salary." << endl;
}
int main()
{
    Employee e1(101, "Ravi", 30000, 5000);
    Employee e2(102, "Anu", 28000, 7000);
    cout << "Employee 1 Details" << endl;
    cout << "------------------" << endl;
    e1.display();
    cout << "\nEmployee 2 Details" << endl;
    cout << "------------------" << endl;
    e2.display();
    compareSalary(e1, e2);
return 0;
}
