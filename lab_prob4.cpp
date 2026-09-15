#include <iostream>
#include <string>
using namespace std;

class University
{
    string universityName;
    string location;

public:
    
    University(string name, string loc)
    {
        universityName = name;
        location = loc;
    }

    
    class Student
    {
        int rollNo;
        string name;
        string department;

    public:
        
        Student()
        {
            rollNo = 0;
            name = "Unknown";
            department = "Unknown";
        }

        
        Student(int r, string n, string d)
        {
            rollNo = r;
            name = n;
            department = d;
        }

        
        void displayStudent()
        {
            cout << "Roll Number : " << rollNo << endl;
            cout << "Name        : " << name << endl;
            cout << "Department  : " << department << endl;
        }
    };

    
    void displayUniversity()
    {
        cout << "University Name : " << universityName << endl;
        cout << "Location        : " << location << endl;
    }
};

int main()
{
    
    University u("Aditya University", "Andhra Pradesh");

    
    University::Student students[5] =
    {
        University::Student(101, "Ravi", "CSE"),
        University::Student(102, "Anu", "ECE"),
        University::Student(103, "Sita", "CSE"),
        University::Student(104, "Kiran", "EEE"),
        University::Student(105, "Meena", "IT")
    };

    
    cout << "===== UNIVERSITY INFORMATION =====" << endl;
    u.displayUniversity();

    
    cout << "\n===== STUDENT INFORMATION =====" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "-----------------" << endl;
        students[i].displayStudent();
    }

    return 0;
}
